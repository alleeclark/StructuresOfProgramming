// ArrayByValue.cpp : Defines the entry point for the console application.
// Allee Clark
// Structures of Programming Language

#include <iostream>

using namespace std;

// creating an array inside a struct to pass by value
struct myarray {
	int array2[5];
}a;

void PrintArrayOne(struct myarray pass)
{
	for (int x = 0; x < 5; x++)
	{
		cout << pass.array2[x] << endl;
	}
}

void PrintArrayTwo(int something[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << something[i] << endl;
	}

}
// to edit the values to see if it makes a copy of the array inside struct
void editstruct(myarray something)
{
	for (int i = 0; i < 5; i++)
	{
		something.array2[i] = something.array2[i] + 20;
	}

}
// edit the array to see if it copies the values
void editarray(int array[5])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = array[i] + 20;
	}
}

int main()
{
	int arraytwo[5] = { 1,2,3,4,5 };
	myarray myarryone;
	a.array2[0] = 1;
	a.array2[1] = 2;
	a.array2[2] = 3;
	a.array2[3] = 4;
	a.array2[4] = 5;

	cout << "array by reference before" << endl; 
	for (int y = 0; y < 5; y++)
	{
		cout << arraytwo[y] << endl;
	}
	cout << "array by reference after" << endl;
	editarray(arraytwo);
	for (int z = 0; z < 5; z++)
	{
		cout << arraytwo[z] << endl;
	}

	cout << "array by value before" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a.array2[i] << endl;
	}
	cout << "array byvalue after" << endl;
	editstruct(a);
	PrintArrayOne(a);
	
    return 0;
}

