#include<stdio.h>
int main(){
  int all[30] , odd[30] , even[30] ,temp,j = 0,k = 0 , max = 0;
  printf("enter elements (-1 means exit) : ");
   for(int i = 0 ; i < 30 ; i ++){
       scanf("%d",&temp);
       if(temp == -1){
        break;
       }
       all[i] = temp;
       max++;
   }
   for(int i = 0 ; i < max ; i++){
    if(all[i]%2 == 0){
        even[j] = all[i];
        j++;
    } else {
        odd[k] = all[i];
        k++;
    }
   }
   printf("even elements : ");
   for (int i = 0 ; i < j ; i++ ){
      printf("%d ",even[i]);
   }
   printf("\nodd elements : ");
   for (int i = 0 ; i < k ; i++ ){
      printf("%d ",odd[i]);
   }

return 0;
}
