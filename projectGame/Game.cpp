#include "Game.h"

Game::Game() {
	letter = ' ';
	arrIndex = 0;
}

Game::Game(int, string, int) {
	this->randNum = randNum;
	this->letter = letter;
	this->arrIndex = arrIndex;
}

void Game::randWord() {


	if (randNum == 1) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("G");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("N");

		trueArrWordsSymbol.push_back("G");
		trueArrWordsSymbol.push_back("R");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("E");
		trueArrWordsSymbol.push_back("N");

		// Word - "GREEN";

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}
		arrIndex = 1;

	}
	else if (randNum == 2) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("F");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("C");

		trueArrWordsSymbol.push_back("F");
		trueArrWordsSymbol.push_back("A");
		trueArrWordsSymbol.push_back("B");
		trueArrWordsSymbol.push_back("R");
		trueArrWordsSymbol.push_back("I");
		trueArrWordsSymbol.push_back("C");

		// Word - "FABRIC";

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

		arrIndex = 2;
	}
	else if (randNum == 3) {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("T");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		trueArrWordsSymbol.push_back("T");
		trueArrWordsSymbol.push_back("A");
		trueArrWordsSymbol.push_back("B");
		trueArrWordsSymbol.push_back("L");
		trueArrWordsSymbol.push_back("E");

		// Word - "TABLE"

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

		arrIndex = 3;
	}
	else {
		arrWordsSymbol.clear();

		arrWordsSymbol.push_back("P");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("_");
		arrWordsSymbol.push_back("E");

		
		trueArrWordsSymbol.push_back("P");
		trueArrWordsSymbol.push_back("H");
		trueArrWordsSymbol.push_back("O");
		trueArrWordsSymbol.push_back("N");
		trueArrWordsSymbol.push_back("E");

		// Word - "PHONE"

		for (int i = 0; i < arrWordsSymbol.size(); i++) {
			cout << arrWordsSymbol[i] << " ";
		}

		arrIndex = 4;

	}

}

bool Game::InputLetter(string letter) {

	bool foundLetter = false;

	for (int i = 0; i < arrWordsSymbol.size(); i++) {

		if (letter == trueArrWordsSymbol[i]) {
			arrWordsSymbol[i] = letter;
			
			foundLetter = true;
		}
		
	}
	cout << endl;
	return foundLetter;
	
}

bool Game::winGame() {

	int counter = arrWordsSymbol.size();

	for (int i = 0; i < arrWordsSymbol.size(); i++) {

		if (arrWordsSymbol[i] == trueArrWordsSymbol[i]) {
			counter--;
		}
	}

	if (counter == 0) {
		cout << "You guessed the word" << endl;
		return true;
	}
	else {
		return false;
	}
	

}




void Game::displayArr() {

	for (int i = 0; i < arrWordsSymbol.size(); i++) {
		cout << arrWordsSymbol[i] << " ";
	}
}