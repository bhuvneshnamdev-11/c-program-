#include<iostream>
using namespace std;
class Arithematic{
	int a,b;
	public:
		void display(){
			cout<<"Enter the value of a and b"<<endl;
			cin>>a>>b;
		}
		void operation(){
			char op;
			cout<<"Enter the operation (+ or-)"<<endl;
			cin>>op;
			if(op=='+'){
				cout<<"Addition of two numbers is "<<a+b<<endl;
			}
			else if(op=='-'){
				cout<<"subtraction of two numbers is "<<a-b<<endl;
			}
			else{
				cout<<"invalid operation"<<endl;
			}
		}
};
int main(){
	Arithematic a;
	a.display();
	a.operation();
	return 0;
}