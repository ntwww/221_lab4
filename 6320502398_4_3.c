#include<stdio.h>
#include<string.h>
int main()
{
    char c[200];
    int i;
    scanf("%s",c);
    for(i=0; i<strlen(c)-1; i++)
    {
        if(c[i]==c[i+1])
        {
            printf("%c",c[i]);
        }
    }
printf("%c",c[strlen(c)-1]);
}
