#include "Smartphone.h"
#include <iostream>

Smartphone::Smartphone() : Telephone() {
	memory = 128;
	RAM = 6;
}

Smartphone::Smartphone(string brand, string model, Screen screen, Camera camera, int memory, int RAM) : Telephone(brand, model, screen, camera) {

	this->memory = memory;
	this->RAM = RAM;
}

void Smartphone::SetMemory(int memory) {
	this->memory = memory;
}

void Smartphone::SetRam(int RAM) {
	this->RAM = RAM;
}

int Smartphone::GetMemory() {
	return memory;
}

int Smartphone::GetRam() {
	return RAM;
}

void Smartphone::ShowInfo() {
	cout << "Smartphone info: " << endl;
	cout << "Brand: " << GetBrand() << endl;
	cout << "Model: " << GetModel() << endl;
	cout << "Screen size: " << GetScreen().GetSize() << endl;
	cout << "Screen type: " << GetScreen().GetType() << endl;
	cout << "Camera size: " << GetCamera().GetSize() << endl;
	cout << "Camera resolution: " << GetCamera().GetResolution() << endl;
	cout << "Memory: " << GetMemory() << " Gb" << endl;
	cout << "RAM: " << GetRam() << " Gb" << endl;
}