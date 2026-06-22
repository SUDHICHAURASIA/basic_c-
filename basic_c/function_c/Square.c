#include <stdio.h>

int square (int n){
    return n*n;

}

int main(){
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    printf("the square of %d is %d", num, square(num));
    return 0;
}