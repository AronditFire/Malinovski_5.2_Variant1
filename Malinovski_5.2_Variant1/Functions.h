#pragma once

#include <string>
#include <iostream>

using namespace std;

void FillIncrement(char* arr, int& length);
void FillIncrement(int* arr, int& length);
void FillIncrement(float* arr, int& length);
void FillIncrement(double* arr, int& length);

void FillDecrement(char* arr, int& length);
void FillDecrement(int* arr, int& length);
void FillDecrement(float* arr, int& length);
void FillDecrement(double* arr, int& length);

void FillRandom(char* arr, int& length);
void FillRandom(int* arr, int& length);
void FillRandom(float* arr, int& length);
void FillRandom(double* arr, int& length);

template <typename T>
void ArraySortInsertion(T arr[], int& length) // вставка (vstavka)
{
	cout << "Сортируем вставкой......\n";
	int swaps = 0;
	int comparisons = 0;

	T* temp_arr = new T[length];
	for (int i = 0; i < length; i++)
	{
		temp_arr[i] = arr[i];
	}

	for (int i = 1; i < length; i++)
	{
		for (int j = i; j > 0; j--)
		{
			comparisons++;
			if (temp_arr[j - 1] > temp_arr[j])
			{
				swaps++;
				T temp = temp_arr[j - 1];
				temp_arr[j - 1] = temp_arr[j];
				temp_arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << temp_arr[i] << " ";
	}
	delete[] temp_arr;
	cout << endl;
	cout << "Кол-во перестановок: " << swaps << endl;
	cout << "Кол-во сравнений: " << comparisons << endl;
	cout << endl << endl;
}

template <typename T>
void ArraySortTrade(T arr[], int& length) // обмен (obmen)
{
	cout << "Сортируем методом обмена......\n";
	int swaps = 0;
	int comparisons = 0;

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = length - 1; j > i; j--)
		{
			comparisons++;
			if (arr[j - 1] > arr[j])
			{
				swaps++;
				T temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	cout << "Кол-во перестановок: " << swaps << endl;
	cout << "Кол-во сравнений: " << comparisons << endl;
	cout << endl << endl;
}