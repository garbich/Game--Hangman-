#include "DisplayGallows.h"

DisplayGallows::DisplayGallows() {
	attempts = 0;
}

DisplayGallows::DisplayGallows(int) {
	this->attempts = attempts;
}

void DisplayGallows::whichDisplay(int attempts) {

	if (attempts == 5) {
		displayGallows5();
	}
	if (attempts == 4) {
		displayGallows4();
	}
	if (attempts == 3) {
		displayGallows3();
	}
	if (attempts == 2) {
		displayGallows2();
	}
	if (attempts == 1) {
		displayGallows1();
	}
	if (attempts == 0) {
		displayGallows0();
	}
}

void DisplayGallows::displayGallows5() {


	cout << "               " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|			    " << endl;
	cout << "|              " << endl;
	cout << endl;

}

void DisplayGallows::displayGallows4() {


	cout << " _________     " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << endl;

}

void DisplayGallows::displayGallows3() {


	cout << " _________     " << endl;
	cout << "|         |    " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << endl;

}

void DisplayGallows::displayGallows2() {


	cout << " _________     " << endl;
	cout << "|         |    " << endl;
	cout << "|         0    " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << endl;

}

void DisplayGallows::displayGallows1() {


	cout << " _________     " << endl;
	cout << "|         |    " << endl;
	cout << "|         0    " << endl;
	cout << "|        /|\\  " << endl;
	cout << "|              " << endl;
	cout << "|              " << endl;
	cout << endl;

}

void DisplayGallows::displayGallows0() {


	cout << " _________     " << endl;
	cout << "|         |    " << endl;
	cout << "|         0    " << endl;
	cout << "|        /|\\  " << endl;
	cout << "|        / \\  " << endl;
	cout << "|              " << endl;
	cout << endl;
	cout << "You lose " << endl;

}