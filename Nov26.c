#include <stdio.h>
#include<string.h>
char* toLowerCase(char* s) ;

int main() {
   char *low;
    char str[50];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    toLowerCase(str);
    return 0;
}

char* toLowerCase(char* s) {
    int i,n;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
     if(s[i]<=90&&s[i]>=65)
     s[i]=s[i]+32;
    }
    for(i=0;i<n;i++)
    {
     printf("%c",s[i]);
    }
return s;
}
