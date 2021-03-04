#include<Stdio.h>
int main()
{
    int p,i,j;
    scanf("%d",&p);
    int x[3][p],sum[p],real[p-2];
    for(i=0; i<p; i++)
    {
        sum[i]=0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
for(i=0; i<p; i++)
    {
        for(j=0; j<3; j++)
        {
                    if (j==0)
            {
                x[i][j]=x[i][j]*4;
            }
            else if (j==1)
            {
                x[i][j]=x[i][j]*2;
            }
            else if (j==2)
            {
                x[i][j]=x[j][j]*1;
            }
            sum[i]=sum[i]+x[i][j];
        }
    }
    for(i=0; i<p-2; i++)
    {
        real[i]=0;
        real[i]= (sum[i])+(sum[i+1])+(sum[i+2]);
    }
    int max=real[0],min=real[0],best=0,bad=0;
    for(i=0;i<p-2;i++)
    {
        printf("%d ",real[i]);
        if(max<real[i])
        {
            max=real[i];
            best=i;
        }
        else if(min>real[i])
        {
            min=real[i];
            bad=i;
        }
    }
    printf("%d %d",best+1,bad+1);
}

