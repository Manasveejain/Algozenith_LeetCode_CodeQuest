#include <stdio.h>
int subtractProductAndSum(int n);

int main()
 {
  int x,n;
    printf("Enter a number :");
    scanf("%d",&x);

    printf("%d",subtractProductAndSum(x));
     
   
   return 0;
 }
 
int subtractProductAndSum(int n) {
    int sum=0,mul=1;
    while(n!=0)
    {
     sum+=n%10;
     mul*=n%10;
     n/=10;
    }
 return mul-sum;
}
