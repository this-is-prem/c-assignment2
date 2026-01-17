//17. Write a program in C to find the second smallest element in an array
#include<stdio.h>
int main(){
    int temp , a[50], size=0;
    printf("enter elements (-1 means exit) : ");
    for(int i = 0 ; i < 30 ; i++){
        scanf("%d",&temp);
        if(temp == -1){
            break;
        }
        a[i] = temp;
        size++;
    }

    for (int i = 0 ; i < size ; i++ ){
        for(int j = 0 ; j<size -1 ; j++ ){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

            }
        }

    }
    printf("the second largest element = %d",a[1]);


return 0;
}
