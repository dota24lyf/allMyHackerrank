#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int max=0;
    int xor;
    for(int j=l;j<=r;j++)
   {
    for(int i=l;i<=r;i++)
        {
        xor=i^j;
        if(xor>max)
            max=xor;
    }
    }
    return max;
}
int main() {
    int l, r;
    scanf("%d",&l);
    scanf("%d",&r);
    int re=maxXor(l,r);
    printf("%d",re);
}
