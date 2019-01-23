#include<stdio.h>
void m(int *s,int n){
  int i,j,k=1,t;
    for(i=0;i<n;i++)
      for(j=n-1,k=0;j>i;j--)
        if(s[j]>s[j-1]){
          t=s[j];
          s[j]=s[j-1];
	      s[j-1]=t;
	      k++;}
}
  int main(){
    int a[10]={3,2,4,1,7,6,5,8,0,9},i;
      m(a,10);
        for(i=0;i<10;i++)
           printf("%d  ",a[i]);
    return 0;
}

