#include<iostream>
using namespace std;
class Employee{
	private:
		int id;
		string name;
	public:
		void setid(int x){
			this->id=x;
		}
		int getid(){
			return id;
		}
		
		void setname(string n){
			this->name = n;
		}
		string getname(){
			return name;
		}
};
int main(){
	Employee obj1;
	int id_num;
	string emp_name;
	cin>> id_num;
	cin>> emp_name;
	
	obj1.setid(id_num);
	obj1.setname(emp_name);
	
	cout<<"Employee Id: "<<obj1.getid()<<endl;
	cout<<"Employee Name: "<<obj1.getname()<<endl;
	
	return 0;
}

