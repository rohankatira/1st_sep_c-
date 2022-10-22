//Private -: only Access in the same Class members
//Protected -: Access in the same class as well as inherited class
//Public -: Access All the classess
#include<iostream>
#include<string.h>
#include <cstring>
using namespace std;
class Student{
	private :
		int x = 10;
	protected :
		int y = 20;
	public :
		int z = 30;
	int info(){
		cout<<"Access in the Same Class"<<endl;
		cout<<this->x<<endl;
		cout<<this->y<<endl;
		cout<<this->z<<endl;
		
	}
};

class User : public   Student{
	public :
	int info(){
	
		cout<<"Access in the Extendend Class"<<endl;
	  // cout<<this->x<<endl;
		cout<<this->y<<endl;
		cout<<this->z<<endl;
}
};

int main(){
Student s1;
s1.info();
User u1;
u1.info();

	cout<<"Access in the outside Class"<<endl;
	   	//cout<<u1.x<<endl;
	    //cout<<u1.y<<endl;
		cout<<u1.z<<endl;
}



