//6. Write a program in C to print all unique elements in an array
#include<stdio.h>
int main(){
int temp , arr[30], count= 0 , unique = 0;
printf("enter elements  (-1 means exit) : ");
for(int i = 0 ; i < 30 ; i++){
    scanf("%d",&temp);
    if( temp == -1){
        break;
    } else {
        arr[i] = temp;
        count++;
    }
}
for(int i = 0 ; i < count ; i ++){
    for( int j = i+ 1 ; j<count ; j ++){
        if(arr[i] != arr[j]){
            unique++;
            break;
        }
    }
}
return 0;
}
// not complete
