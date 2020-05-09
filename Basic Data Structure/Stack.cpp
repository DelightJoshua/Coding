#include<iostream>
#include<conio.h>

using namespace std;

#define maxValue 10

class Stack{
  private:
    int A[maxValue];
    int top;
  public:
      Stack(){
         top = -1;
      }
      void push(int data){
          if(top >= maxValue - 1){
            cout<<"\nstack overflow";
          }
          else
            A[++top] = data;
      }
         int pop(){
                return A[top--];
      }
         int size(){
         return (top + 1);
      }
      bool isEmpty(){
       if(top == -1)
          return true;
       else
          return false;
    }
      void display(){
          cout<<endl;
         for(int i = 0;i<size();i++)
            cout<<A[i]<<" ";
      }

};
     int main(){
        Stack stack;
        int i;
        while(true){
            cout<<"\n1.push ";
            cout<<"\n2.pop ";
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
                      stack.push(x);
                      break;
              case 2: int numberPop;
                      numberPop = stack.pop();
                      cout<<"\npop number "<<numberPop;
                      break;
              case 3: int s;
                      s = stack.size();
                      cout<<"\nsize of the stack "<<s;
                      break;
              case 4: if(!stack.isEmpty())
                      cout<<"\nstack is not empty";
                      else
                        cout<<"\nstack is empty";
                        break;
              case 5: stack.display();
                      break;
              case 6:  exit(0);
                       break;
            }
        }
        return 0;
}
