#include <iostream>
using namespace std;


int main(){
    int arr[11] = {4, 1, 5, -8, 11, 5, -7, 9, 2, 1, 0};
    int temp;
    int n=11;

    cout << "Before reverse: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

    for(int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout<<endl;
    cout << "After reverse: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    

}