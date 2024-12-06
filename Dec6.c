#include<stdio.h>
int countOperations(int num1, int num2);

int main()
 {
  int x,y,result;
  printf("Enter two Numbers: ");
   scanf("%d %d",&x,&y);
   result=countOperations(x,y);
   printf("Number of operation to return the number to zero :\n%d",result);
   return 0;
 }
 
 int countOperations(int num1, int num2) {
    if(num1==0||num2==0)
    return 0;
    else if(num1>=num2)
    return 1+countOperations(num1-num2,num2);
    else 
    return 1+countOperations(num1,num2-num1);
}
