// This code only removes the element and replaces it with next element but the last element remains the same.
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,3,5,6,7};

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    int a;
    cin>>a;

    for(int i=0; i<5; i++){
        if(a==arr[i]){
            arr[i]=arr[i+1];
            for(int j=i; j<4; j++){
                arr[j]=arr[j+1];
            }
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}