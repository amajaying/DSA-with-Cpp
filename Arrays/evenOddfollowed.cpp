#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={2,1,3,5,4,6,7,8,3,9};
    int i=0, j=9;
    while(i<j){
        if(arr[i]%2==0){
            i++;
        }
        else if(arr[j]%2!=0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }

    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}