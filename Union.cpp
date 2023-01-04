
#include <iostream>
using namespace std;

union box {
  double height;
  double weight;
 
};

int main() {

  box myBox;
  myBox.height = 20;
  myBox.weight = 100;
 
  cout <<  myBox.height << "\n";
  cout <<  myBox.weight << "\n";
 
  return 0;
}
