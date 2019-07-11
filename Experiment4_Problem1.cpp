#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
int main()	
{
	int x, y;
	int ans;
	bool cont = true;

	//Start of the function.
	do {

	//The problem statement.
	cout << "\nThis is a C++ program using functions that will display the calculator menu. The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer values for the calculation.\n" << endl; 

	//Choices menu.
	cout << "\n\t1 - Addition\n\t2 - Subtraction" << "\n\t3 - Multiplication\n\t4 - Division\n\t5 - Modulus" << "\n\n\tChoose an operation: ";
	cin >> ans;
	
	//Input the values here.
	cout << "\nEnter the first number: ";
	cin >> x;
	cout << "\nEnter the second number: ";
	cin >> y;
	
	//The different cases/functions for the calculator.
	switch(ans)
	{
	case 1:
	cout << "\nSum = " << x + y << " .";
	break;

	case 2:
	cout << "\nDifference = " << x - y;
	break;

	case 3:
	cout << "\nProduct = " << x * y;
	break;

	case 4:
	if (y == 0)
	cout << "\nDivision by 0 is not allowed!";
	else 
	cout << "\nQuotient = " << x / y;
	break;

	case 5: 
	cout << "\nModulus = " << x % y;
	break;

	default:
	cout << "\nInvalid input.";
	}
	
	cout << endl << endl;

	//Do you want to continue? Yes or no?
	char choice;

	cout << "\nDo you want to continue? [Y]es or [N]o?";
	cin >> choice;

	switch (choice)
	{
	case 'Y': case 'y':
	cont = true;
	break;

	case 'N': case 'n':
	cont = false;
	break;

	default:
	cont = false;
	cout << "\nInvalid input." << endl;
	break;
	}

	} while (cont);

getch ();
return 0;
}