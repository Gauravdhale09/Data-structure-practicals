#include <stdio.h>

void main()
{
    int a[25];
    int i,j,n,temp;
    printf("Enter number of elements in array=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array before sorting=");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]> a[j+1]){
                temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                

            }
            
        }
    }
    printf("sorted array=");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
}