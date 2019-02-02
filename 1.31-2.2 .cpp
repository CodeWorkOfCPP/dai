# include<iostream>
using namespace std;

class A{
	private:
		int c;
		
	public:
	    A(){
		    cout<<"zhi xing gou zao han shu!"<<endl;
	    }
     	~A(){
		    cout<<"zhi xing xi gou han shu!"<<endl;
	    }
};
int main(){
	A  a=A();
	A  b=A();
	return 0;
}
