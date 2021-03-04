#include<Stdio.h>
int main()
{
    int p,i,j,max,min,best,bad;
    scanf("%d",&p);
    int x[p][3];
    int sum[p];
    int real[p-2];
    for(i=0;i<p;i++)
    {
        sum[i]=0;
        for(j=0;j<3;j++)
            x[i][j]=0;
    }
    for( i=0;i<p;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for( i=0;i<p;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==0)
                x[i][j]=x[i][j]*4;
            else if(j==1)
                x[i][j]=x[i][j]*2;
            else if(j==2)
                x[i][j]=x[i][j]*1;
            sum[i]=sum[i]+x[i][j];
        }
    }
    for(i=0;i<p-2;i++)
    {
        real[i]=sum[i]+sum[i+1]+sum[i+2];
    }
    max=real[0];
    best=0;
    min=real[0];
    bad=0;
    for(i=1;i<p-2;i++)
    {

        if(max<real[i])
        {
            max=real[i];
            best=i;
        }
        if (min > real[i])
        {
            min=real[i];
            bad=i;
        }
    }
   printf("%d %d",best+1,bad+1);
}
