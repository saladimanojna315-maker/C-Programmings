#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE*create(),*prev,*next;
};
typedef struct NODE NODE;
NODE *head = NULL, *tail = NULL;
int size = 0;
NODE *create();
void insertAtBegin();
void insertAtEnd();
void insertAt();
void deleteAtBegin();
void deleteAtEnd();
void deleteAt();
void traverse();
NODE *create()
{
	NODE *newnode = (NODE*)malloc(sizeof (NODE));
	printf("enter node:");
	scanf("%d",&newnode -> data);
	newnode->prev = newnode->next = NULL;
	size++;
	return newnode;
}
void insertAtBegin()
{
	NODE *newnode = create();
	if(head == NULL)
    head = tail = newnode;
    else{
    	newnode->next = head;
    	head -> prev = newnode;
    	head = newnode;
	}
}
void insertAtEnd()
{
	NODE *newnode = create();
	if(head == NULL)
	head = tail = newnode;
	else{
	    newnode -> prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
}
void insertAt()
{
	int pos;
	printf("enter position to insert:");
	scanf("%d",&pos);
	if(pos == size+1)
	insertAtEnd();
	else if(pos == 1)
	insertAtBegin();
	else if(pos <= size )
	{
		NODE *newnode = create(),*t;
		int p = 1;
		t = head;
		while(t -> next != NULL)
		{
			p++;
			if(p == pos)
			{
				break;
			}
			t = t -> next;
	    }
	    newnode -> prev = t;
	    newnode -> next = t -> next;
		t->next->prev = newnode;
		t->next = newnode;
	}
	else
	printf("no such position");
}
void deleteAtBegin()
{
	if(head == NULL)
	printf("list is empty");
	else if(head->next == NULL)
	{
		NODE *temp = head;
		head = tail = temp;
		size--;
		free(temp);
	}
	else
	{
		NODE *temp ;
		head = head -> next;
		head -> prev = NULL;
		size--;
		free(temp);
	}
}
void deleteAtEnd()
{
	if(head == NULL)
	printf("list is empty\n");
    else if(head = tail)
   {
	head = tail = NULL;
   }
    else
    {
	NODE *temp = tail;  
	tail = tail -> prev;
	tail -> next = NULL;
	free(temp);
    }
}
void deleteAt()
{
	int pos;
	printf("enter position:");
	scanf("%d",&pos);
	if(pos == 1)
	deleteAtBegin();
	else if(pos == size)
	deleteAtEnd();
	else if(pos < size)
	{
		int p =1;
		NODE*temp,*t=head;
		while(t->next != NULL)
		{
			p++;
			if(p == pos)
			break;
			t = t->next;
		}
		temp = t->next;
		t->next = temp -> next;
		temp -> next -> prev = t;
		size--;
		free(temp);
	}
	else
	printf("deletion not possible");
}
void traverse()
{
	struct NODE *temp = head;
	if(head == NULL)
	{
	printf("list is empty\n");
	return;
    }
	while(temp != NULL)
	{
	    printf("%d <->",temp->data);
	    temp = temp->next;
	}
		printf("NULL\n");
}
	int main()
	{
		char ch;
		do{
			scanf(" %c ",&ch);
			switch(ch){			printf("1.insertAtBegin\n2.insertAtEnd\n3.insertAt\n4.deleteAtBegin\n5.deleteAtEnd\n6.deleteAt\n7.traverse\nenter your choice:\n");

				case '1' :insertAtBegin();
				          break;
				case '2' :insertAtEnd();
				          break;
				case '3' :insertAt();
				          break;
				case '4' :deleteAtBegin();
				          break;
				case '5' :deleteAtEnd();
				          break;
				case '6' :deleteAt();
				          break;
				case '7' :traverse();
				          break;
				case '8' :printf("list size = %d\n",size);
				          break;
				default : exit(0);
			}
		}while(1);
		return 0;
}
