#include<stdio.h>
void towers(int n,char s,char d,char a);
int main (void){
   int n;
   do{
     scanf("%d",&n);
   }while(n<1);
   towers(n,'A','C','B');
   return 0;
}
void towers(int n,
            char source,
            char dest,
            char auxiliary)
{   
    static int step=0;
    printf("Towers(%d,%c,%c,%c)\n",n,source,dest,auxiliary);
    if(n==1)
       printf("\t\t\t\tstep %3d:Move from %c to %c\n",
        ++step,source,dest);
    else{
       towers(n-1,source,auxiliary,dest);
       printf("\t\t\t\tstep %3d:Move from %c to %c\n",
        ++step,source,dest);
       towers(n-1,auxiliary,dest,source);
}
return;
}


