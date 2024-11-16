#include <stdio.h>
#include<stdlib.h>
int searchInsert(int* nums, int numsSize, int target);
int main() {
    int target,n,i,a;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    
    int nums[n];
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);

    printf("Enter target sum:");
    scanf("%d",&target);
    a=searchInsert( nums,n,target);
    printf("%d",a);
    return 0;
}

int searchInsert(int* nums, int numsSize, int target) {
    int i,n;
    if(target<=nums[numsSize-1] && target>=nums[0])
    {
     for(i=0;i<numsSize;i++)
     {
      if(nums[i]==target)
      n=i;

      else
      if(target>nums[i]&&target<nums[i+1])
      n=i+1;
      
     }

    }
    else if(target>nums[numsSize-1])
    {
     n=numsSize;
    }
    else
    n=0;
    

return n; 
}
