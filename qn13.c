//13. Write a program in C to insert New value in the sorted array.
#include<stdio.h>
int main(){
    int temp , a[30], size;
    printf("enter elements (-1 means exit) : ");
    for(int i = 0 ; i < 30 ; i++){
        scanf("%d",&temp);
        if(temp == -1){
            break;
        }
        a[i] = temp;
        size++;
    }

    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j< size -1 ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("enter new value to place in the array :");
    scanf("%d",&a[size]);
    size++;
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j< size -1 ; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < size ; i ++ ){
        printf("%d ",a[i]);
    }

return  0;
}
