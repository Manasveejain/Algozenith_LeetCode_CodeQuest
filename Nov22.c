#include <stdio.h>
int addDigits(int num);

int main()
 {
  int x,n;
    printf("Enter a number :");
    scanf("%d",&x);

    printf("%d",addDigits(x));
     
   
   return 0;
 }
 
 int addDigits(int num) {
 int c=0;
    if(num>0)
    {
    c=num%10+addDigits(num/10);
    if(c>9)
    return addDigits(c);
    }
return c;
}
