/* Sample program illustrating input/output */
#include<iostream>
using namespace std;
int main(void){

 

//Helpers for input and output

   int N, K;
   cin >> N >> K;
    int C[N];
   for(int i = 0; i < N; i++){
      cin >> C[i];
   }
   for(int i=0;i<N;i++)
       {
       for(int j=i+1;j<N;j++)
           {
           if(C[j]>C[i])
               {
               int temp;
               temp=C[i];
               C[i]=C[j];
               C[j]=temp;
           }
       }
   }
    int cn=0;
    int kn=0;
    int ind=0;
    int result;
    while(cn!=N)
        {
        
       int kc=0;
        while(kc!=K)
            {
            if(cn!=N)
                {
            result=result+((ind+1)*C[kn]);
                           cn++;
                           kn++;
                
        }
            else 
                break;
            kc++;
        }
           ind++;                
    }
   
   cout << result << "\n";
   
   return 0;
}
