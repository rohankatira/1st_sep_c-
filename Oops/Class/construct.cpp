//constructor is the same as the mehod or the fucntion it will autometicaly called when object is created...
//constructo is the same name as the class Name
#include<iostream>
using namespace std;
class Car{
	private:
		int number;
	public : 
	Car(){
		this->number = 10;
	}
	int sum(){
		cout<<this->number + 78;
	}
	int mul(){
		cout<<this->number * 2;
	}
	
	
};

int main(){
	Car c1;
	c1.sum();
	c1.mul();
}
