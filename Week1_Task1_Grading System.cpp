#include<iostream>
using namespace std;

int main()
{
	string name;
	int marks;
	
	if(marks>=70&&marks<=100){
		cout<<"Grade A"<<endl;
	}
	else if(marks>=60&&marks<=69){
		cout<<"Grade B"<<endl;
	}
	else if(marks>=50&&marks<=59){
		cout<<"Grade C"<<endl;
	}
	else if(marks>=40&&marks<=49){
		cout<<"Grade D"<<endl;
	}
	else{
		cout<<"Grade E"<<endl;
	}
	
	cout<<"Student's Marks"<<endl;
		cout<<"=============================="<<endl;
		cout<<"Student Marks:"<<marks<<endl;
	cout<<"=============================="<<endl;
	return 0;
}