#include <iostream>
using namespace std;

const int SIZE = 100;

void spiralPrint(int num, int matrix[][SIZE])
{
	int copyNum = num;
	int startingIndex = 0;
	while (startingIndex < copyNum - 1)
	{
		//Prints the first row of the remaining rows
		for (int j = startingIndex; j < copyNum; j++)
		{
			cout << matrix[startingIndex][j] << " ";
		}

		//Prints the last column from the remaining columns
		for (int i = startingIndex + 1; i < copyNum; i++)
		{
			cout << matrix[i][copyNum - 1] << " ";
		}

		//Prints the last row from the remaining rows
		for (int j = copyNum - 2; j >= startingIndex; j--)
		{
			cout << matrix[copyNum - 1][j] << " ";
		}

		//Prints the first column from the remaining columns
		for (int i = copyNum - 2; i > startingIndex; i--)
		{
			cout << matrix[i][startingIndex] << " ";
		}
		startingIndex++;
		copyNum--;
	}
	
	//Prints the middle element of the matrix if num is ​​an odd 
	if (num % 2 == 1)
	{
		cout << matrix[startingIndex][startingIndex];
	}
}

void readMatrix(int num, int matrix[][SIZE])
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			cin >> matrix[i][j];
	}

	spiralPrint(num, matrix);
}


int main()
{
	int num;
	cin >> num;
	int matrix[SIZE][SIZE];
	readMatrix(num, matrix);
	cout << endl;

	return 0;
}