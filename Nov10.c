#include<stdio.h>
#include<math.h>

int mySqrt(int x) 
{
 int sq=pow(2, 0.5 * (log(x) / log(2)));
 printf("%d",sq);
 return sq;
}

int main()
 {
  int x;
   scanf("%d",&x);
   mySqrt(x);
   return 0;
 }
