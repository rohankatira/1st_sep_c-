//class-: class is collection function and instance variable 
//class is the blue pritnt of the objects
//ex car,color,student
//class can be defined using the class keyword

//object - objct is belong to the specific class or instance of the class

#include <iostream>
#include<stdio.h>
using namespace std;
class Room{

	private:
		int length,breadth;
	public :
	int getValue(){
		cout<<"Enter The Length : ";
		cin>>this->length;
		cout<<"Enter The Breadth : ";
		cin>>this->breadth;
	}
	int calculateArea(){
		return this->length*this->breadth;
	}
};
int main(){
	int l,b;
	Room room1;
	room1.getValue();
	cout<<room1.calculateArea()<<endl;
	
	Room room2;
	room2.getValue();
	cout<<room2.calculateArea();
}

