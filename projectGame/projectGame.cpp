#include <iostream>
#include <ctime>
#include "Game.h"
#include "DisplayGallows.h"

using namespace std;

int main()
{
	srand(time(NULL));

	int start;
	cout << "Do you want to start the game?(1-yes; 2-no)" << endl;
	cin >> start;

	Game* game = new Game();
	DisplayGallows* displayGallows = new DisplayGallows();

	if (start == 1) {

		cout << "the word which needs to guessed: " << endl;
		cout << " ";
		game->randWord();
		cout << endl << endl << endl;
		

		int attempts = 6;
		while (attempts > 0) {
			

			game->displayArr();
			cout << endl;

			string letter;
			cout << "input the letter: ";
			cin >> letter;

			if (game->InputLetter(letter)) {
				system("cls");
				cout << "correct letter" << endl << endl;
			}
			else {
				system("cls");
				cout << "Incorrect letter " << endl;
				cout << "Attempts left: " << --attempts << endl << endl;

				displayGallows->whichDisplay(attempts);
			}

			if (game->winGame() == true) {
				cout << "Word - ";
				game->displayArr();
				cout << endl;
				break;
			}
			

		}
	}
	else {
		return 0;
	}

	

}