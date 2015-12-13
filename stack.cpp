#include "stack.cpp"

#include <iostream>

Stack::Stack(int size){
  stack_max_size = size;
  count = 0;
  stack_top = NULL; 
}

Stack::~Stack(){
  Node* target_node = stack_top;
  while(target_node != NULL){
  	Node* next_node = target_node->next;
  	delete next_node;
  	target_node = next_node;
  }
  stack_top = NULL;
  delete stack_top;
}

void Stack::push(int element){
  if(full()){
   cout << "stack full" << endl;	
  } else{
     Node* temp = new Node(element);
      if(empty()){
       stack_top = temp;
       stack_size++;	
      }	else{
        temp->next = stack_top;
        stack_top = temp;
        stack_size++;
      }
  }
}
void Stack::pop(){
  if(empty()){
   cout << "stack empty" << endl;	
  }	else{
     cout << stack_top->data << endl;
     Node* top_target = stack_top;
     stack_top = stack_top->next;
     stack_size--;
     delete top_target;
  }
}
void Stack::peek(){
 if(empty()){
   cout << "stack empty" << endl;
 } else{
 	cout<< stack_top->data << endl;
 }
}

void Stack::print_stack(){
 if(empty(){
   cout << "stack empty" << endl;
 } else{
 	Node* temp = stack_top;
 	while(temp->next != NULL){
 		cout << temp->data << endl;
 		temp = temp->next;
 	}
 	delete temp;
 }
}

bool Stack::empty(){
 return stack_size == 0;
}

bool Stack::full(){
 return count == stack_max_size;
}
