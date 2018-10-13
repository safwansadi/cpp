
#include <iostream>

using namespace std;

int Queue[4];
int front = -1;
int rear = -1;

bool IsEmpty() {
   if((front == -1) && (rear == -1)) // Write the necessary code
   {
        return true;
   }
   else { // If the queue is empty
    return false;
   } // if the queue is not empty
}
bool IsFull() {

  if((front == 1 && rear == 4) || ( front == rear + 1)) {
      return true;
  } else {
       cout<<"Is not full" << endl;
      return false;
  }
}
void EnQueue(int value) {
    if (IsFull()) {
        cout<<"Queue overflow";
        return;

    } else {
        if(IsEmpty() == true){
            front = 1;
            rear = 1;
        } else if (rear == 4) {
            rear = 1;
        } else{
            rear = rear + 1;
        }
         Queue[rear-1] = value;
    }

     cout<<"front" << front << endl;
     cout<<"rear" << rear << endl;
}

  int DeQueue() {
    int index = front - 1;
    int value = Queue[index];
    Queue[index] = 0;

    if (IsEmpty()) {
        cout<<"queue is already empty"<<endl;
        } else {
            if (front == rear) {
                 cout<<"queue has only one element"<<endl;
                front = -1;
                rear = -1;
            } else if (front == 4) {
              front = 1;
            }
            else {
                front = front + 1;
            }
        }
     return value;
    }

int FrontValue(){
     //Show the front value
      //Write the necessary code
     int value;
    return value;
        }
void ShowQueue()
{
    for(int i = 0; i < 4; i++) {
        cout<<Queue[i]<<endl;
    }
    // Show all the elements in the queue
     // Write the necessary code
}
int main()
{
    int n, a;
    while(true)
    {

        cout<<"Enter 1 for Enqueue, 2 for Dequeue, 3 for frontValue and 4 for showQueue operation: ";
        cin>>n;
        if(n == 1)
        {
            cout<<"Enter the value: ";
            cin>>a;
            EnQueue(a);
        }
        else if(n == 2)
        {
            cout<<"Dequeue value is:"<<DeQueue()<<endl;
        }
        else if( n == 3)
        {
             cout<<"Front value is: "<<FrontValue()<<endl;
        }
        else if(n == 4)
        {
            ShowQueue();
        }
        else break;

    }


}
