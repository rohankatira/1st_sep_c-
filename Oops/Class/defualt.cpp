//constructor is the same as the mehod or the fucntion it will autometicaly called when object is created...
//constructo is the same name as the class Name
#include<iostream>
using namespace std;
class Car{
	private:
		int number;
	public : 
	Car(int number = 10){
		this->number = number;
	}
	int show(){
		cout<<this->number;
	}
	
	
};

int main(){
	Car c1;
	c1.show();
}
