#pragma once
#include<iostream>
#include<string>

using namespace std;

class Screen
{
private:
	int size;
	string type;
public:
	Screen();
	Screen(int size, string type);

	void SetScreen(int size, string type);

	int GetSize();
	string GetType();
};

