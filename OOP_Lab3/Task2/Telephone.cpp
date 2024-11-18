#include "Telephone.h"

Telephone::Telephone() {
	brand = "Apple";
	model = "13 pro max";
	camera = Camera();
	screen = Screen();
}

Telephone::Telephone(string brand, string model, Screen screen, Camera camera) {
	this->brand=brand;
	this->model=model;
	this->screen = screen;
	this->camera = camera;
}

void Telephone::SetBrand(string brand) {
	this->brand = brand;
}

void Telephone::SetModel(string model) {
	this->model = model;
}

void Telephone::SetTelephoneCamera(float size, int resolution) {
	camera.SetCamera(size,resolution);
}

void Telephone::SetTelephoneScreen(int size, string type) {
	screen.SetScreen(size,type);
}

string Telephone::GetBrand() {
	return brand;
}

string Telephone::GetModel() {
	return model;
}

Camera Telephone::GetCamera() {
	return camera;
}

Screen Telephone::GetScreen() {
	return screen;
}