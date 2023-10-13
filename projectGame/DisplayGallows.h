#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DisplayGallows
{
private:
	int attempts;

public:
	DisplayGallows();

	DisplayGallows(int);

	void whichDisplay(int attempts);

	void displayGallows1();
	void displayGallows2();
	void displayGallows3();
	void displayGallows4();
	void displayGallows5();
	void displayGallows0();
};

