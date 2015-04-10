#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        int min, max;
        scanf("%d %d",&min,&max);
        long int sum = 0;
        
        for(int j=min;j<=max;j++)
        {
            sum = sum + pow(10,j);
        }
        
        if(sum>1000000)
        {
            cout<<"YES"<<endl;
        }
        
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
