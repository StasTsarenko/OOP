#pragma once
#include "Camera.h"
#include "Screen.h"
#include<iostream>
#include<string>

using namespace std;

class Telephone
{
private:
	string brand;
	string model;
	Camera camera;
	Screen screen;
public:
	Telephone();
	Telephone(string band, string model, Screen screen, Camera camera);

	void SetBrand(string brand);
	void SetModel(string model);
	void SetTelephoneCamera(float size, int resolution);
	void SetTelephoneScreen(int size, string type);

	string GetBrand();
	string GetModel();
	Camera GetCamera();
	Screen GetScreen();
};

