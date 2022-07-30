#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the size of array (odd): ";
    cin>>m;
    int arr[m];

    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    int x, count=0;

    for(int i=0; i<m; i++){
        x=arr[i];
        for(int j=0; j<m; j++){
            if(x==arr[j]){
                count++;
            }
        }
        if(count<2){
            cout<<arr[i];
        }
        count = 0;
    }
}
