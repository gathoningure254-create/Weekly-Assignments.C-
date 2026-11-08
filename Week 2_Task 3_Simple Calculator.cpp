#include<iostream>

using namespace std;
int main()
{
   double num1,num2;
   char op;
   
   cout<<"Enter First Number:"<<endl;
   cin>>num1;
   
   cout<<"Enter an operator"<<endl;
   cin>>op;
   
   cout<<"Enter Second Number:"<<endl;
   cin>>num2;
   
   switch(op){
	   case '+':
	   	cout<<"Result ="<<num1+num2<<endl;
		   break;
	   
	   case '-':
	   	cout<<"Result="<<num1 -num2<<endl;
		   break; 
	   
	   case '*':
	   	cout<<"Result="<<num1*num2<<endl;
	   	break;
	   
	   case '/':
	   	if(num2==0){
			   cout<<"ERROR"<<endl;
		   }
		   else{
			   cout<<"Result="<<num1/num2;
		   }
		   break;
	   default:
	   	cout<<"Invalid Operator"<<endl;
	   	
   }
   
	return 0;
}