#include <stdio.h>
int countDigits(int num);
int main() {
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 printf("Number of digits divide the number:%d",countDigits(n));

    return 0;
}

int countDigits(int num) {
    int r,i=0, n=num;
    while(n!=0)
    {
    r =n%10;
    if(num%r==0)
    i++;
    n/=10;
    }
return i;
}
