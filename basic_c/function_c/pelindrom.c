#include<stdio.h>
#include<string.h>
int check_pelindrom(int n){
    int rev=0,temp=0;

    temp=n;
    while(temp!=0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    return rev==n;

}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(check_pelindrom(num)){
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}