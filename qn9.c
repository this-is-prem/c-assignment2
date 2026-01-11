//9. Write a program in C to find the maximum and minimum element
// in an array.
#include<stdio.h>
int main(){
   int arr[30] , temp ,max = 0 ;
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
   printf("The maximum element is %d",arr[max-1]);
   printf("The minimum element is %d",arr[0]);


return 0;
}
