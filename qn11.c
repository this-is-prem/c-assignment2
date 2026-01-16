//11. Write a program in C to sort elements of array
//in ascending order
#include<stdio.h>
int main(){
    int temp , arr[30], max = 0;
    printf("enter elements (-1 means exit) : ");
    for(int i = 0 ; i < 30 ; i ++){
       scanf("%d",&temp);
       if(temp == -1){
        break;
       }
       arr[i] = temp;
       max++;
   }
   for ( int i = 0 ; i < max ; i++){
       for(int j = 0 ; j<max -1; j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
       }
   }
   printf("sorted elements : ");
   for(int i = 0 ; i < max ; i++){
    printf("%d ",arr[i]);
   }
return 0;
}
