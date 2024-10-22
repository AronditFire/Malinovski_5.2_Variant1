#include "CheckInput.h"

bool isInt(const string& str)
{
	istringstream check_is_Int(str);
	int num;
	return (check_is_Int >> num) && (check_is_Int.eof());
}

int GetLength()
{
	string input = " ";
	while (true)
	{
		if (input != "")
		{
			cout << "������� ������ �������: ";
		}

		getline(cin, input);

		if (input != "")
		{
			if (isInt(input) && stoi(input) >= 0)
			{
				return stoi(input);
			}
			else
			{
				cout << "������! ������� ����������� �����!\n\n";
			}
		}

	}
}

int GetChoice()
{
	string input = " ";
	while (true)
	{
		if (input != "")
		{
			cout << "��� �����: ";
		}

		getline(cin, input);

		if (input != "")
		{
			if (isInt(input) && stoi(input) >= 1 && stoi(input) <= 4)
			{
				return stoi(input);
			}
			else
			{
				cout << "������! ������� ����� �� 1 �� 4!\n\n";
			}
		}

	}

}