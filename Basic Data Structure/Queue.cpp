#include<iostream>

using namespace std;

#define maxValue 10

class Queue{
  private:
    int rear,front;
    int A[maxValue];
  public:
    Queue(){
       rear = -1;
       front = 0;
    }
    void enqueue(int data){
       if(rear >= maxValue - 1){
          cout<<"\nQueue overflow";
       }
       else
          A[++rear] = data;
    }
    int dequeue(){
        int x = A[front];
        for(int i=0;i<rear;i++){
           A[i] = A[i+1];
       }
       rear--;
       return x;
    }
    int size(){
       return (rear + 1);
    }
    bool isEmpty(){
       if(rear == -1)
          return true;
       else
          return false;
    }
    void display(){
        cout<<endl;
       for(int i=0;i<size();i++){
            cout<<A[i]<<" ";
       }
    }
};

int main(){
        Queue queue;
        int i;
        while(true){
            cout<<"\n1.enqueue ";
            cout<<"\n2.dequeue ";
            cout<<"\n3.size ";
            cout<<"\n4.isEmpty ";
            cout<<"\n5.display ";
            cout<<"\n6.Exit";
            cout<<"\nEnter Your Choice  ";
            cin>>i;
            switch(i){
              case 1: int x;
                      cout<<"\nEnter Value ";
                      cin>>x;
                      queue.enqueue(x);
                      break;
              case 2: int numberDequeque;
                      if(!queue.isEmpty()){
                         numberDequeque = queue.dequeue();
                         cout<<"\nDequeue number "<<numberDequeque;
                      }
                      else
                         cout<<"\nQueue underflow";
                      break;
              case 3: int s;
                      s = queue.size();
                      cout<<"\nsize of the queue "<<s;
                      break;
              case 4: if(!queue.isEmpty())
                      cout<<"\nqueue is not empty";
                      else
                        cout<<"\nqueue is empty";
                        break;
              case 5: queue.display();
                      break;
              case 6:  exit(0);
                       break;
            }
        }
        return 0;
}
