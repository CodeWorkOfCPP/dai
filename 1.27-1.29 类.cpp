#include <iostream>
using namespace std;
 
class people {
	private;
	int age;
	string name;
	
	public:
		people(int age,string name){
			this->age=age;
			this->name=name;
		}
	string getName(){
		return this->name;
	}
	int getAge(){
		return this->age;
	}
};
int main (){
	people a(20,"ะกร๗");
	cout<<a.getAge()<<" "<<a.getName();
}
