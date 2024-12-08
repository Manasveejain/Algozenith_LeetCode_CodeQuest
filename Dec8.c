#include <stdio.h>
int differenceOfSum(int* nums, int numsSize);

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
 printf("Differnce of sum: %d",differenceOfSum(num,n));
    return 0;
}




int differenceOfSum(int* nums, int numsSize) {
    int i,sumnum=0,sumdig=0;
    for(i=0;i<numsSize;i++)
    sumnum+=nums[i];
    for(i=0;i<numsSize;i++)
    { while(nums[i]!=0)
        {
          sumdig+=nums[i]%10;
          nums[i]/=10;
        }
    }

return sumnum-sumdig;
}
