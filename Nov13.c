#include <stdio.h>
int removeElement(int* nums, int numsSize, int val);

int main() {
 int target,i,n;
 printf("Enter number of elements in the array: ");
 scanf("%d",&n);
 int arr[n], *ptr;
 ptr=arr;
 printf("Enter elements in array: ");
 for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 
 printf("Enter the target value:");
 scanf("%d",&target);
removeElement(ptr,n,target);
    return 0;
}


int removeElement(int* nums, int numsSize, int val) {
int i,j;
for (i=0;i<numsSize;i++){
    if(nums[i]==val)
    {
     for(j=i;j<numsSize-1;j++)
       nums[j]=nums[j+1];
       
     numsSize--;
      i--;
    }
}
 printf("[");
    for(i=0;i<numsSize;i++){
        printf("%d,",nums[i]);
    }
    printf("]");
 return numsSize;  
}




