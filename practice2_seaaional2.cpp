#include <iostream>

using namespace std;
//structure
struct node{
	int item;
	node *next;
} *head=NULL , *tail=NULL;
//defining display header
void display();
//create node
void createnode(int item){
	node *temp=new node;
	temp->item=item;
	if(head==NULL){
		head=tail=temp;
		tail->next=NULL;
	}
	else{
		tail->next=temp;
		temp->next=NULL;
		tail=temp;
	}
}
//delete node
void deleteNode(node *t){
	node *temp=head->next;
	if(t->item==head->item){
		head=head->next;
		return;
	}
	while(temp->next!=tail){
		if(temp->item==t->item){
			temp->next=temp->next->next;
			return;
		}
		temp=temp->next;
	}
	
	if(t->item==tail->item){
		temp->next=NULL;
		tail=temp;
	}
}
//bubble sort
void bubble_sort(){
	node *temp=head;
	int i=0;
	while (temp!=NULL){
		i++;
		temp=temp->next;
	}
	temp=head;
	while (temp!=NULL){
		node *t2=head;
		for(int j=1; j<i;j++){
			if(t2->item > t2->next->item){
				int t=t2->item;
				t2->item=t2->next->item;
				t2->next->item=t;
			}
			t2=t2->next;
		}
		i--;
		temp=temp->next;
	}
}
//selection sort 
void selectionSort(){ 
    node* temp = head; 
    while (temp!=NULL) { 
        node* min = temp; 
        node* trav = temp->next; 

        while (trav!=NULL) { 
            if (min->item > trav->item){
                min = trav; 
  		    }
            trav = trav->next; 
        }
        
  		int x = temp->item; 
        temp->item = min->item; 
        min->item = x; 
        temp = temp->next; 
    } 
} 
//display method
void display(){
	node *temp=head;
	while (temp!=NULL){
		cout<<temp->item<<" ";
		temp=temp->next;
	}
}
//insertion sort
void insertionsort(){
	node *tem=head;
	node *temp=head->next;
	while (temp!=NULL){
		node *t=head;
		
		while ((temp->item > t->item) && t!=temp){
			t=t->next;
		}
		int x=t->item;
		t->item=temp->item;
		temp->item=x;
		if(temp->item<tem->item){
			continue;
		}
//		cout<<endl;
//		display();
		tem=tem->next;
		temp=temp->next;
	}
}

int main(){
	createnode(4);
	createnode(2);
	createnode(78);
	createnode(1);
	createnode(9);
	createnode(11);
	createnode(6);
//	4,2,78,1,9,11,6	
	display();
//	bubble_sort();
//	selectionSort();
	insertionsort();
	cout<<endl;
	display();
	return 0;
}
