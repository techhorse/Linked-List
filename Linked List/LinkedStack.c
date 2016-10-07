/* Stack implementation using linked list
   Here top is a global pointer. */
#include<stdio.h>
#include<stdlib.h>


struct node
{
	int info;
	struct node *next;
};

struct node *top=NULL;

void push();
void pop();
void display();
int main()
{
	
	int choice;
	char ch;
	do
	{
		printf("\n\tMENU\n\n\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Exit");
		printf("\n\tEnter ur choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid choice.\n");
		}
		printf("\n--------------------------------------------------\n");
		printf("\n\tDo u want to continue (press.. y/n) : ");
		scanf(" %c",&ch);

	}while(ch=='Y'||ch=='y');
}


void push()
{
	struct node *new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	{
		printf("Insufficient memory.\n");
		return;
	}
	printf("\n\tEnter the element for push : ");
	scanf("%d",&new->info);
	new->next=NULL;
	new->next=top;
	top=new;
}


void pop()
{
	if(top==NULL)
	{
		printf("\n\tStack Underflow.");
		return;
	}
	else	
	{
		struct node *p=top;
		top=top->next;
		free(p);
	}
	

}

void display()
{
	int i;
	printf("\n\tElements are : ");
	struct node *p=top;
	while(p!=NULL)
	{
		printf("%d\t",p->info);
		p=p->next;
	}
	printf("\n");
}
