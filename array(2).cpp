#include<iostream>
using namespace std;
int getMAX(int num[], int n)
{
	int min = INT_MIN;
	for(int i =0; i<n; i++)
	{ 
	 // maxi = max(maxi,num[i]);
	//	if(num[i] > max)
	//	{
	//		max = num[i];
	//	}
//	}
	//return max value 
	return 0;
}
int main ()
{
	int size;
	cin >> size;
    int num[100];
    for (int i=0;i<=size;i++)
    {
       cin >> num[i];
	}
	cout << "Maximum value is " << getMax(num,size) << endl;
	cout << " MINIMUM value is" << getMin(num.size) << endl;
}
}
