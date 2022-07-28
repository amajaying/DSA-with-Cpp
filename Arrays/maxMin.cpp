#include<iostream>
using namespace std;

int findMax(int n[], int size){
    int max = n[0]; 
    for(int i=0; i<size; i++){
        if(n[i]>max)
            max=n[i];       
    }
    return max;
}

int findMin(int n[], int size){
    int min = n[0]; 
    for(int i=0; i<size; i++){
        if(n[i]<min)
            min = n[i];       
    }
    return min;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout << "Max = " << findMax(num,size) << endl;
    cout << "Min = " << findMin(num,size) << endl;


}