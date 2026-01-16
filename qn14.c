//14. Write a program in C to insert New value in the array at any given position.
#include<stdio.h>
int main(){
    int temp , a[50], size=0, num , position;
    printf("enter elements (-1 means exit) : ");
    for(int i = 0 ; i < 30 ; i++){
        scanf("%d",&temp);
        if(temp == -1){
            break;
        }
        a[i] = temp;
        size++;
    }
    printf("enter new element to insert :");
    scanf("%d",&num);
    printf("enter position :");
    scanf("%d",&position);

    for(int i = size-1 ; i>=position-1 ; i--){
        a[i+1] = a[i];
    }
    a[position-1] = num;
    for(int i = 0; i < size+1 ; i++){
        printf("%d ",a[i]);
    }


return 0;
}
