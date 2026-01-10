//4. Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main(){
int n[] = { 1 , 22 , 17 , 3 , 12};
int n2[5];
printf("The copied elements in the 2nd array are : ");
for ( int i = 0 ; i < 5 ; i++){
    n2[i] = n[i];
    printf("%d ",n2[i]);
}

return 0;
}
