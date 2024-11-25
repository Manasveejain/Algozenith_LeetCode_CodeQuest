#include <stdio.h>
#include<math.h>
#include<stdbool.h>
bool checkPerfectNumber(int num);
 
int main()
 {
  int x,n;
    printf("Enter a number :");
    scanf("%d",&x);
    n=checkPerfectNumber(x);
    
    (n==1)?printf("True"):printf("False");
   
   return 0;
 }

bool checkPerfectNumber(int num) {
 int i,sum=0;
    for(i=1;i<=num/2;i++)
    {
      if(num%i==0)
      sum+=i; 
    }
    if(num!=sum)
    return false;

 return true;
}
