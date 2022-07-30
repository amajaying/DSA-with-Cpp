#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int toN = 0;

    // using XOR on numbers from 1 to n-1
    for (int i = 0; i < n; i++)
    {
        toN = i ^ toN;
    }

    // using XOR on numbers of array
    for (int i = 0; i < n; i++)
    {
        toN = arr[i] ^ toN;
    }
}