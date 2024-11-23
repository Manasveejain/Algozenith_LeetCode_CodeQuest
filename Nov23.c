#include<stdio.h>
#include<stdbool.h>
bool isPowerOfThree(int n) {
    if(n%3==0&&n>1)
  return isPowerOfThree(n/3);

   else if(n==1)
   return true;
   
  return false;
    
}

int main()
 {
  int x,n;
  printf("Enter a number :");
   scanf("%d",&x);

   if(isPowerOfThree(x))
    printf("%d is a power of 3",x);
    else
    printf("%d is  not a power of 3",x);
     
   
   return 0;
 }
