#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ login;
	String^ email;
	String^ role;
	int numBonuses;
	int numLevels;
	String^ password;
	String^ review;
	int place;
};
