/* Stack implementation using array*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int push(int[],int);
int pop(int[],int);
void display(int [],int);
int main()
{
	int stack[MAX];   //stack
	int top=-1;
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
				top=push(stack,top);
				break;
			case 2:
				top=pop(stack,top);
				break;
			case 3:
				display(stack,top);
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


int push(int s[],int top)
{
	if(top==MAX-1)
	{
		printf("\n\tStack overflow.");
	}
	else
	{
		printf("\n\tEnter the element for push : ");
		int n;
		scanf("%d",&n);
		top=top+1;
		s[top]=n;
	}
	return top;

}


int pop(int s[],int top)
{
	if(top==-1)
		printf("\n\tStack Underflow.");
	else	
	{
		int item=s[top];
		top=top-1;
	}
	return top;

}

void display(int s[],int top)
{
	int i;
	printf("\n\tElements are : ");
	for(i=0;i<=top;i++)
		printf("%d\t",s[i]);
	printf("\n");
}
