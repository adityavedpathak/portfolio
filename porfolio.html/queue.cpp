#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node * next;
};

class queue
{
  public:
  node * front ;
  node * rear;
  queue()
  {
      front = NULL;
      rear = NULL;
  }
 
  node* getnode()
  {
      node * nn = new node;
      cout<<"Enter Data value: ";
      cin>>nn->data;
      nn->next = NULL;
      return nn;
  }
  void insertnode()
  {
      node * nn = getnode();
      node * temp;
      if(front == NULL)
      {
          front = rear = nn;
      }
      else
      {
        rear->next = nn;
        rear = nn;
      }
  }
 
  void deletenode()
  {
      if(front == NULL)
    {  
        cout<<"Queue Underflow!\n";
    }
    else
    {  
        node * temp = front;
        cout<<"Element deleted : "<<temp->data<<'\n';
        front =front->next;
        delete temp;
    }
     
  }
 
  void displaylist()
  {
      if(front == NULL)
      {
          cout<<"Queue is Empty!\n";
      }
      else
      {
          node * temp = front;
          while(temp!=NULL)
          {
            cout<<"[ "<<temp->data<<" ]";
            if(temp->next!=NULL)
            {
                cout<<" --> ";
            }
            temp = temp->next;
          }
         
          cout<<"\n \n";
         
      }
  }
};
  int main()
  {
      queue list;
      int choice;
     while(1)
      {
          cout<<"Enter 1 to insert node\nEnter 2 to delete node\nEnter 3 to display queue\nEnter 4 to exit\n-----------------------------\nPlease enter your choice: ";
          cin>>choice;
          switch(choice)
          {
              case 1:
                list.insertnode();
                break;
            case 2:
                list.deletenode();
                break;
            case 3:
                list.displaylist();
                break;
            case 4:
                cout<<"Successfully exited!!\n";
                return 0;
                break;
            default:
                cout<<"Please enter a valid choice!\n";
                break;
          }
         
           
           
         
      }
     
  }