#include "Functions.h"


// INCREMENT

// CHAR
void FillIncrement(char* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (char)(33 + i);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// INT
void FillIncrement(int* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// FLOAT
void FillIncrement(float* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (float)i;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// DOUBLE
void FillIncrement(double* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (double)i;
		cout << arr[i] << " ";
	}

	cout << endl << endl;
}


///////////////////////////////////////////////////////////////////////
						 // DECREMENT //            

// CHAR
void FillDecrement(char* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (char)(33 + length - 1 - i);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// INT
void FillDecrement(int* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = length - 1 - i;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// FLOAT
void FillDecrement(float* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (float)(length - 1 - i);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// DOUBLE
void FillDecrement(double* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (double)(length - 1 - i);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}




/////////////////////////////////////////////////////////////////////
							// RANDOM //

// CHAR
void FillRandom(char* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = (char)(rand() % 95 + 33);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// INT
void FillRandom(int* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 128;
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// FLOAT
void FillRandom(float* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = ((float)(rand() % 128)) + 1.0 / 10 * (float)(rand() % 10);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

// DOUBLE
void FillRandom(double* arr, int& length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = ((double)(rand() % 128)) + 1.0 / 10 * (double)(rand() % 10);
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

///////////////////////////////////////////////////////////
