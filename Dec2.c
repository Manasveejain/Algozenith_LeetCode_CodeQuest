#include <stdio.h>
int numberOfSteps(int num);

int main()
 {
  int x,n;
    printf("Enter a number :");
    scanf("%d",&x);

    printf("%d",numberOfSteps(x));
     
   
   return 0;
 }
int numberOfSteps(int num) {
 
    if(num%2==0 && num>0)
    {
     return 1+numberOfSteps(num/2);
    }
    else if(num%2!=0)
    {
     return 1+ numberOfSteps(num-1);
    }
    else 
     return 0;
}
