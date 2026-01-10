//7. Write a program in C to merge two arrays of same size sorted in decending order.
#include<stdio.h>
int main(){
   int temp , a1[5] ,a2[5];
   printf("enter elements for the 1st array (-1 means exit):");
   for(int i = 0  ; i <5 ; i++){
    scanf("%d", &temp);
    if(temp == -1) {
        break;
    }
    a1[i] = temp ;
   }
   temp = 0;
   printf("enter elements for the 2nd array (-1 means exit):");
   for(int i = 0  ; i <5 ; i++){
    scanf("%d", &temp);
    if(temp == -1) {
        break;
    }
    a2[i] = temp ;
   }

return 0;
}
