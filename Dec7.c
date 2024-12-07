#include <stdio.h>
int findNumbers(int* nums, int numsSize);

int main() {
 int n,i;
 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);
 
 int num[n];
 
 printf("Enter elements in array: ");
 for(i=0;i<n;i++)
 {
     scanf("%d",&num[i]);
 }
 printf("Number of even digit term in the array is: %d",findNumbers(num,n));
    return 0;
}

int findNumbers(int* nums, int numsSize) {
   int i,dig,j=0;
    for(i=0;i<numsSize;i++)
    { dig=0;
      while(nums[i]!=0)
      {
        nums[i]/=10;
        dig++;
      }
      if(dig%2==0)
       j++;
    }
return j;
}
