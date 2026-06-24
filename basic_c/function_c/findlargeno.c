#include <stdio.h>

int findlargrnumber(int arr[],int size){
    int largest=arr[0];
    for (int i=1;i<size;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[100],size;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter the elements of array:");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("the largest number in the array is %d\n",findlargrnumber(arr,size));
    return 0;
}