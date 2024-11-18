#pragma once
#include<iostream>

using namespace std;

class Camera
{
private:
	float size;
	int resolution;
public:
	Camera();
	Camera(float size, int resolution);

	void SetCamera(float size, int resolution);

	float GetSize();
	int GetResolution();
};

