#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string word[30];

word[1]="one";
word[2]="two";
word[3]="three";
word[4]="four";
word[5]="five";
word[6]="six";
word[7]="seven";
word[8]="eight";
word[9]="nine";
word[10]="ten";
word[11]="eleven";
word[12]="twelve";
word[13]="thirteen";
word[14]="fourteen";
word[16]="sixteen";
word[17]="seventeen";
word[18]="eighteen";
word[19]="nineteen";
word[20]="twenty";
word[21]="twenty one";
word[22]="twenty two";
word[23]="twenty three";
word[24]="twenty four";
word[25]="twenty five";
word[26]="twenty six";
word[27]="twenty seven";
word[28]="twenty eight";
word[29]="twenty nine";
    int  h,m;
    cin>>h;
    cin>>m;
    int f=0;
    switch(m)
        {
        
        case 0:
            f=1;
        cout<<word[h]<<" o' clock"<<endl;
        break;
           
       case 15:
        f=1;
        cout<<"quarter past "<<word[h]<<endl;
        break;
        case 30:
        f=1;
        cout<<"half past "<<word[h]<<endl;
        break;
        case 45:
         f=1;
             cout<<"quarter to "<<word[h+1]<<endl;
                break;
    }
    if(f==0)
        {
    if(m<30)
        {
        if(m==1)
            cout<<"one minute past "<<word[h]<<endl;
        else
            cout<<word[m]<<" minutes past "<<word[h]<<endl;
    }
    if(m>30)
        {
        int l=60-m;
        cout<<word[l]<<" minutes to "<<word[h+1]<<endl;
    }
    }
    return 0;
}
