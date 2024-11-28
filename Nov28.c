#include<stdio.h>
int commonFactors(int a, int b);

int main()
 {
  int x,y,result;
  printf("Enter two Numbers: ");
   scanf("%d %d",&x,&y);
   result=commonFactors(x,y);
   printf("%d",result);
   return 0;
 }
 
int commonFactors(int a, int b) {
    int i,j=0;
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        j++;
    }

return j;
}
