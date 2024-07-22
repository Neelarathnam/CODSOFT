#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
  srand( time(0) ^ clock());
int limit;
cout<<"Enter the upper limit for the random number: "<<endl;
cin>>limit;
int number=rand() % limit;
int guessnumber;
do
{
 cout<<"Enter your guess number: "<<endl;
 cin>>guessnumber;
 if(number > guessnumber)
 {
 cout<<"Your guess number is very small as compared to the random number."<<endl;
 }
 else if(number < guessnumber)
 {
 cout<<"Your guess number is large as comapared to the random number."<<endl;
 }
 else
 {
 cout<<"Wow! Your guess number is correct."<<endl;
 }
}while(number != guessnumber);
return 0;
}
