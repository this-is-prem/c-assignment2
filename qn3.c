//3. Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int main(){
int arr[]= { 5 , 7 , 14 , 22} , sum = 0;
for (int i = 0 ; i < 4 ; i++ ){
    sum = sum + arr[i];
}
printf("sum  = %d ", sum);

return 0;
}
