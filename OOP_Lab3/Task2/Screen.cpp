#include "Screen.h"

Screen::Screen() {
	size = 4;
	type = "LCD";
}

Screen::Screen(int size, string type) {
	this->size = size;
	this->type = type;
}
void Screen::SetScreen(int size, string type) {
	this->size = size;
	this->type = type;
}

int Screen::GetSize() {
	return size;
}

string Screen::GetType() {
	return type;
}