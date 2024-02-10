#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	system("cls");
	int row_num;
	int col_num;
	cout<<"Enter no. of rows: ";
	cin>>row_num;
	cout<<"Enter no. of columns: ";
	cin>>col_num;
	int x[row_num][col_num];
	for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cout<<"Enter element at [" << i << "][" << j << "]: ";
            cin>>x[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < row_num; i++)
    {
        for (int j = 0; j < col_num; j++)
        {
            cout<<"Element at [" << i << "][" << j << "]: ";
            cout<<x[i][j]<<endl;
        }
    }
}
