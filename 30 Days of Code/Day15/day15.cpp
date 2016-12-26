#include <iostream>


using namespace std;	



class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    public:     
    	// Complete the insert function in your editor so that it creates a new Node (pass  as the Node constructor argument) and 
    	// inserts it at the tail of the linked list referenced by the  parameter. Once the new node is added, return the reference 
    	// to the  node.
    	Node* insert(Node *head,int data){
    		Node *newNode = new Node(data);
    		if(head == NULL){
    			head = newNode;
    		}
    		else{
    			Node *current = head;
	    		while(current->next != NULL){
	    			current = current->next;
	    		}
	    		current->next = newNode;
    		}
    		return head;

        }
        
        void display(Node *head){
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
        }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
}