#include<stdio.h>
#include<string.h>
int main()
{
    int i,o,n,j;
    char pos[2][2]= {{1,0},{0,0}};
    char w[100];
    scanf("%d",&n);
    while(n>0)
    {
    scanf("%s",w);
        for(i=0; i<strlen(w); i++)
        {
            if(w[i]=='A')
            {
                o=pos[1][0];
                pos[1][0]=pos[0][1];
                pos[0][1]=o;
            }
            else if(w[i]=='B')
            {
                o=pos[0][0];
                pos[0][0]=pos[1][1];
                pos[1][1]=o;
            }
            else if (w[i]=='C')
            {
                o=pos[0][0];
                pos[0][0]=pos[1][0];
                pos[1][0]=o;
                o=pos[0][1];
                pos[0][1]=pos[1][1];
                pos[1][1]=o;
            }
            else if (w[i]=='D')
            {
                o=pos[0][0];
                pos[0][0]=pos[0][1];
                pos[0][1]=o;
                o=pos[1][0];
                pos[1][0]=pos[1][1];
                pos[1][1]=o;
            }
            else if (w[i]=='E')
            {
                o=pos[0][0];
                pos[0][0]=pos[1][1];
                pos[1][1]=o;
                o=pos[0][1];
                pos[0][1]=pos[1][0];
                pos[1][0]=o;
            }
        }
        if(pos[0][0]==1)
        {
            printf("1");
        }
        else if (pos[0][1]==1)
        {
            printf("2");
        }
        else if (pos[1][0]==1)
        {
            printf("3");
        }
        else if (pos[1][1]==1)
        {
        printf ("4");
        }
         n--;
    }
}
