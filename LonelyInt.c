#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
int lonelyinteger(int asize, int *a) {
    int f,result=0;
    int i,j;
    for(i=0;i<asize;i++)
    {
        f=0;
        for(j=0;j<asize;j++)
        {
            if(i!=j)
            {
               if(a[i]==a[j])
                {
                f=1;

                }
            }
        }

        if(f!=1)
            {
                result=a[i];
            }
    }


    return result;
}
int main() {
    int res,i;
    int asize;
    int *a;
    scanf("%d",&asize);
    a=(int*)malloc(asize);
    for(i=0;i<asize;i++)
        {
        scanf("%d",&a[i]);

    }
    res=lonelyinteger(asize,a);
    printf("%d",res);
    return 0;
}
