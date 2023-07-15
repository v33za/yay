#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int);
  int dequeue();
  int get_size();
  NODE* get_head();
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;

  //while(size>0)
  for(i=0;i<n;i++)
    dequeue();
  
}
void Queue::enqueue(int x) {
  // 1.Create
  NodePtr new_node = new NODE(x);
  if(new_node)
  {
    if(size==0)
    {
    headPtr=new_node;                    // 2 Connect
    }
    else
    {
      tailPtr->set_next(new_node);
    }

  tailPtr=new_node; // 3 change tail
  ++size; // 4. increase size

    else 
  {
    cout<<"JENG LAEW"<<endl;
  }
  }
}
}

int Queue::dequeue() {
  int value;
  NodePtr t;
 if(headPtr){
  // 1. Save the node to be deleted
   t = headPtr;

   value=t->get_value();
 
   headPtr=headPtr->get_next();
    value=t->get_price();
    headPtr=headPtr->get_next(); 
   if(size==1) tailPtr=NULL;
   size--;
   delete t;
    // 1.5 take the value out to value
    // 2. move (head)
   
    //if(size==1) tailPtr=NULL;
    // 3. delete
  }
  return value;
}

int Queue::get_size(){
  return size;
}

NODE* Queue::get_head(){
  return headPtr;
}