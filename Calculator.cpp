#include<iostream>
#include<cmath>
using namespace std;
int main()
{
cout<<"-------Welcome User-------"<<endl;
double a,b;
cout<<"Enter the first number: "<<endl;
cin>>a;
cout<<"Enter the the second number: "<<endl;
cin>>b;
char c;
cout<<"Enter the arithmetic operator: "<<endl;
cin>>c;
double d;
 switch(c)
{
case '+':
d=a+b;
break;
case '-':
d=a-b;
break;
case '*':
d=a*b;
break;
case '/':
d=a/b;
break;
default:
cout<<"Invalid Operation";
break;
}
cout<<"The value is: "<<d<<endl;
cout<<"Welcome";
}
