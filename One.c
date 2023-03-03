#include <stdio.h>

int main()
{
   int arr[5] = {34,24,21,43,13};
   int i, max, loc;
   max = arr[0];
   loc=0;
   for(i=1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
            loc = i;
        }   
   }
   printf("The maximum element of given array is %d which is at location %d",max,loc);
   return 0;
}