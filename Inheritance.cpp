// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class ElectronicDevice {
public:
  string brand = "Generic Electronics";

  void turnOn() {
    cout << "Turning on the electronic device.\n";
  }
};

class Laptop : public ElectronicDevice {
public:
  string model = "SuperBook";

  void openLid() {
    cout << "Opening the laptop lid.\n";
  }
};

int main() {
 
  Laptop myLaptop;

  
  myLaptop.turnOn();

  myLaptop.openLid();
  cout << myLaptop.brand + " " + myLaptop.model;

  return 0;
}