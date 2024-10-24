#include<iostream>
using namespace std;
int lastOcc(int arr[], int n, int key)
{
	int s =0, e= n-1;
	int mid = s + (e-s)/2;
//	int ans = -1;
	while(s<=e)
	{
			int ans = -1;
		if(arr[mid] == key)
		{
			ans = mid;
			e = mid+1;
		}
		else if(key > arr[mid]) //right main jaoo
		{
			s =mid+1;
		}
		else if(key < arr[mid]) //left main jaoo
		{
	      e = mid - 1;
		}
		mid = s + (e-s)/2;
			return ans;
	}
//	return ans;
}
int main()
{
	int even[5] ={1,2,3,3,5};
//	cout << " first occurence of 3 is " << firstOcc(even,5,3) << endl;
	cout << " last occurence of 3 is " << lastOcc(even,5,3 ) << endl;
	return 0;
}//j
