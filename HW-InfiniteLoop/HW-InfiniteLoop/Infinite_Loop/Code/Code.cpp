// Lab 1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//included more libraries//
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

//need to check if value is number//
bool isNumber(string s)
{
	std::stringstream ss(s);
	float x;
	return (ss >> x) && ss.eof();
}


int main()
{
	int choice = 0;

	string name = "";
	//changed string for integer for age variable//
	int age = 0;
	string occup = "";

	while (choice != -1)
	{
	//we need to reset value//
		string input = "";
		choice = 0;

	//changed Exit fo Continue because makes more sense//
		cout << "-1: Continue\n";
		cout << "1: Enter Name\n";
		cout << "2: Enter Age\n";
		cout << "3: Enter Occupation\n";
		cin >> choice;

	//I uncommented the if choice//
		if (choice == -1)
			break;
	//reads input//
		getline(cin, input);
	//make sure it is number//
		if (isNumber(input));


		switch (choice)
		{
		case 1:
			cout << "What is your Name: \n"; 
	//getline(name and occup) to add a whole line instead of 1 val//
			getline(cin, name);
			break;
		case 2:
			cout << "What is your Age? \n";
			cin >> age;
			break;
		case 3:
			cout << "What is your Occupation? \n";
			getline(cin, occup);
			break;
		default:
			// Assume Invalid Menu Choice
			cout << "Sorry that choice is not valid!";
			continue;
		}
	}

	age += 1;

	cout << "Thank you for using our application, " << name << " and hope your career in " << occup << " is successful.";
	cout << "Hope your " << age << " birthday will enjoyable and exciting";

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
