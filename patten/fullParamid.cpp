// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *

#include <iostream>
using namespace std;
#define ll long long

void hollowFilledFullPyramid(int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int j = 0; j < size - row; j++)
		{
			cout << "* ";
		}
		for (int i = 0; i < row; i++)
		{
			cout << "  ";
		}

		for (int i = 0; i < row+1; i++)
		{
			cout << "  ";
		}
		for (int j = 0; j < size - row; j++)
		{
			cout << "* ";
		}

		cout << endl;
	}
}

// My code     ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐

// void hollowFilledFullPyramid(int size)
// {
// 	for (int row = 0; row < size; row++)
// 	{
// 		for (int j = 0; j < size - row; j++)
// 		{
// 			cout << "* ";
// 		}
// 		for (int i = 0; i < row; i++)
// 		{
// 			cout << "  ";
// 		}

// 		for (int i = 0; i < row+1; i++)
// 		{
// 			cout << "  ";
// 		}
// 		for (int j = 0; j < size - row; j++)
// 		{
// 			cout << "* ";
// 		}

// 		cout << endl;
// 	}
// }
int main()
{
	int size;
	cin >> size;
	hollowFilledFullPyramid(size);

	return 0;
}