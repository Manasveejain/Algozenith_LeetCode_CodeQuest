#include <stdio.h>
#include<stdlib.h>
int* getConcatenation(int* nums, int numsSize, int* returnSize);
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
    printf("concatenated array:\n");
    int*result=getConcatenation( nums,n,&returnSize);
    for(i=0;i<2*n;i++)
    {
        printf("%d ",result[i]);
    }
    free(nums);
    return 0;
}

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i;
     *returnSize=2*numsSize;
     int*result=(int*)malloc(*(returnSize)*sizeof(int));
     for(i=0;i<numsSize;i++)
     {
        result[i] = nums[i];
        result[numsSize + i] = nums[i];

     }
return result;
}
