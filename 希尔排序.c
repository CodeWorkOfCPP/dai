#include<stdio.h>
#include<stdlib.h>
void B(int a[],int N){
	int i,j,h;
	int r,t;  
	int x=0;
	
	for(r=N/2;r>=1;r/=2){  
		for(i=r;i<N;i++){  //mei zu nei pai xu
			t=a[i];
			j=i-r;
			while(j>=0&&t<a[j]){  //cha ru pai xu 
				a[j+r]=a[j];
				j-=r;
			}
			a[j+r]=t;
		}
		//48-53 shu chu
		x++;
		printf("di %d de jie guo ",x);
		for(h=0;h<N;h++){
			printf("%d  ",a[h]);
		}
		printf("\n");
	}	
}
int main (void){
	int a[10]={5,7,1,8,0,9,6,2,4,3};
	int i;
	printf("\n");
	B(a,10);
	return 0;
}
