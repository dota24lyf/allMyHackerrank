#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int cal(char*str)
    {
    long int tot=0;
    long int n=0;
    while(str[n]!='\0')
        n++;
    long int i;

    for(i=0;i<n/2;i++)
        {

            if(str[i]<str[n-i-1])
                {

                tot=tot+(str[n-i-1]-str[i]);

            }
            if(str[i]>str[n-i-1])
                {
                tot=tot+(str[i]-str[n-i-1]);
            }

    }


    return tot;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    char *str=(char*)malloc(10000);
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++)
        {
        scanf("%s",str);
        long int res=cal(str);
        printf("%lu\n",res);
    }
    return 0;
}

