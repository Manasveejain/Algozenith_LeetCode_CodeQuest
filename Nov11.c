#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x) {
    
    long int sum=0;
    int n=x;
    while(n>0)
    {
     sum=sum*10+n%10;
     n=n/10;
    }
   if(sum==x)
   return true;
   else
   return false;
   
}

int main()
{
 int n;
 scanf("%d",&n);
 bool result =isPalindrome(n);
 printf("Palindrome check result: %s\n", result ? "True" : "False");
 return 0;
}
