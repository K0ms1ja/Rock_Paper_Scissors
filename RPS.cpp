/*0 rock
  1 paper
  2 scissors*/

#include <iostream>

int rock(int n, int p, int a){
	srand(time(0));
	n = rand() % 3;
	if (n == 0) {
		system("cls");
		std::cout << "Computer picked ROCK." << std::endl << "It's a TIE." << std::endl;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	else if (n == 1) {
		system("cls");
		std::cout << "Computer picked PAPER." << std::endl << "You LOSE." << std::endl;
		a++;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	else if (n == 2) {
		system("cls");
		std::cout << "Computer picked SCISSORS." << std::endl << "You WIN." << std::endl;
		p++;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	return n;
}

int paper(int n, int p, int a) {
	srand(time(0));
	n = rand() % 3;
	if (n == 0) {
		system("cls");
		std::cout << "Computer picked ROCK." << std::endl << "You WIN." << std::endl;
		p++;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	else if (n == 1) {
		system("cls");
		std::cout << "Computer picked PAPER." << std::endl << "It's a TIE." << std::endl;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	else if (n == 2) {
		system("cls");
		std::cout << "Computer picked SCISSORS." << std::endl << "You LOSE." << std::endl;
		a++;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	return n;
}

int scissors(int n, int p, int a) {
	srand(time(0));
	n = rand() % 3;
	if (n == 0) {
		system("cls");
		std::cout << "Computer picked ROCK." << std::endl << "You LOSE." << std::endl;
		a++;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	else if (n == 1) {
		system("cls");
		std::cout << "Computer picked PAPER." << std::endl << "You WIN." << std::endl;
		p++;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	else if (n == 2) {
		system("cls");
		std::cout << "Computer picked SCISSORS." << std::endl << "It's a TIE." << std::endl;
		std::cout << "Player score: " << p << std::endl;
		std::cout << "Computer score: " << a << std::endl;
	}
	return n;
}

int main() {
	int n;
	int p=0; 
	int a=0;
	do {
		std::cout << "Welcome to Rock Paper Scissors!\n\n1. Rock\n2. Paper\n3. Scissors" << std::endl;
		std::cin >> n;
		system("cls");
		switch (n) {
		case 1:
			rock(n, p, a);
			break;
		case 2:
			paper(n, p, a);
			break;
		case 3:
			scissors(n, p, a);
			break;
		}
	} while (p < 5 || a < 5);
}
