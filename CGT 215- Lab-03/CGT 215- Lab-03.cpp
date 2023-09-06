// CGT 215- Lab-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;

	// this is listing all of the choices, its printing a menu.
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "please enter the second value: ";
	cin >> B;

	// Asking for you to input the numbers you want 
}
void firstChoice(float A, float B) {
	cout << "\n Calculating..." << endl;
	A + B;
	cout << "\n " << A << " + " << B << " = " << A + B << endl;

	// creating a new line, printing "Calculating..."  and then calculating a + b and outputting the answer, 
	// which is written all on one line to avoid redundancy 

}
void secondChoice(float A, float B) {
	cout << "\n Calculating..." << endl;
	A - B;
	cout << "\n " << A << " - " << B << " = " << A - B << endl;
	// same as before ^^ just subtracting
}
void thirdChoice(float A, float B) {
	cout << "\n Calculating..." << endl;
	A * B;
	cout << "\n " << A << " * " << B << " = " << A * B << endl;
	// same as before ^^ just multiplying
}
void fourthChoice(float A, float B) {
	cout << "\n Calculating..." << endl;
	A / B;
	cout << "\n " << A << " / " << B << " = " << A / B << endl;
	// Dividing
}
int main() {
	int choice;
	float A;
	float B;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		firstChoice(A, B);
	}

	if (choice == 2) {
		secondChoice(A, B);
	}
	
	if (choice == 3) {
		thirdChoice(A, B);
	}

	if (choice == 4) {
		fourthChoice(A, B);
	}
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
