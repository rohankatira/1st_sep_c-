//constructor is the same as the mehod or the fucntion it will autometicaly called when object is created...
//constructo is the same name as the class Name
#include<iostream>
using namespace std;
class Car{
	private:
		int length;
		int height;
	public : 
			
 	Car(int len,int hgt){
 		length = len;
 		height = hgt;
	 }

	Car(Car &obj){
		height = obj.height;
		length = obj.length;
	}
	 int calculate(){
		return height*length;
	}
		
	
};

int main(){
	
	Car c1(20,10);
	Car c2= c1;
	Car c3= c2;
	cout<<c1.calculate();
	cout<<c2.calculate();
	cout<<c3.calculate();	
}
