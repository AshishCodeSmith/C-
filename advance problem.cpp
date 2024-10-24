// search an element in an array
// #include<iostream>
// using namespace std;
// //int main()
// int search(int arr[],int N, int X)

// {
//     for(int i=0;i<=N;i++)
//     {
//         if(arr[i]==X)
//         return i;
//     }
//     return -1;
// }
// reverse in an array
#include<iostream>
using namespace std;
int main()
{
    int arr[6] ={1,2,3,4,5,6};
    int start =0, end =5;
    while(start<end)
    {
     swap(arr[start],arr[end]);
     start ++;
     end--;

    };
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}
