#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int size, i, j;
	int temp;
	int arr[100];

	//Problem statement.
	cout << "\nThis is a C++ functional program that sorts n number of elements using either selection sort.\n" << endl;

	//Input the size of the array.
	cout << "\nEnter the array size: ";
	cin >> size;

	//Input the values for each array element.
	for (i = 0; i < size; i++)
	{
	cout << "\nEnter the array element " << i + 1 << ": ";
	cin >> arr[i]; 
	}

	//Shows the values of elements that you've input.
	cout << "\nThe unsorted array elements: " << endl;
	for (i = 0; i < size; i ++)
	{
	cout << arr[i] << " \n" << endl;
	}

	cout << "\nSorting array using selection sort..." << endl;

	//For ascending function.
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//The output or result.
	cout << "\nThe sorted array elements in an ascending order: " << endl;
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << "  \n" << endl;
	}

getch();
return 0;
}