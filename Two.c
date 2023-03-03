#include <stdio.h>

int main()
{
    int arr[ ] = {1,2,3,4,5,6};
    int i, sum=0;
    float avg;
    // printf("Enter the length of array\n");
    // scanf("%d",&n);
    
    for(i=0;i<6;i++){
        sum = arr[i] + sum;
    }
    
    avg = (float)sum / 6;
    printf("sum and average of an elements of an array is %d and %.2f respectively.",sum,avg);
    return 0;
}
