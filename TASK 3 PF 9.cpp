#include<iostream>
using namespace std;
int main()
{
int ticketPrice;
int popcornPrice;
int num;
string names[10];
int totalPrice=0;

cout<<"How many users attend the event?(Maximum 10):"<<endl;
cin>>num;
if(num>10)
{
	cout<<"More than 10 students are not allowed!";
}
else{
cout<<"Enter students name one by one:"<<endl;
for(int i=0;i<num;i++)
{
	cout<<"Enter the name of student "<<(i+1)<< " : " <<endl;
	cin>>names[i];
	cout<<"Enter the price of ticket for Student "<<names[i]<<" : " <<endl;
	cin>>ticketPrice;
	cout<<"Enter the price of Popcorn for Student "<<names[i]<<" : "<<endl;
	cin>>popcornPrice;
	totalPrice+=(ticketPrice+popcornPrice);
}

cout<<"The names of students are:"<<endl;
 for (int i = 0; i < num; i++) 
 {
cout << "Student " << (i + 1) << ": " << names[i] << endl;
    }
    cout<<"The total cost for the event(ticketPrice+popcornPrice) is:"<<totalPrice<<endl;}
 return 0;
}
 