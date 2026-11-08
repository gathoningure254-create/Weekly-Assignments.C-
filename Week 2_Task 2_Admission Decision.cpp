#include<iostream>

using namespace std;

int main()
{
	string name;
	int age;
	double score;
	
	cout<<"Enter Student Name:"<<endl;
	cin>>name;
	
	cout<<"Enter Your Age:"<<endl;
	cin>>age;
	
	cout<<"Enter Exam Score:"<<endl;
	cin>>score;
	
	if(age>=18){
		if(score>=50){
			cout<<"Admitted"<<endl;
		}
		else
		{
			cout<<"Not Admitted"<<endl;
			
		}
	}
	else{
		cout<<"Underage"<<endl;
	}
	
	
}