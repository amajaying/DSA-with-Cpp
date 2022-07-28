#include <iostream>
using namespace std;

int main(){
    int arr[6]={ 6, 8, 9, 10, 11, 9};
    int n=6;
    int a = n;
    if(n%2!=0)
        a=n/2;

    for(int i=0; i<a; i=i+2){
        swap(arr[i],arr[i+1]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}