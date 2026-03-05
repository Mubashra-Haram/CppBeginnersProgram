
//****** Example 2 **********
//Let’s have a matrix(two - dimensional array) of two rows and three columns.We wan
//to fill it with values from the user and to display them in two rows and three columns.
#include <iostream>;
using namespace std;
int main() {
	int matrix[2][3];
	cout << "Enter 6 values for the matrix:" << endl;
	for (int row = 0; row < 2; row++) {
		for (int col = 0; col < 3; col++) {
			cin >> matrix[row][col];
		}
	}
	cout << "The matrix is:" << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}