#include <iostream>
#include <string>
using namespace std;

class student{
	public:
		int age;
		string name;
		
		void sleep(){
			cout<<"I Sleep"<<endl;
		}
		
		void study(){
			cout<<"I Study C++"<<endl;
		}
};

int main() {
	
	student sl;
	sl.age = 21;
	sl.name = "Abhi";
	
	cout<<"age"<<endl<<"name"<<endl;
	
	sl.sleep();
	sl.study();
	
}
