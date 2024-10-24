//include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> & arr)
{
	int s = 0;
	int e = arr.size() - 1;
	int mid = s + (e-s)/2;
	while(s<=e)
	{
		if(arr[mid] < arr[mid+1])
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
		mid = s + (e-s)/2;
	}
	return s;
}
int main()
{
	int even[6] ={2,5,9,3,7,8};
	cout << " the peakIndexInMountain " << (even,6,9 )<< endl;
	return 0;
}
