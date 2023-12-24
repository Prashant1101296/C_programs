#include<iostream>
using namespace std;
 class student{
     public:
    string name;
    int rollno;
    float marks;
 };

 int main(){
    student S1;
    string n; 
    int r;
    float m;
    cout<<"Enter the name , rollno and marks \n";
    cin>>n>>r>>m;
    S1.name=n;
    S1.rollno=r;
    S1.marks=m;
    cout<<"Name ="<<S1.name<<"\nrollno="<<S1.rollno<<"\nMarks="<<S1.marks;

    // cout<<S1.name<<S1.rollno;
    // cout<<S1.marks;
    return 0;
 }