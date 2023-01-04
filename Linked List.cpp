#include <iostream>
using namespace std;

struct node {
  int data;
  node* next;
};
node* head = NULL;
void insertNode(int value);
void display();
void deleteNode(int value);
void insertAtBeg(int value);
void deleteAtBeg();
void deleteAtEnd();


int main() {
display();
cout<<"-----------------------------"<<endl;
insertNode(5);
insertNode(10);
insertNode(15);
display();
cout<<"-----------------------------"<<endl;
deleteNode(10);
display();
cout<<"-----------------------------"<<endl;
insertAtBeg(8);
display();
cout<<"-----------------------------"<<endl;
deleteAtBeg();
display();
cout<<"-----------------------------"<<endl;
deleteAtEnd();
display();
cout<<"-----------------------------"<<endl;


  return 0;
}

void insertNode(int value){
	node* new_node , *last ;
	new_node = new node ;
	new_node->data = value ;
	if(head == NULL){
		head = new_node ;
		new_node->next = NULL ;
	}else{
		last = head;
		while(last->next != NULL){
			last = last->next ;
		}
		last->next = new_node ;
		new_node->next = NULL;
	}
	
}

void display(){
 node* current_node;
 if(head == NULL){
		cout<<"Linked List is empty"<<endl ;
	}else{
		current_node = head;
		while(current_node != NULL){
			cout<<current_node->data <<endl ;
			current_node = current_node->next ;
		}
	}	
}

void deleteNode(int value){
	
 node* current, *previous;
 current = head ; previous=head;
 if(current->data == value){
		head= current->next ;
		delete(current);
		return;
	}
	while(current->data != value){
			previous = current;
			current = current->next ;
		}
		previous->next = current->next;
		delete(current);	
}

void insertAtBeg(int value){
	node* new_node = new node ;
	new_node->data = value;
	new_node->next = head;
	head = new_node;
}

void deleteAtBeg(){
  if(head == NULL){
		cout<<"Linked List is empty"<<endl ;
	}
	else{
			node* first_node = head;
			head = first_node->next ;
			delete(first_node);
		}
}

void deleteAtEnd(){
  if(head == NULL){
		cout<<"Linked List is empty"<<endl ;
	}
  else if(head->next == NULL){
			delete(head);
			head = NULL;
	}
  else{
		node* ptr =head ;
		while(ptr->next->next != NULL){
			ptr = ptr->next ;
		}
		delete(ptr->next);
		ptr->next = NULL;
	}
}



