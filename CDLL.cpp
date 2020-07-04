#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next; // Pointer to next node
    struct node *prev; // Pointer to previous node
};

void insertEmpty(node **head, int data){
	node *temp = new node();
	if((*head) == NULL){
		temp->data = data;
		temp->next = temp;
		temp->prev = temp;
		(*head) = temp;
		return;
	}
	node *last = (*head)->prev;
	temp->data = data;
	temp->next = (*head);
	(*head)->prev = temp;
	temp->prev = last;
	last->next = temp;
}

void insertAtBeg(node **head, int data){
	node *temp = new node();
	if((*head) == NULL){
		temp->data = data;
		temp->next = temp;
		temp->prev = temp;
		(*head) = temp;
		return;
	}
	node *last = (*head)->prev;
	temp->data = data;
	temp->next = (*head);
	temp->prev = last;
	last->next = temp;
	(*head)->prev = temp;
	(*head) = temp;
}
void insertAfter(struct node** start, int value1, 
                                      int value2) 
{ 
    struct node* new_node = new node(); 
    new_node->data = value1; // Inserting the data 
  
    // Find node having value2 and next node of it 
    struct node *temp = *start; 
    while (temp->data != value2) 
        temp = temp->next; 
    struct node *next = temp->next; 
  
    // insert new_node between temp and next. 
    temp->next = new_node; 
    new_node->prev = temp; 
    new_node->next = next; 
    next->prev = new_node; 
}
void print(node *head){
	node *temp = head;
	do{
		cout<<temp->data<<" ";
		temp = temp->next;
	}while(temp!=head);
// 	cout<<temp->data<<" ";
}

int main(){
	node *head = NULL;
	insertEmpty(&head, 5);
	insertEmpty(&head, 6);
	insertAtBeg(&head,10);
	print(head);
}