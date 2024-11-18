#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int romanToInt(char* s);

int main() {
    int a;
    char str[15];
    printf("Enter a Roman number(in Upper case): ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
   a=romanToInt(str);
   printf("Length of last word is:%d ",a);

    return 0;
}

int romanToInt(char* s) {
    int i,sum=0;
    int n=strlen(s);
    for(i=0;i<n;i++)
    {
     if (s[i]=='M')
     sum+=1000;
     else if (s[i]=='C'&&s[i+1]=='M')
     {sum+=900;
     i++;
     }
     else if(s[i]=='D')
     sum+=500;
     else if (s[i]=='C'&&s[i+1]=='D')
     {sum+=400;
     i++;}
     else if(s[i]=='C')
     sum+=100;
     else if (s[i]=='X'&&s[i+1]=='C')
     {sum+=90;
     i++;}
     else if(s[i]=='L')
     sum+=50;
     else if (s[i]=='X'&&s[i+1]=='L')
     {sum+=40;
     i++;}
     else if(s[i]=='X')
     sum+=10;
     else if (s[i]=='I'&&s[i+1]=='X')
     {sum+=9;
     i++;}
     else if(s[i]=='V')
     sum+=5;
     else if (s[i]=='I'&&s[i+1]=='V')
    {sum+=4;
     i++;}
     else if(s[i]=='I')
     sum+=1;
     else 
     {
     printf("Invalid Input");
      exit(0);
}
    }
    return sum;
}
