#include <iostream>  
#include <memory>                          
using namespace std;                              
int main( ){   
    int t,a[10];                                  
    int i,j;
    memset(a,0,sizeof(a));
      for(i=0;i<10;i++){
         cin>>a[i];}
      for(j=1;j<=8;j++){
          for(i=1;i<=9-j;i++){
             if(a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;}
          }
       }
       for(i=0;i<10;i++){
         cout<<a[i]<<emdl;}
                         
        return 0;                                        
}    
