#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i < size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1, 5, -8, 11, 5, -7, 9, 2, 1, 0};
    int key;
    cout << "Enter the element to find: ";
    cin >> key;
    bool found = search(arr, 10, key);
    if(found){
        cout << "Found" << endl;
    }
    else{
        cout << "Not found!" << endl;
    }
    return 0;
}
