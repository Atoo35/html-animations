#include<iostream>
using namespace std;

class emp{
private:
	int id;
	char name[50];
public:
	void accept();
	void display();
};

void emp::accept(){
	cout<<"ENter id:";
	cin>>id;
	cout<<"Ente name";
	cin>>name;
}

void emp::display(){
	cout<<"ID: "<<id;
	cout<<"\nNAME: "<<name;
}
int main(){
	emp e[3];
	for(int i=0;i<3;i++){
		e[i].accept();
		e[i].display();
	}
	return 0;
}