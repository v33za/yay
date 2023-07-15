#include <iomanip>
#include <iostream>

#ifndef node_h
#define node_h

class NODE 
{
  int order, qty;
  NODE *next;

public:
  NODE(int, int);
  ~NODE();
  int get_price();
  void set_next(NODE *);
  NODE *get_next();
  int get_order();
};
typedef NODE *NodePtr;

NODE::NODE(int i, int j)
{
  order=i;
  qty=j;

   cout<<"Order : " << qty << " " << ((order==1)? "mama" : (order==2)? "water" :(order==3)? "Pad-thai" ) << endl; 
    nextPtr=NULL;
  
}

int NODE::get_price()
{
  int total;
  switch(order)
    {
      case 1: total=100*qty; break;
      case 2: total=20*qty; break;
      case 3: total=50*qty; break;
      default: break;
    }
  return total;
}

NODE NODE::get_next()
{
    return nextPtr;

}

void NODE::set_next(NODE *t)
{
     nextPtr=t;

}

NODE::~NODE(){}



#endif
#include "node.h"