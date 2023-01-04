#include <iostream>
using namespace std;

int main() {
	int x = 20 ;
	int* ptr = &x ;
    cout << ptr << endl ;
    cout << *ptr  << endl ;
    *ptr = 50 ;
    cout << x << endl ;
    cout << *ptr ;  
  return 0;
}
