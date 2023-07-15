#include <iostream>
using namespace std;
#include "queue.h"
void menu()
{
  cout<< "List of order number" << "\n";
  cout<< "1) mama == 100 baht" << "\n";
  cout<< "2) water == 20 baht" << "\n";
  cout<< "3) pad-thai == 50 baht" << "\n";
}


int main(int argc,char *argv[]) {
Queue q;
  int price,size;
  int qty = 0, num = 1
  int cash = 0, in=0, out=0;
  


  for(int x = 1;x<argc;x=x+2){
    int price = 0, paid = 0;

    if(argv[i][0]=='x')
    {
      while(1)
      {
        price=q.dequeue();
        cout<<"\n"<<endl;
        cout<< "No. of Customer: "<< num << "\n"; //ask the customer to pay
        cout<< "price :"<< price << "\n";
        if(price=0)
        {
          cout<<"Come again next time."<<endl;
          break;
        }
        else
        {
        while(1)
          {
          cout << "Cash Paid: ";
          cin >> paid;

          cash+=paid; //sum up money
          if(cash < price) 
          {
            cout<< "Payment left :" << price - cash << "\n";
          }
          if(cash >= price) break;
          }
        cout << "Thank you!" << "\n";
        if(cash>price)
        {
          cout<< "Change: " << cash - price << "\n";
        }
        cash=0;
        num++;
        out+=1;
        if(in==out) break;
         }
      
      }
    else
    {
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      countin+=1;

    }
    size = q.get_size();
  }//end of for loop
}
  cout<<"\n======================\nEnd of program"<<endl;
  cout<<"Queue left : " << size << "\n";

}
/*
int main(int argc,char *argv[]) {
Queue q;
  
  q.enqueue(5);  
  q.enqueue(1);
  q.dequeue();//5
  q.enqueue(7);
  q.dequeue();//1
  
  q.enqueue(6);
  q.dequeue();////7
  q.dequeue();//6
  
 q.enqueue(8);
   q.enqueue(9);
   q.enqueue(10);
  cout<<"End of program"<<endl;

  }
*/
