#include <stdio.h>
 int hammingWeight(int n);
int main()
 {
  int x,n;
  printf("Enter a number :");
   scanf("%d",&x);
   n=hammingWeight(x);
   printf("%d",n);
   return 0;
 }
 
 int hammingWeight(int n) {
    int i=0;
    while(n!=0)
    {
      if(n%2!=0)
      {
        i++;
      }
      n=n/2;
    }
  return i;  
}
