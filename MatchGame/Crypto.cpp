#pragma once 
#include "pch.h"

using namespace System;
using namespace System::IO;
using namespace System::Security::Cryptography;

// Метод для шифрования данных
array<unsigned char>^ EncryptData(array<unsigned char>^ data, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    RijndaelManaged^ rijAlg = gcnew RijndaelManaged();
    rijAlg->Key = key;
    rijAlg->IV = iv;

    // Создание объекта для шифрования
    ICryptoTransform^ encryptor = rijAlg->CreateEncryptor();

    // Создание потока для записи зашифрованных данных
    MemoryStream^ msEncrypt = gcnew MemoryStream();
    CryptoStream^ csEncrypt = gcnew CryptoStream(msEncrypt, encryptor, CryptoStreamMode::Write);
    csEncrypt->Write(data, 0, data->Length);
    csEncrypt->FlushFinalBlock();

    // Возвращение зашифрованных данных
    return msEncrypt->ToArray();
}

// Метод для дешифрования данных
array<unsigned char>^ DecryptData(array<unsigned char>^ encryptedData, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    RijndaelManaged^ rijAlg = gcnew RijndaelManaged();
    rijAlg->Key = key;
    rijAlg->IV = iv;

    // Создание объекта для дешифрования
    ICryptoTransform^ decryptor = rijAlg->CreateDecryptor();

    // Создание потока для чтения зашифрованных данных
    MemoryStream^ msDecrypt = gcnew MemoryStream(encryptedData);
    CryptoStream^ csDecrypt = gcnew CryptoStream(msDecrypt, decryptor, CryptoStreamMode::Read);

    // Чтение дешифрованных данных
    array<unsigned char>^ decryptedData = gcnew array<unsigned char>(encryptedData->Length);
    csDecrypt->Read(decryptedData, 0, decryptedData->Length);

    // Возвращение дешифрованных данных
    return decryptedData;
}

// Метод для записи данных в файл
void WriteToFile(String^ filePath, array<unsigned char>^ data, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    // Шифрование данных
    array<unsigned char>^ encryptedData = EncryptData(data, key, iv);

    // Запись зашифрованных данных в файл
    FileStream^ fileStream = File::Create(filePath);
    fileStream->Write(encryptedData, 0, encryptedData->Length);
    fileStream->Close();
}

// Метод для чтения данных из файла
array<unsigned char>^ ReadFromFile(String^ filePath, array<unsigned char>^ key, array<unsigned char>^ iv)
{
    // Чтение зашифрованных данных из файла
    FileStream^ fileStream = File::OpenRead(filePath);
    array<unsigned char>^ encryptedData = gcnew array<unsigned char>(fileStream->Length);
    fileStream->Read(encryptedData, 0, encryptedData->Length);
    fileStream->Close();

    // Дешифрование данных
    array<unsigned char>^ decryptedData = DecryptData(encryptedData, key, iv);

    // Возвращение дешифрованных данных
    return decryptedData;
}

String^ Encrypt(String^ input)
{
    String^ encrypted;

    // Логика шифрования

    for (int i = 0; i < input->Length; i++)
    {
        // Пример простого сдвига символа на 1 позицию в таблице Unicode
        wchar_t encryptedChar = input[i] + 1;
        encrypted += encryptedChar;
    }

    return encrypted;
}