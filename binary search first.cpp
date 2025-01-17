#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size;
//	int mid = (start+end)/2;
	while(start <= end )
	{
	int mid = (start+end)/2;
		if(arr[mid] == key)
		{
			return mid;
		}
		//go to right wala part 
		if(key > arr[mid])
		{
			start = mid + 1;
		}
		else // key < arr[mid]
		{
			end = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int even[6] = {2,4,6,8,12,18};
	int odd[5] =  {3,8,11,14,16};
	int evenIndex = binarySearch(even, 6,18);
	cout << "Index of 18 is " << evenIndex << endl;
	int oddIndex = binarySearch(odd,5,20);
	cout << " Index of 20 is " << oddIndex << endl;
	return 0;
//	return 0;
}

