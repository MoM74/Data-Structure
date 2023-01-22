#include <iostream>
using namespace std;

struct node {
  int data;
  node* next;
};
node* top = NULL;
void display();
void push(int value);
int pop();
int peek();


int main() {
	push (5);
	push(10);
	push(15);
	display() ;
	cout<<"-----------------------------"<<endl;
	pop();
	display();
	cout<<"-----------------------------"<<endl;
	cout<< "peek =" << peek()<<endl;

  return 0;
}

void display(){
 node* current_node;
 if(top == NULL){
		cout<<"Stack is empty"<<endl ;
	}else{
		current_node = top;
		while(current_node != NULL){
			cout<<current_node->data <<endl ;
			current_node = current_node->next ;
		}
	}	
}

void push(int value){
	node* new_node = new node ;
	new_node->data = value;
	new_node->next = top;
	top = new_node;
}

int pop(){
	int value;
  if(top == NULL){
		cout<<"Stack is empty"<<endl ;
		return -1;
	}
	else{
			node* first_node = top;
			top = first_node->next ;
			value = first_node->data ;
			delete(first_node);
			return value;
		}
}

int peek(){
  if(top == NULL){
		cout<<"Stack is empty"<<endl ;
		return -1;
	}
	else{
			return top->data;
		}
}




