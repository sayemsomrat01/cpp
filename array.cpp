#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int row, col, cvalue,cr,cj;
	string selector;
	cout << "Enter the size of array : [row - column] :";
	cin >> row >> col;
	int array[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "element - "
				 << "[" << i+1 << "]"
				 << "[" << j+1 << "] :";
			cin >> array[i][j];
		}
	}
	system("CLS");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Do you want to change the value of array in any position? " << endl;
	cin >> selector;
	if (selector == "YES" || selector == "yes" || selector == "Yes")
	{
		cout << "Enter the position of the value you want to change : row - column ---" << endl;
		cin >> cr >> cj;
		cout << "Enter the value :" << endl;
		cin >> cvalue;
		//array[cr][cj]=cvalue;
		
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if(array[i][j]==array[cr][cj]){
					array[i][j]=cvalue;
				}
				cout << array[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	return 0;
}
