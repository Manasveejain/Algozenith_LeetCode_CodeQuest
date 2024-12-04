#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize);
int main() 
{  
    int n,i,extracandies;
    int returnSize;
    // No. of children 
    printf("Enter number of Children: ");
    scanf("%d",&n);
    
    //memory allocation
    
    int* nums = (int*)malloc(n * sizeof(int));
    
    //No of candies provided to each kid
    
    printf("Enter no. of candies given to each kid: ");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);
    
    //no of extra candies provided
     printf("Enter number of extra candies: ");
     scanf("%d",&extracandies);
     
   bool *result=(kidsWithCandies(nums, n, extracandies,& returnSize) );
    printf("Result (true if kid can have the greatest number of candies):\n[");
    for (i = 0; i < returnSize; i++) 
    {
        printf("%s, ", result[i] ? "true" : "false");
    }
    printf("]\n");
   
    free(nums);
    free(result);
    return 0;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) 
{
    int i,max=candies[0];
     *returnSize=candiesSize;
    bool *result=(bool*)malloc( (*returnSize)*sizeof(bool));
   
    for(i=0;i<candiesSize;i++)
    {
        if(candies[i]>max)
        max=candies[i];
    }
    for(i=0;i<candiesSize;i++)
    result[i]=(candies[i]+extraCandies>=max);
    
return result;
}
