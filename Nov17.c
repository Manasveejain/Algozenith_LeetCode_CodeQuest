#include <stdio.h>
#include<string.h>
int lengthOfLastWord(char* s);

int main() {
    int a;
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
   a=lengthOfLastWord(str);
   printf("Length of last word is:%d ",a);

    return 0;
}

int lengthOfLastWord(char* s) {
 int n,i,l=0,flag=0;
 n=strlen(s);

 while(s[n-1]==' ') 
 n--;
 
 for(i=n-1;i>=0;i--)
 { 
    if(s[i]==' ')
    {
    flag=1;
    break;
    }
 }
    if(flag==1)
    {
    i=n-1;
    while(s[i]!=' ')
    {
      l++;
      i--;
    }
    }
    else
    {
     l=n;
    }
 return l;   
}
