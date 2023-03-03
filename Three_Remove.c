#include <stdio.h>

int main()
{
    // Insert an element in array 
    int a[10],n,pos,ITEM;
    printf("Enter length of array=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    printf("First array=");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    printf("\nEnter postion of element do delete=");
    scanf("%d",&pos);
    for(int i=pus-1;i<n-1;i++){
        a[i] = a[i+1];
        
    }
    n=n-1;
    printf("The final array=");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
}