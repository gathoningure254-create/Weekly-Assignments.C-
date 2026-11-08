#include<iostream>
using namespace std;

int main()
{
	string name;
	float theory,practical;
	
	cout<< "Enter Your Name:"<<endl;
	cin>>name;
	
	cout<<"Enter Theory Marks:"<<endl;
	cin>>theory;
	
	cout<<"Enter Practical Marks:"<<endl;
	cin>>practical;
	
     float average=(practical+theory)/2;
	
    cout<<"Test Results"<<endl;
    cout<<"=============================="<<endl; 
    cout<<"Practical Marks:"<<practical<<endl;
    cout<<"Theory Marks:"<<theory<<endl;
    cout<<"Average Marks:"<<average<<endl;
 	cout<<"=============================="<<endl;
    
	return 0;
}