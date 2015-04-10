#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void cancel(int *arr,int k, int n)
    {
    int  c=0;
    for(int i=0;i<n;i++)
        {
        if(arr[i]<=0)
            c++;
    }
    if(c>=k)
        printf("NO\n");
    else
        printf("YES\n");
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    int n,k;
    int*arr;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
        {
        scanf("%d %d",&n,&k);

        arr = new int[n];

        for(int j=0;j<n;j++)
        {
             scanf("%d",&arr[j]);
        }

        cancel(arr,k,n);
    }
    return 0;
}

