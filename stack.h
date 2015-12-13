#ifndef __STACK_H__
#define __STACK_H__

#include "node.h"

using namespace std;

class Stack{

  private:
  	int stack_max_size;
    int stack_size;
    Node* stack_top;

    bool empty();
    bool full();

  public:
    Stack(int);
    ~Stack();

    void push(int);
   	void pop();
   	void peek();
    void print_stack();
};

#endif
