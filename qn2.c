//2. Write a program in C to read n number of values in an array and display it in reverse
//order.
#include<stdio.h>
int main(){
int n ;
printf("how many values do you want to enter ? ");
scanf("%d",&n);
int arr[n] ;
printf("\nenter the values :");
for( int i = 0 ; i<n ; i++){
    scanf("%d",&arr[i]);
}
for( int i = n-1 ; i>= 0 ; i--){
    printf("%d",arr[i]);
}
return 0;

}
