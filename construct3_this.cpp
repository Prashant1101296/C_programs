// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Account{
    public:
    string userName;
    int AcNo;
    float Balance;
    Account(string n, int ac,float b){
    this->   userName =n;
    this->    AcNo =ac;
    this->    Balance = b;
    }
    
};

int main() {
    // Write C++ code here
    Account A1("superman",1234,8794.3);
    cout<<"UserName =\n"<<A1.userName<<"Account Balance=\n"<<A1.Balance<<"Account Number=\n"<<A1.AcNo;

    return 0;
}
