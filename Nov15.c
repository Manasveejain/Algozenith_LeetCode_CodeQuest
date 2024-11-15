#include <stdio.h>
#include<stdlib.h>
int *plusOne(int* digits, int digitsSize, int* returnSize);
int main() 
{
    int n,returnSize,i;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    int* nums = (int*)malloc(n * sizeof(int));
    
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);
    
    plusOne(nums,n,&returnSize);
    
    return 0;
}
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int i;
    digits[digitsSize-1]=digits[digitsSize-1]+1;
     *returnSize=digitsSize;
    for(i=digitsSize-1;i>=0;i--)
  {
    if(digits[i]==10)
    { 
      if(i!=0)
      {
       digits[i]=0;
       digits[i-1]=digits[i-1]+1; 
      }

      else
      {
        *returnSize=digitsSize+1;
        digits =realloc(digits,*returnSize * sizeof(int));
        digits[0] =1;
        digits[1] =0;
        
        for (i = 2; i < *returnSize; i++) 
           digits[i] = digits[i - 1];  
      }
    }
   }
   for(i=0;i<*returnSize;i++)
   printf("%d,",digits[i]);

 return digits;
}
