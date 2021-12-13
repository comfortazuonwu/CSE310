#include<iostream>
#include<conio.h>

using namespace std;

void calculateGPA()
{
	int Subjects;
	double credits[4];
	double points[4];
	double sum = 0;
	double total;
	double Credits = 0;
	double totalCredits = 0;

	system("cls");
	cout << "----------------------------------------------" << endl;
	cout << "GPA Calculator" << endl;
	cout << "----------------------------------------------" << endl;

	cout << "Enter the number of subjects:";
	cin >> Subjects;

	cout << endl;
	for (int i = 0; i < Subjects; i++)
	{
		cout << "Enter credits of subject " << i + 1 << ":";
		cin >> credits[i];
		cout << "Enter points of subject " << i + 1 << " : ";
		cin >> points[i];
		cout << "--------------------------------------------------" << endl << endl;
	}
	for (int i = 0; i < Subjects; i++)
	{
		total = credits[i] * points[i];
		sum += total;
	}
	for (int i = 0; i < Subjects; i++)
		totalCredits += credits[i];

	cout << endl << endl;
	cout << "Total Points: " << sum << endl;
	cout << "Total Credits: " << totalCredits << endl;
	cout << "Total GPA:  " << sum / totalCredits << endl;
	cout << "Press any key to go back" << endl << endl;


	_getch();
}
void instructions() {
	system("cls");
	cout << endl << endl;
	cout << "How to calculate GPA: " << endl;
	cout << "----------------------------------------" << endl << endl;
	cout << "GPA = Sum of (Credit * Point)/ total of credits " << endl << endl;
	cout << "Press any key to go back" << endl << endl;

	cout << endl << endl;
	_getch();

}
int main()
{
	do {
		system("cls");
		cout << "-------------------------------------------------------------" << endl;
		cout << "|                  GPA Calculator                              |" << endl;
		cout << "------------------------------------------------------------------" << endl << endl;
		cout << "1.Calculate GPA" << endl;
		cout << "2.Instructions" << endl;
		cout << "3.Quit" << endl << endl;
		cout << "Select option:";
		char option = _getche();

		if (option == '1') calculateGPA();
		else if (option == '2') instructions();
		else if (option == '3') exit(0);

	} while (1);
	return 0;
}