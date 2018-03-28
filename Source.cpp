#include <vector>
#include <iostream>

void insertToVector(std::vector<int> & vector, const int value)
{
	if (value > vector[vector.size() - 1])
	{
		vector.push_back(value);
	}
	else
	{
		int index = 0;
		while (vector[index] < value)
		{
			index++;
		}

		vector.insert(vector.begin() + index, value);
	}
		
}

void printVector(const std::vector<int> &vector)
{
	for (int i=0; i < vector.size(); i++)
	{
		std::cout << vector[i] << " ";
	}
	std::cout << std::endl << std::endl;
}

int main()
{

	std::vector<int> vectoras = { 0, 2, 5, 7, 8, 9, 10, 15 };

	for (int i=0; i < vectoras.size(); i++)
	{
		std::cout << vectoras[i];
	}

	int array[5] = { 3, 6, 13, 11, 12 };

	for (int i=0; i < 5; i++)
	{
		insertToVector(vectoras, array[i]);
		printVector(vectoras);
	}

	

	return 0;
}
