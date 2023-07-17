#pragma once 
#include "pch.h"

using namespace System;
using namespace System::IO;
using namespace System::Security::Cryptography;

// ����� ��� ���������� ������
array<unsigned char>^ EncryptData(array<unsigned char>^ data, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    RijndaelManaged^ rijAlg = gcnew RijndaelManaged();
    rijAlg->Key = key;
    rijAlg->IV = iv;

    // �������� ������� ��� ����������
    ICryptoTransform^ encryptor = rijAlg->CreateEncryptor();

    // �������� ������ ��� ������ ������������� ������
    MemoryStream^ msEncrypt = gcnew MemoryStream();
    CryptoStream^ csEncrypt = gcnew CryptoStream(msEncrypt, encryptor, CryptoStreamMode::Write);
    csEncrypt->Write(data, 0, data->Length);
    csEncrypt->FlushFinalBlock();

    // ����������� ������������� ������
    return msEncrypt->ToArray();
}

// ����� ��� ������������ ������
array<unsigned char>^ DecryptData(array<unsigned char>^ encryptedData, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    RijndaelManaged^ rijAlg = gcnew RijndaelManaged();
    rijAlg->Key = key;
    rijAlg->IV = iv;

    // �������� ������� ��� ������������
    ICryptoTransform^ decryptor = rijAlg->CreateDecryptor();

    // �������� ������ ��� ������ ������������� ������
    MemoryStream^ msDecrypt = gcnew MemoryStream(encryptedData);
    CryptoStream^ csDecrypt = gcnew CryptoStream(msDecrypt, decryptor, CryptoStreamMode::Read);

    // ������ ������������� ������
    array<unsigned char>^ decryptedData = gcnew array<unsigned char>(encryptedData->Length);
    csDecrypt->Read(decryptedData, 0, decryptedData->Length);

    // ����������� ������������� ������
    return decryptedData;
}

// ����� ��� ������ ������ � ����
void WriteToFile(String^ filePath, array<unsigned char>^ data, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    // ���������� ������
    array<unsigned char>^ encryptedData = EncryptData(data, key, iv);

    // ������ ������������� ������ � ����
    FileStream^ fileStream = File::Create(filePath);
    fileStream->Write(encryptedData, 0, encryptedData->Length);
    fileStream->Close();
}

// ����� ��� ������ ������ �� �����
array<unsigned char>^ ReadFromFile(String^ filePath, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    // ������ ������������� ������ �� �����
    FileStream^ fileStream = File::OpenRead(filePath);
    array<unsigned char>^ encryptedData = gcnew array<unsigned char>(fileStream->Length);
    fileStream->Read(encryptedData, 0, encryptedData->Length);
    fileStream->Close();

    // ������������ ������
    array<unsigned char>^ decryptedData = DecryptData(encryptedData, key, iv);

    // ����������� ������������� ������
    return decryptedData;
}

String^ Encrypt(String^ input)
{
    String^ encrypted;

    // ������ ����������

    for (int i = 0; i < input->Length; i++)
    {
        // ������ �������� ������ ������� �� 1 ������� � ������� Unicode
        wchar_t encryptedChar = input[i] + 1;
        encrypted += encryptedChar;
    }

    return encrypted;
}