#include <stdio.h>
 int sumOfMultiples(int n);

int main()
 {
  int x,n;
    printf("Enter a number :");
    scanf("%d",&x);

    printf("%d",sumOfMultiples(x));
     
   
   return 0;
 }
 
 int sumOfMultiples(int n) {
int i, sum=0;
 for(i=1;i<=n;i++){
    if(i%3==0||i%5==0||i%7==0)
    sum+=i;
 }
  return sum;  
}
