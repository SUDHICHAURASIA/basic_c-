# include <stdio.h>
int even_odd(int arr[],int size){
    int evn=0,odd=0;
    for (int i=0;i<size;i++){
        if (arr[i]%2==0){
            evn++;
            printf("%d is even\n",arr[i]);
        }
        else{
            odd++;
            printf("%d is odd\n",arr[i]);
        }
    }
    printf("number of even numbers: %d\n",evn);
    printf("number of odd numbers: %d\n",odd);
    return 0;
    }

            int main(){
                int arr[100],size;
        printf("enter the size of array:");
        scanf("%d",&size);
        printf("enter the elements of array:");
        for (int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        even_odd(arr,size);
        return 0;
    }
