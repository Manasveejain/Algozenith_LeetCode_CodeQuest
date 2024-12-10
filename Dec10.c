#include <stdio.h>
int xorOperation(int n, int start);

int main() {
  int n1,n2;
  printf("Enter the number of elements and starting number: ");
  scanf("%d %d",&n1,&n2);
  printf("%d",xorOperation(n1,n2));

    return 0;
}

int xorOperation(int n, int start) {
 int nums[n],i;
    nums[0]=start;
    nums[i]=nums[0]+2*i;
    for(i=1;i<n;i++)
    {
     nums[i]=nums[0]+2*i;
     nums[i]=nums[i]^nums[i-1];
    }
return nums[n-1];
}
