#include <stdio.h>
#include<stdbool.h>

bool isPowerOfTwo(int n);
int main()
 {
  int x,n;
  printf("Enter a number :");
   scanf("%d",&x);

   if(isPowerOfTwo(x))
    printf("%d is a power of 2",x);
    else
    printf("%d is  not a power of 2",x);
     
   
   return 0;
 }
 
 bool isPowerOfTwo(int n) 
{ 
  if(n%2==0&&n>1)
  return isPowerOfTwo(n/2);

   else if(n==1)
   return true;
   
  return false;
}
