#pragma once
#include"Telephone.h"
using namespace std;

class Smartphone : public Telephone
{
private:
	int memory;
	int RAM;

public:
	Smartphone();
	Smartphone(string brand, string model, Screen screen, Camera camera, int memory, int RAM);

	void SetMemory(int memory);
	void SetRam(int RAM);
	void ShowInfo();

	int GetMemory();
	int GetRam();
};

