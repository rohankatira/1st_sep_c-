//class-: class is collection function and instance variable 
//class is the blue pritnt of the objects
//ex car,color,student
//class can be defined using the class keyword

//object - objct is belong to the specific class or instance of the class

#include <iostream>
#include<stdio.h>
using namespace std;
class Car{
	public :
		
	int info(){
		cout<<"This is the Info function of car.."<<endl;
	}
	int show(){
		cout<<"This is the show function of car.."<<endl;
	}
};
int main(){
	
	cout<<"VAGORN INFO"<<endl;
	 Car vagonr;
	 vagonr.info();
	 vagonr.show();
	 
	 cout<<"BMW INFO"<<endl;
	 Car bmw;
	 bmw.info();
	 bmw.show();
	 
	
}

