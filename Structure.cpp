#include <iostream>
using namespace std;

struct book {
  string name;
  string authur;
  int pages;
  double price;
};

int main() {
  // Create a book structure and store it in myBook1;
  book myBook1;
  myBook1.name = "Book1";
  myBook1.authur = "Mohammed";
  myBook1.pages = 100;
  myBook1.price = 49.99;
  
  // Create another book structure and store it in myBook2;
  book myBook2;
  myBook2.name = "Book2";
  myBook2.authur = "Ahmed";
  myBook2.pages = 200;
  myBook2.price = 99.99;
  
  // Create array of book structure and store it in Books;
  book Books[10];
  Books[0]={"book3","Ali",150,100};
  Books[1]={"book4","Badr",50,25};


 
  // Print the structure members
  cout << "name: " << myBook1.name << " / " << "authur: " << myBook1.authur << " / " << "pages: " << myBook1.pages << " / " << "price: " << myBook1.price << "\n";
  cout << "name: " << myBook2.name << " / " << "authur: " << myBook2.authur << " / " << "pages: " << myBook2.pages << " / " << "price: " << myBook2.price << "\n";
  cout << "name: " << Books[0].name << " / " << "authur: " << Books[0].authur << " / " << "pages: " << Books[0].pages << " / " << "price: " << Books[0].price << "\n";
  cout << "name: " << Books[1].name << " / " << "authur: " << Books[1].authur << " / " << "pages: " << Books[1].pages << " / " << "price: " << Books[1].price << "\n";

  return 0;
}
