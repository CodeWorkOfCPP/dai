#include<stdio.h>
#include<sqstack.h> 
#define MAX255
int A(int ope){    
	switch(ope)
	{
		case'(':return 0;
		case'+':
		case'-':return 1;
		case'*':
	    case'/':return 2;
	    default:return -1;
	}
} 
void B(sqstack *snum,int ope){    
	int n,n1,n2;
	sqstack_pop(snum,&n1);  
	sqstack_pop(snum,&n2);   
 
	switch(ope){
		case'+':n=n1+n2;
		        break;
	    case'-':n=n1-n2;
		        break;
		case'*':n=n1*n2;
		        break;  
	    case'/':n=n1/n2;
		        break;
	}
    sqstack_push(snum,n);
}
    
void C(sqstack *snum,sqstack *sope,int ope){    
	int old_ope;   
	
	if(sqstack_is_empty(sope)||ope=='('){
	    sqstack_push(sope,ope); 
	        return; 
    }
    sqstack_top(sope,&old_ope);
	
	 if(A(ope)>A(old_ope)){    
	    sqstac_push(sope,ope);    
        	return; 
	}
    whlie(A(ope)<=A(old_ope)){  
    	
		sqstack_pop(sope,&old_ope)
		compute(sum,old_ope);
		if(sqstack_is_emply(sope)){  
			break;
		}
		
		sqstack_top(sope,&old_ope);
	}
	sqstack_push(sope,ope); 
}
 
void D(sqstack *snum,sqstack *sope){
	int old_ope;  
	sqstack_top(sope,&old_ope); 
	while(old_ope!='('){  
		sqstack_pop(sope,&old_ope);  
		B(snum,ole_ope);   
		sqstack_top(sope,&ope);
	}
	sqstack_pop(sope,&old_ope);
}
int main()
{
	char str[MAX];  
	printf("要计算的表达式:\n");
	gets(str);   
	int i=0;  
	int value=0;   
	int flag=0;
	int old_ope;
	sqstack*snum,*sope;   
	snum=sqstack_create();   
	sope=sqstack_create();   
	while(str[i]!='\0'){
		
		if(str[i]>='0'&&str[i]<=9){
			value=value*10+str[i]-'0';
			flag=1;   
		}
	else{   
		if(flag){
			sqstack_push(snum,value);  
			flag=0;
			value=0;
		}
		if(str[i]==')'){   
			D(snum,sope);   
		}
		else{   
			C(snum,sope,str[i]);   
		}
	}
	i++;  
}
	if(flag){   
		sqstack_push(snum,value);   
	}   
	while(!sqstack_is_empty(sope)){
		sqstack_pop(sope,&old_ope);   
		B(snum,old_ope);    
	}
	sqstack_pop(snum,&value);    
	printf("%s=%d\n",str,value); 
	return 0;
}
