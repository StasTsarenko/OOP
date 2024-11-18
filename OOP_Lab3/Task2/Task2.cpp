#include<iostream>
#include "Telephone.h"
#include "Smartphone.h"
using namespace std;

int main() {
	Telephone telephone;

	cout << "Telephone info: " << endl;
	cout << "Brand: " << telephone.GetBrand() << endl;
	cout << "Model: " << telephone.GetModel() << endl;
	cout << "Screen size: " << telephone.GetScreen().GetSize() << endl;
	cout << "Screen type: " << telephone.GetScreen().GetType() << endl;
	cout << "Camera size: " << telephone.GetCamera().GetSize() << endl;
	cout << "Camera resolution: " << telephone.GetCamera().GetResolution() << endl;

	Screen scr2(5, "LED");
	Camera cam2(1.2, 14);

	Telephone tel2("Samsung", "Galaxy", scr2, cam2);

	cout << "Telephone info: " << endl;
	cout << "Brand: " << tel2.GetBrand() << endl;
	cout << "Model: " << tel2.GetModel() << endl;
	cout << "Screen size: " << tel2.GetScreen().GetSize() << endl;
	cout << "Screen type: " << tel2.GetScreen().GetType() << endl;
	cout << "Camera size: " << tel2.GetCamera().GetSize() << endl;
	cout << "Camera resolution: " << tel2.GetCamera().GetResolution() << endl;

	Screen smartscr(6, "OLED");
	Camera smartcam(1.6, 24);
	Smartphone newSmartphone("Apple", "Iphone 16 pro", smartscr, smartcam, 256, 8);

	newSmartphone.ShowInfo();

	return 0;
}