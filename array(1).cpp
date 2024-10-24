#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
	cout<< " printing the array " << endl;
	//print the array
	for( int i =0; i<size; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{ // declare
char ch[5] ={'a','b','c','d','e'};
cout << ch[2] << endl;
	int number[15];
	//accessing an array
	cout << " value at 15 index " << number[1] << endl;
	//intialising an array 
	int second[3] ={5,6,11};
	//accessing an elment
	cout << "value at 2 index " << second[2] << endl;
	int third[15] ={2,7};
	int n = 3;
	cout<< " printing the array " << endl;
	//print the array
	for(int i =0;i<n; i++)
	{
		cout << endl << " everything is fine  " << endl << endl;	}	
		double firstDouble[5];
		float firstFloat[6];
		bool firstBool [9];
		cout << endl << " everthing is fine " << endl << endl;
		return 0;
}
