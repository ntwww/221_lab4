#include<Stdio.h>
int main()
{
    int p,i,j,k;
    scanf("%d",&p);
    int x[3][p],sum[p],real[p-2];
    int lim = p-2;
    for(i=0; i<3; i++)
    {
        sum[i]=0;
        for(j=0; j<p; j++)
        {
            scanf("%d",&x[i][j]);
            if (j==0)
            {
                x[i][j]=x[i][j]*4;
            }
            else if (j==1)
            {
                x[i][j]=x[i][j]*2;
            }
            sum[i]+=x[i][j];
        }
    }
    for(i=0; i<lim; i++)
    {
        real [i]= sum[i]+sum[i+1]+sum[i+2];
    }
    int max=real[0],min=real[0],best,bad;
    for(i=1;i<lim;i++)
    {
        if(max<real[i])
        {
            max=real[i];
            best=i;
        }
        if(min>real[i])
        {
            min=real[i];
            bad=i;
        }
    }
    printf("%d %d",best+1,min+1);


