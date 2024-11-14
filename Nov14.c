#include <stdio.h>
#include<stdlib.h>
int twoSum(int* nums, int numsSize, int target, int* returnSize);
int main() {
    int target,n,returnSize,i;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    
    int nums[n];
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);

    printf("Enter target sum:");
    scanf("%d",&target);
    
    twoSum(nums,n,target,&returnSize);
    return 0;
}

int twoSum(int* nums, int numsSize, int target, int* returnSize)
{
 int i,j,n;
  int *Size =(int*) malloc(2*sizeof(int));
 *returnSize=2;
  
    for(i=0;i<numsSize;i++)
    {   
     n=target;
     n=n-nums[i];
     for(j=i+1;j<numsSize;j++)
     {
       if(nums[j]==n)
       {
         Size[0]=i;
         Size[1]=j;
        goto end; 
       }
      }
    }
 end:
 printf("Indices of number that add upto target sum:\n[%d,%d]",Size[0],Size[1]);
 return 0;
 free(returnSize);
}
