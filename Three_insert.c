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
        printf("%d",a[i]);
    }
    printf("\nEnter postion to where you want to insert element=");
    scanf("%d",&pos);
    printf("\nEnter element to insert in array=");
    scanf("%d",&ITEM);
    for(int i=n;i>=pos;i--){
        a[i+1] = a[i];
    }
    a[pus-1] = ITEM;
    n++;
    printf("Final array=");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}