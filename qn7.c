//7. Write a program in C to merge two arrays of same size sorted in decending order.
#include<stdio.h>

void arrCat(int *p ,int *q, int s  ) {
    p = p + s ;
    for(int i = 0 ; i < s ; i ++){
            *p = *q;
            p++;
            q++;
}
}
int main(){

   int a1[50] ,a2[50],size , temp ;
   printf("enter the sizes of the array : ");
   scanf("%d",&size);
   printf("enter elements for the 1st array :");
   for(int i = 0  ; i < size ; i++){
   scanf("%d", &a1[i]);
   }

   printf("enter elements for the 2nd array :");
   for(int i = 0  ; i <size ; i++){
    scanf("%d", &a2[i]);
   }

   arrCat(a1 , a2 , size);
   printf( "\narray after combining : ");
   for(int i = 0 ; i < size*2 ; i++ ){
       printf("%d ", a1[i]);
   }

   for(int i = 0 ; i < size*2 ; i++){
    for(int j = 0 ; j< size*2 - 1 ; j ++){
        if (a1[j]<a1[j+1]){
            temp = a1[j];
            a1[j] = a1[j+1];
            a1[j+1] = temp;
        }
    }
   }
   printf("\n\nsorted elements after combining :");
   for (int i = 0 ; i < size*2 ; i ++){
        printf("%d ", a1[i]);

   }
   printf("\n");
return 0;
}
