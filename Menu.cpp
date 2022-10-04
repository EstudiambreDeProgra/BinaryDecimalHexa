#include "Menu.h"
#include<iostream>
using namespace std;

void Menu::menu() {

	cout << "In this program you can turn decimal to binary or hexa:";
	cout << "\n1)Decimal to Binary";
	cout << "\n2)Decimal to Hexa";
	cout << "\n3)Binary to Decimal\n";
	cout << "\n4)Exit\n";
	cin >> option;

	switch (option) {
	case 1: binary();
		break;
	case 2: hexa();
		break;
	case 3: decim();
		break;
	case 4: EXIT_SUCCESS;
		break;
	default:
		cout << "That's not an option\n";
		menu();
		break;
	}

}

void Menu::binary() {

	system("cls");
	cout << "Write the decimal number to convert to binary: ";
	cin >> dec;
	short int bin[8];

	for (int i = 0; i < 8; i++) {
		bin[i] = dec % 2;
		dec /= 2;
	}
	cout << "\nBinary number: ";

	for (int i = 7; i >= 0; i--) {
		cout << bin[i];
	}

	cout << "\n\n1)Repeat\n2)Dec to Hexa\n3)Binary to Dec\n4)Exit\n";
	cin >> option;
	switch (option) {
	case 1: binary();
		break;
	case 2: hexa();
		break;
	case 3: decim();
		break;
	case 4: EXIT_SUCCESS;
		break;
	default:
		cout << "That's not an option\n";
		menu();
	}

}

void Menu::hexa() {

	system("cls");
	cout << "Write a decimal value to convert to hexa: ";
	cin >> dec;
	int hexad[20], res, answer, i = 0;
	
	do {

		res = dec % 16;
		answer = dec / 16;
		hexad[i] = res;
		dec = answer;
		i++;

	} while (answer > 15);

	hexad[i] = answer;

	cout << "Hexa value is: ";
	
	for (int j = i; j >=0; j--) {

		if (hexad[j] == 10) {
			cout << "A";
		}
		else if (hexad[j] == 11) {
			cout << "B";
		}
		else if (hexad[j] == 12) {
			cout << "C";
		}
		else if (hexad[j] == 13) {
			cout << "D";
		}
		else if (hexad[j] == 14) {
			cout << "E";
		}
		else if (hexad[j] == 15) {
			cout << "F";
		}
		else {
			cout << hexad[j];
		}
	}
	cout << "\n";
	
	cout << "\n\n1)Repeat\n2)Decimal to Binary\n3)Binary to Dec\n4)Exit\n";
	cin >> option;
	switch (option) {
	case 1: hexa();
		break;
	case 2: binary();
		break;
	case 3: decim();
		break;
	case 4: EXIT_SUCCESS;
		break;
	default:
		cout << "That's not an option\n";
		menu();
	}

}

void Menu::decim() {

	system("cls");
	int bin, answer, res = 0;
	int binar[8];

	cout << "Write a binary number to convert to decimal: ";
	cin >> bin;

	for (int i = 0; i < 8; i++) {
		binar[i] = bin % 10;
		bin /= 10;
	}

	for (int i = 7; i >= 0; i--) {
		answer = (res * 2) + binar[i];
		res = answer;
	}

	cout << "\nYour binary is equal to: " << answer;

	cout << "\n\n1)Repeat\n2)Dec to Hexa\n3)Dec to Binary\n4)Exit\n";
	cin >> option;
	switch (option) {
	case 1: decim();
		break;
	case 2: hexa();
		break;
	case 3: binary();
		break;
	case 4: EXIT_SUCCESS;
		break;
	default:
		cout << "That's not an option\n";
		menu();
	}
}