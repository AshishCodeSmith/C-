#include<iostream>
using namespace std;
// function signature
void printCounting(int n)
{
	//function body
	for(int i=1; i<=n; i++)
	{
		cout<< i << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	printCounting(n);
	// function call
	return 0;
}
