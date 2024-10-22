#include "CheckInput.h"
#include "Functions.h"


enum ArrayType
{
	CHAR = 1,
	INT = 2,
	FLOAT = 3,
	DOUBLE = 4
};

enum FillType
{
	INCREMENT = 1,
	DECREMENT = 2,
	RANDOM = 3,
	END = 4
};

int main()
{
	setlocale(LC_CTYPE, "RU");
	srand(time(NULL));

	int choice = 0;
	int length = 0;

	char* arr_char = nullptr;
	int* arr_int = nullptr;
	float* arr_float = nullptr;
	double* arr_double = nullptr;

	while (true)
	{
		cout << "Введите \'1\' если хотите создать массив типа CHAR.\n";
		cout << "Введите \'2\' если хотите создать массив типа INT.\n";
		cout << "Введите \'3\' если хотите создать массив типа FLOAT.\n";
		cout << "Введите \'4\' если хотите создать массив типа DOUBLE.\n";

		choice = GetChoice();
		ArrayType arr_type = (ArrayType)choice;
		length = GetLength();

		switch (arr_type)
		{
		case CHAR:
		{
			arr_char = new char[length];
			break;
		}
		case INT:
		{
			arr_int = new int[length];
			break;
		}
		case FLOAT:
		{
			arr_float = new float[length];
			break;
		}
		case DOUBLE:
		{
			arr_double = new double[length];
			break;
		}
		}

		cout << "Введите \'1\' если хотите заполнить массив по возрастанию.\n";
		cout << "Введите \'2\' если хотите заполнить массив по убыванию.\n";
		cout << "Введите \'3\' если хотите заполнить массив рандомно.\n";
		cout << "Введите \'4\' если хотите завершить программу.\n";

		choice = GetChoice();
		FillType fill_type = (FillType)choice;

		switch (fill_type)
		{
		case INCREMENT:
		{
			if (arr_char != nullptr)
			{
				FillIncrement(arr_char, length);
				ArraySortInsertion(arr_char, length);
				ArraySortTrade(arr_char, length);

				delete[] arr_char;
				arr_char = nullptr;
			}
			else if (arr_int != nullptr)
			{
				FillIncrement(arr_int, length);
				ArraySortInsertion(arr_int, length);
				ArraySortTrade(arr_int, length);

				delete[] arr_int;
				arr_int = nullptr;
			}
			else if (arr_float != nullptr)
			{
				FillIncrement(arr_float, length);
				ArraySortInsertion(arr_float, length);
				ArraySortTrade(arr_float, length);

				delete[] arr_float;
				arr_float = nullptr;
			}
			else
			{
				FillIncrement(arr_double, length);
				ArraySortInsertion(arr_double, length);
				ArraySortTrade(arr_double, length);

				delete[] arr_double;
				arr_double = nullptr;
			}

			break;
		}
		case DECREMENT:
		{
			if (arr_char != nullptr)
			{
				FillDecrement(arr_char, length);
				ArraySortInsertion(arr_char, length);
				ArraySortTrade(arr_char, length);

				delete[] arr_char;
				arr_char = nullptr;
			}
			else if (arr_int != nullptr)
			{
				FillDecrement(arr_int, length);
				ArraySortInsertion(arr_int, length);
				ArraySortTrade(arr_int, length);

				delete[] arr_int;
				arr_int = nullptr;
			}
			else if (arr_float != nullptr)
			{
				FillDecrement(arr_float, length);
				ArraySortInsertion(arr_float, length);
				ArraySortTrade(arr_float, length);

				delete[] arr_float;
				arr_float = nullptr;
			}
			else
			{
				FillDecrement(arr_double, length);
				ArraySortInsertion(arr_double, length);
				ArraySortTrade(arr_double, length);

				delete[] arr_double;
				arr_double = nullptr;
			}
			break;
		}
		case RANDOM:
		{
			if (arr_char != nullptr)
			{
				FillRandom(arr_char, length);
				ArraySortInsertion(arr_char, length);
				ArraySortTrade(arr_char, length);

				delete[] arr_char;
				arr_char = nullptr;
			}
			else if (arr_int != nullptr)
			{
				FillRandom(arr_int, length);
				ArraySortInsertion(arr_int, length);
				ArraySortTrade(arr_int, length);

				delete[] arr_int;
				arr_int = nullptr;
			}
			else if (arr_float != nullptr)
			{
				FillRandom(arr_float, length);
				ArraySortInsertion(arr_float, length);
				ArraySortTrade(arr_float, length);

				delete[] arr_float;
				arr_float = nullptr;
			}
			else
			{
				FillRandom(arr_double, length);
				ArraySortInsertion(arr_double, length);
				ArraySortTrade(arr_double, length);

				delete[] arr_double;
				arr_double = nullptr;
			}
			break;
		}
		case END:
		{
			(arr_char != nullptr) ? (delete[] arr_char) : (arr_int != nullptr) ? (delete[] arr_int) : (arr_float != nullptr) ? (delete[] arr_float) : (delete[] arr_double);
			return 0;
		}
		}
	}

}