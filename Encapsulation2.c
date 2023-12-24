#include<iostream>
using namespace std;
 class student{
     
    string name;
    int rollno;
    float marks;
    public : void setstudent(string n,int r, float m){
    name = n;
    rollno =r;
    marks = m;
    
    }
    public:void getStudent(){
        cout<<"Name is Atul"<< endl<<name<<"Marks is = "<<marks<<endl<<"RollNo is = "<<rollno;
    }
 };

 int main(){
    student S1;
    S1.setstudent("ram",1234,50.3);
    S1.getStudent();
    // string n; 
    // int r;
    // float m;
//   cout<<"Enter the name , rollno and marks \n";
    // cin>>n>>r>>m;
    // S1.name=n;
    // S1.rollno=r;
    // S1.marks=m;
    // cout<<"Name ="<<S1.name<<"\nrollno="<<S1.rollno<<"\nMarks="<<S1.marks;

    // cout<<S1.name<<S1.rollno;
    // cout<<S1.marks;
    return 0;
 }