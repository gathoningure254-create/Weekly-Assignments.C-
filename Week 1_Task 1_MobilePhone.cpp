#include<iostream>
using namespace std;

int main()
{
	string name;
	string phone_model;
	float price;
     int quantity;
	
	cout <<" Enter Your Name:"<<endl;
	cin >>name;
	
	cout <<"Enter Phone Model:"<<endl;
	cin >>phone_model;
	
	cout <<" Enter Quantity Purchased:"<<endl;
	cin >>quantity;
	
	cout <<"Enter Price Per Phone:"<<endl;
	cin >>price;
	
	float totalsales= quantity*price;
	
	cout<<" SALES RECEIPT"<<endl;
	cout<<"=============================="<<endl;
	cout<<"Customer Name:"<<name<<endl;
	cout<<"Phone Model:"<<phone_model<<endl;
	cout<<"Quantity Purchased:"<<quantity<<endl;
	cout<<"Price per Phone:"<<price<<endl;
    cout<<"=============================="<<endl;
	cout<<"Total Sales:"<<totalsales<<endl;
    cout<<"=============================="<<endl;
	
	
	return 0;
}