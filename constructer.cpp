// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Account{
    public:
    string userName;
    int AcNo;
    float Balance;
    
};

int main() {
    // Write C++ code here
    Account A1;
    cout<<"UserName =\n"<<A1.userName<<"Account Balance=\n"<<A1.Balance<<"Account Number=\n"<<A1.AcNo;

    return 0;
}