#include <stdio.h>
#include<limits.h>
int reverse(int x);
int main() {
   int n,a;
   printf("Enter a number: ");
 scanf("%d",&n);
   a=reverse(n);
   printf("Reversed number is : %d",a);
   return 0;
}

int reverse(int x){
 signed long int sum=0;
   while(x!=0)
   {
    sum=sum*10+x%10;
    x=x/10; 
   }

if(sum<(INT_MAX)&& sum>INT_MIN)
return sum;
else 
return 0;
}
