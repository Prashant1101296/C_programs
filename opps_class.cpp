// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class student {
    public:
    string name ="prashant" ;
    int Rollno;
    float marks;
    
};
    


int main() {
    // Write C++ code here
    string name; 
    int rollno;
    float marks;
    cout<<"Enter the name of the person \n";
    cin>>name;
    cout<<"Enter the Rollno \n";
    cin>>rollno;
    cout<<"Enter the marks \n";
    cin>>marks;

    student S1;
    S1.name=name;
    S1.Rollno = rollno;
    S1.marks = marks;
    cout<<S1.name <<endl<<S1.Rollno<<endl<<S1.marks;
    return 0;
}