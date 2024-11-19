#include<iostream>
using namespace std;
int main()
{
string names[15];
int totalCost=0;
int n;
int entryFee;
int snackCost;
 cout<<"How many students will attend the game night?(MAXIMUM 15)"<<endl;
 cin>>n;
 if(n>15)
 {
 	cout<<"Error: Not more than 15 students allowed.";
 }
 else
 {
 cout<<"Enter the name of students one by one"<<endl;
 for(int i=0;i<n;i++)
{
 	cout<<"Enter the name of student"<< (i + 1) << ": ";
 	cin>>names[i];
 	cout << "Enter entryFee for " << names[i] << ": ";
 	cin>>entryFee;
 	cout<<"Enter snackCost for " << names[i]<<": ";
 	cin>>snackCost;
 	totalCost+=(entryFee+snackCost);
}
 cout<<"The names of students are:"<<endl;
 for (int i = 0; i < n; i++) 
 {
cout << "Student " << (i + 1) << ": " << names[i] << endl;
    }
    cout<<"The total cost for the event(entryFee+snackCost) is:"<<totalCost<<endl;}
 return 0;
}
 
