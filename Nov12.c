#include <stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n);

int main() {
 int m,n,i;
  
  printf("Enter number of elements in array 1:");
  scanf("%d",&m);
  printf("Enter number of elements in array 2:");
  scanf("%d",&n);
  int arr1[m],arr2[n];
  
  int *p1=arr1, *p2=arr2;
  
   printf("Enter elements in array 1:");
  for(i=0;i<m;i++)
  {
  scanf("%d",&arr1[i]);
  }
   printf("Enter elements in array 2:");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr2[i]);
  }
  
  
  merge(p1,m+n,m,p2,n,n);
  return 0;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i,j;
    for(i=0;i<n;i++)
    nums1[m+i]=nums2[i];
    
    for(i=0;i<nums1Size-1;i++)
    {
     for(j=0;j<nums1Size-i-1;j++)
     {
     if(nums1[j]>nums1[j+1])
     {
      int temp;
      temp = nums1[j];
      nums1[j]=nums1[j+1];
      nums1[j+1]= temp;
     } } }
      printf("Merged array:\n");
      for(i=0;i<nums1Size;i++)
    { 
        printf("%d ",nums1[i]);
    }
     
}



