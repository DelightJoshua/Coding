#include<iostream.h>
#include<conio.h>
 class List{
     private:
	 struct node{
	  int data;
	  node* next;
	 };
	 node* head;
	 node* curr;
	 node* temp;
     public:
	 List();
	 void addNode(int val);
	 void addNodePos(int pos,int val);
	 void delNodePos(int pos);
	 void addAtBeg(int val);
	 void delNode(int dval);
	 void displayList();
	 void delFirstNode();
	 void delLastNode();
	 void findMid();
	 void reverseLL();
 };
    List::List(){
	   head=NULL;
	   curr=NULL;
	   temp=NULL;
    }
    void List::addNode(int val){
     node* newNode=new node;
     newNode->data=val;
     newNode->next=NULL;
     if(head!=NULL){
	curr=head;
	while(curr->next!=NULL){
	     curr=curr->next;
	}
	    curr->next=newNode;
     }
	 else{
	      head=newNode;
	 }
    }
    void List::displayList(){

		curr=head;
		while(curr!=NULL){
		     cout<<curr->data<<"-->";
		     curr=curr->next;
		}
    }
    void List::delNode(int dval){
	       node* delptr=NULL;
	       temp=head;
	       curr=head;
	       while(curr!=NULL&&curr->data!=dval){
		     temp=curr;
		     curr=curr->next;
	       }
	       if(curr==NULL){
		  cout<<dval<<"Does not exist";
		  delete delptr;
	       }
	       else if(curr->data==dval){
		       delptr=curr;
		       curr=curr->next;
		       temp->next=curr;

		       if(delptr==head){
			  head=head->next;
			  temp=NULL;
		       }
		       delete delptr;
	       }
    }
    void List::addAtBeg(int val){
	       node* newNode=new node;
	       newNode->data=val;
	       newNode->next=NULL;
	       if(head==NULL){
		  head=newNode;
		  head->next=NULL;
	       }
	       else{
		 newNode->next=head;
		 head=newNode;
	       }
    }
    void List::delFirstNode(){
	       node* delptr=NULL;
	       if(head==NULL){
		  cout<<"List is empty";
	       }
	       else if(head->next==NULL)
		       delete head;
	       else{
		    delptr=head;
		    head=head->next;
		    delete delptr;
	       }
    }
    void List::delLastNode(){
	       node* delptr=NULL;
	       temp=head;
	       curr=head;
	       while(curr->next!=NULL){
		     temp=curr;
		     curr=curr->next;
	       }
	       delptr=curr;
	       temp->next=NULL;
	       if(delptr==head){
		  head=NULL;
	       }
	       delete delptr;
    }

    void List::addNodePos(int pos,int val){
	       node* newNode=new node;
	       newNode->data=val;
	       newNode->next=NULL;
	       curr=head;
	       temp=head;
	       int i=0;
	       while(i<pos){
		     temp=curr;
		     curr=curr->next;
		     i++;
	       }
	       if(temp==NULL){
		  cout<<"invalid position";
	       }
	       else if(pos==0){
		       head=newNode;
		       head->next=NULL;
		    }
		    else{
			 temp->next=newNode;
			 newNode->next=curr;
		    }
    }
    void List::delNodePos(int pos){
	       node* delptr=NULL;
	       curr=head;
	       temp=head;
	       int i=0;
	       while(i<pos){
		    temp=curr;
		    curr=curr->next;
		    i++;
	       }
	       if(temp==NULL){
		  cout<<"invalid position";
	       }
	       else if(pos==0){
		       delptr=curr;
		       head=curr->next;
		       delete delptr;
		    }
		    else{
			delptr=curr;
			temp->next=curr->next;
			delete delptr;
		    }
    }
    void List::findMid(){
	       curr=head;
	       temp=head;
	       while(curr!=NULL&&curr->next!=NULL){
		    temp=temp->next;
		    curr=curr->next->next;
	       }
	       if(head==NULL){
		  cout<<"\nLinked List is empty" ;
	       }
	       else
		  cout<<"\nMid Value="<<temp->data;
    }
    void List::reverseLL(){
	       temp=head;
	       curr=head;
	       if(head==NULL){
		  cout<<"\nLinked List is empty";
	       }
	       else if(head->next==NULL){}
	       else{
		   node* p=NULL;
		   node* n=NULL;
		   while(curr!=NULL){
			 n=curr->next;
			 curr->next=p;
			 p=curr;
			 curr=n;
		   }
		   head=p;
	       }
    }
    void main(){
       clrscr();
       List L;
       L.addNode(5);
       L.addNode(7);
       L.addNode(10);
       L.addNode(15);
       L.addNode(17);
      // L.addAtBeg(3);
      // L.addNodePos(0,12);
      // L.delNode(10);
      // L.delFirstNode();
      // L.delLastNode();
      // L.delNodePos(0);
       L.reverseLL();
       L.displayList();
      // L.findMid();
       getch();
      }

