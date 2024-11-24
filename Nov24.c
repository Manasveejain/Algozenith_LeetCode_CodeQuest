#include <stdio.h>
#include<math.h>
#include<stdbool.h>
 bool isPerfectSquare(int num);
 
int main()
 {
  int x,n;
    printf("Enter a number :");
    scanf("%d",&x);
    n=isPerfectSquare(x);
    
    (n==1)?printf("True"):printf("False");
   
   return 0;
 }
 
 bool isPerfectSquare(int num) {

int rt;
 rt= sqrt(num);
  if(num==pow(rt,2))
  return true;
    
return false;
}
