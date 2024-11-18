#include "Camera.h"

Camera::Camera() {
	size = 0.5;
	resolution = 12;
}

Camera::Camera(float size, int resolution) {
	this->size = size;
	this->resolution = resolution;
}

void Camera::SetCamera(float size, int resolution) {
	this->size = size;
	this->resolution = resolution;
}


float Camera::GetSize() {
	return size;
}

int Camera::GetResolution() {
	return resolution;
}