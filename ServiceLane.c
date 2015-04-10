#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cal(int l,int r,int width[])
    {
    int min=width[l];
    for(int i=l;i<=r;i++)
        {
        if(width[i]<min)
            {
            min=width[i];
        }
    }
    return min;
   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    int width[n];
    int l,r;
    
    for(int i=0;i<n;i++)
        {
        scanf("%d",&width[i]);
        
    }
    for(int j=0;j<t;j++)
        {
      scanf("%d",&l);
      scanf("%d",&r);
    int res=cal(l,r,width);
    printf("%d\n",res);
    }
    return 0;
}
