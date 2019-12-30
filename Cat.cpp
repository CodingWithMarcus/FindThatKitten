#include <iostream>
#include <conio.h>
#include <ctime>
#include<windows.h>

using namespace std;

class Cat {
private:


public:

	bool run=true;
	int a= 10, b = 10;
	char gamebrd[22][22];
	char mom;
	char kitten;
	int counter = 0;
	
	int i = rand() % 20+1;
	int j = rand() % 20+1;
	


	void Title();
	void Game();
	void Board();
	void Input();
	void Lose();
	void Kittenz();
	
};



int main()
{
	Cat Go;

	Go.Game();

	
	return 0;
	 

}




void Cat:: Title() {

	cout << "Welcome to Kitten Catching! or Go Mama GO! developers are still at odds about a title" << endl << endl;
	cout << " -HOW TO PLAY- " << endl << endl;
	cout << "move to k for kitten" << endl;
	cout << "W = UP" << endl;
	cout << "A = LEFT" << endl;
	cout << "S = DOWN" << endl;
	cout << "D = RIGHT" << endl;
	cout << "go off screen to end the round or press Q to Quit " << endl;
	cout << endl << endl;
}



void Cat :: Game() {

	
	
	
	
	while(run) {
		system("cls");
		Title();
		Board();
		Input();
		cout << counter;
		//Sleep(100);
		Lose();

	}

}



void Cat:: Board() {

	
	
	mom = 'M';
	kitten = 'k';

	for (int w = 0; w < 22 ;w++){
		for (int v = 0; v < 22; v++) {
			if (w == 0 || w == 21) { gamebrd[w][v] = '-'; }
			else if (v == 0 || v == 21) { gamebrd[w][v] = '+'; }
			else if (w == a && v == b) { gamebrd[w][v] = mom; }
			
			else{ gamebrd[w][v] = ' ';  }
	
		}
	}
	
	
	
		
		if (a == i && b == j) { Kittenz(); }
		gamebrd[i][j] = kitten;
	for (int m = 0; m < 22; m++) {

		for (int n = 0; n <22; n++) {


		cout << gamebrd[m][n];


	}
	cout << endl;
}

	


}


void Cat :: Input() {


	char InputVal;
		if (_kbhit())
		{
			InputVal = _getch();
			switch (InputVal)
			{
				// up
			case 'w':
			case 'W':
				a--;
				break;
				// left
			case 'A':
			case 'a':
				b--;

				break;


				//down
			case 's':
			case'S':
				a++;

				break;


				//right
			case 'D':
			case 'd':
				b++;
				break;

			case 'q':
			case 'Q':
				run = false;
				break;

			}
		}




}

void Cat::Lose(){

	for (int f = 0; f < 22; f++){
		for (int g = 0; g < 22; g++) {


			if (a == 0 || a == 21) { run = false; }
			else if (b == 0 || b == 21) { run = false; }

		}
	
	}



}

void Cat:: Kittenz() {

	srand(time(0));
	 i = rand() % 20+1;
	 j = rand() % 20+1;


	 counter++;


 }