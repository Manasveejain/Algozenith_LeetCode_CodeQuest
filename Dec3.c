#include <stdio.h>
#include<stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize);
int main() 
{
    int n,i;
    int returnSize;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    int* nums = (int*)malloc(n * sizeof(int));
    
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);
    
    int*result=runningSum( nums,n,&returnSize);
    for(i=0;i<n;i++)
    {
        printf("%d ",result[i]);
    }
    free(nums);
    return 0;
}

int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    for(int i=0;i<numsSize-1;i++)
    {
     nums[i+1]=nums[i+1]+nums[i];
    }
 return nums;   
}
