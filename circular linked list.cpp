//Circular single linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
} NODE;
NODE *head=NULL;
NODE *create();
void insertAtBegin();
void insertAtEnd();
void insertAtAnywhere();
void deleteAtBegin();
void deleteAtEnd();
void deleteAtAnywhere();
void traverse();
void reverse(NODE*);
int size=0;
NODE *create()
{
	NODE *newNode=(NODE*)malloc(sizeof(NODE));
	printf("\nEnter Data:");
	scanf("%d",&newNode->data);
	size++;
	return newNode;
}
void traverse()
{
	if(head==NULL)
	printf("List is Empty!!!\n");
	else
	{
		NODE *temp=head;
		do
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}while(temp!=head);
		printf("\n");
	}
}
void insertAtBegin()
{
	NODE *newNode=create(),*t;
	if(head==NULL)
	{
		head=newNode;
		head->next=head;
	}
	else
	{
		t=head;
		while(t->next!=head)
		{
			t=t->next;
		}
		newNode->next=head;
		t->next=newNode;
		head=newNode;
	}
}
void insertAtEnd()
{
	NODE *newNode=create(),*t;
	if(head==NULL)
	{
		head=newNode;
		head->next=head;
	}
	else
	{
		newNode->next=head;
		t=head;
		while(t->next!=head)
		t=t->next;
		t->next=newNode;
	}
}
void insertAtAnywhere()
{
	int p,loc=0;
	printf("Enter position to insert:");
	scanf("%d",&p);
	if(head==NULL)
	printf("No Such postion\n");
	else if(p==1)
	insertAtBegin();
	else if(p==size+1)
	insertAtEnd();
	else if(p>size)
	printf("No Such postion\n");
	else
	{
		NODE *newNode=create(),*t,*pr;
		t=pr=head;
		while(t->next!=head)
		{
			loc++;
			if(loc==p)
			break;
			t=t->next;
			pr=t;
		}
		newNode->next=t;
		pr->next=newNode;
	}
}
void deleteAtBegin()
{
	if(head==NULL)
	printf("List is Empty!!!\n");
	else if(size==1)
	{
		NODE *temp=head;
		printf("%d is removed\n",temp->data);
		size--;
		head=NULL;
		free(temp);
	}
	else
	{
		NODE *t,*temp;
		t=temp=head;
		while(t->next!=head)
		t=t->next;
		t->next=head->next;
		head=head->next;
		printf("%d is removed\n",temp->data);
		size--;
		free(temp);
	}
}
void deleteAtEnd()
{
	NODE *temp,*t;
	temp=t=head;
	if(head==NULL)
	printf("List is empty!!!\n");
	else if(size==1)
	{
		printf("%d is removed\n",temp->data);
		size--;
		head=NULL;
		free(temp);
	}
	else
	{
		while(temp->next!=head)
		{
			t=temp;
			temp=temp->next;	
		}
		t->next=head;
		printf("%d is removed\n",temp->data);
		size--;
		free(temp);
	}
}
void deleteAtAnywhere()
{
	NODE *temp,*t;
	temp=t=head;
	if(head==NULL)
	printf("List is empty!!!\n");
	else
	{
		int p,loc=0;
		printf("Enter position to delete:");
		scanf("%d",&p);
		if(p==1)
		deleteAtBegin();
		else if(p==size)
		deleteAtEnd();
		else if(p>size)
		printf("No Such position\n");
		else
		{
			while(temp->next!=head)
			{
				loc++;
				if(loc==p)
				break;
				t=temp;
				temp=temp->next;
			}
			t->next=temp->next;
			printf("%d is removed\n",temp->data);
			size--;
			free(temp);
		}
	}
}

int main()
{
	int ch;
	do
	{
		printf("1.Insert at beginning.\n");
		printf("2.Insert At Ending.\n");
		printf("3.Insert At Any where.\n");
		printf("4.Deletion at bigenning.\n");
		printf("5.Deletion at ending.\n");
		printf("6.Deletion At Anywhere.\n");
		printf("7.Traverse.\n");
		printf("8.Reverse.\n");
		printf("9.Count.\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		//printf("number of elements are %d\n",size);
		switch(ch)
		{
			case 1:insertAtBegin();
				   break;
			case 2:insertAtEnd();
				   break;
			case 3:insertAtAnywhere();
				   break;
			case 4:deleteAtBegin();
				   break;
			case 5:deleteAtEnd();
				   break;
			case 6:deleteAtAnywhere();
				   break;
			case 7:traverse();
				   break;
			/*case 8:reverse(head);
				   printf("\n");
				   break;*/
			case 9:printf("Number of elements are %d\n",size);
				   break;
			default:exit(0);
		}
	}while(1);
	return 0;
}
