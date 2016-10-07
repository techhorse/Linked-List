/* Queue implementation using array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];   //queue
int rear=front=-1;
int insert();
int delete();
void display();
int main()
{
	
	int choice;
	char ch;
	do
	{
		printf("\n\tMENU\n\n\t1. Insert\n\t2. Delete\n\t3. Display\n\t4. Exit");
		printf("\n\tEnter ur choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
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


int insert()
{
	if(rear==MAX-1)
	{
		printf("\n\tQueue overflow.");
	}
	else
	{
		printf("\n\tEnter the element for insertion : ");
		int n;
		scanf("%d",&n);
		if(front==-1 && rear==-1)
			front=rear=0;
		else
			rear=rear+1;
		queue[rear]=n;
	}
	

}


int delete()
{
	if(front==-1)
		printf("\n\tQueue Underflow.");
	else	
	{
		int item=queue[front];
		printf("\nDeleted element is : %d\n",item);
		if(front==rear)
			front=rear=-1;
		else
			front=front+1;
		
	}
	

}

void display()
{
	int i;
	printf("\n\tElements are : ");
	for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
	printf("\n");
}
