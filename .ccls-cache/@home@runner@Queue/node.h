#ifndef node_h
#define  node_h

class NODE{
	 int data;
	NODE *nextPtr;
public:
	NODE(int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int x){
	data=x;
	nextPtr=NULL;

}
int NODE::get_value(){
	return data;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 cout<<"deleting " <<data<<endl;

}


#endif