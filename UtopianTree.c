#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,n;
        scanf("%d",&t);
    for(int i=0;i<t;i++)
        {
        int h=1;
        scanf("%d",&n);
        for(int j=0;j<=n;j++)
            {
            if(j%2==0&& j!=0)
                h=h+1;
            if(j%2!=0)
                h=h*2;
        }
        printf("%d\n",h);
    }
    return 0;
}
