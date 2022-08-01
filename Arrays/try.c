#include <stdio.h>
int GCD(int x, int y);
int main(){
    int a, b;
    
    // Asking for Input
    printf("Enter Two Positive Integers: \n");
    scanf("%d\n %d", &a, &b);
    
    printf("GCD of %d and %d is %d.", a, b, GCD(a, b));
    return 0;
}
int GCD(int x, int y){
    if( y != 0)
        return GCD(y, x % y);
    else 
        return x;
}