/*Program to implement stack using array*/
#include<stdio.h>
#include<stdlib.h>
#define n 5

int rear=-1;
int front=-1;
int queue[n];

int isfull()
{
	if(rear==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void enqueue()
{
	int entry;
	printf("Enter the data:");
	scanf("%d",&entry);
	if(isfull())
	{
		printf("\nQueue is full\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=entry;
		
	}
}
void dequeue()
{
	if(isempty())
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		front++;
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}

void display()
{
	int i,x,y;
	y=front;
	x=rear;
	
	for(i=y;i<=x;i++)
	{
		printf("\n %d",queue[i]);
	
	}
}
void main()
{
	int ch;
	while(1)
	{
	printf("\n1:Enqueue \n2:Dequeue \n3:Display \n4:Exit\n"); 
	printf("\nEnter the your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			enqueue();
			break;
		}
		case 2:
		{
			dequeue();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		
		case 4:
		{
			printf("Exiting\n");
			exit (0);
		}
		default:
		{
			printf("Wrong choice");
		}
	}
	}
}
			
