#include <stdio.h>

int main() {
   int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
   int n = sizeof(arr) / sizeof(arr[0]);
   int x = ;
   
   int low = 1, high = n, mid;

   while (low <= high) {
      mid = (low + high) / 2;

      if (arr[mid] == x) {
         printf("Element is present at index %d\n", mid);
         return 0;
      }
      else if (arr[mid] < x)
         low = mid + 1;
      else
         high = mid - 1;
   }

   printf("Element is not present in array\n");
   return 0;
}