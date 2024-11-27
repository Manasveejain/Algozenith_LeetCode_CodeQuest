#include<stdio.h>
int fib(int n);
int main()
 {
  int x,i,m;
   scanf("%d",&x);

   for(i=1;i<=x;i++)
    {
     printf("%d,",fib(m));
     m++;
    }
   return 0;
 }

int fib(int n){
    if(n>1)
    return fib(n-1)+fib(n-2);
    else
    return n;
 return fib(n);
}
