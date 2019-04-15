
#include<stdio.h>
#include<stdlib.h>
void A(int *a,int N){
	int i,j,h,t;
	    for(i=1;i<N;i++){
		    t=a[i];
		    j=i-1;
		    while(j>=0&&t<a[j]){
		    	a[j+1]=a[j];  //wei zhi hou yi 
		    	j--;
			}
			a[j+1]=t;
			printf("di %d de jie guo ",i);
			for(h=0;h<N;h++){
				printf("%d ",a[h]);
			}
		printf("\n");
	}
} 
int main( ){
	int a[10]={5,7,1,8,0,9,6,2,4,3};
	int i;
	printf("\n");
	A(a,10);
	
}
