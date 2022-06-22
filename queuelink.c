/*Program to implement queue using linked list*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL,*del,*temp;
	int ch,entry,c=0,s,x=0,d,i,rear;
	while(1)
	{
		printf("\n1:Enqeue \n2:Deqeue \n3:Display \n4:Front element \n5:Exit"); 
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			      {
			      
			
			     	printf("\nEnter data:");
			     	scanf("%d",&entry);
			     	if(head==NULL)
				{
					head=(struct node *) malloc(sizeof(struct node));
					head->data=entry;
					head->next=NULL;
					pos=head;
					tail=head;
					rear=-1;
				}
				else
				{
					tail->next=(struct node *) malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
					tail->next=NULL;
					rear++;
				}
			     	break;
			      }
		case 2:
			{	
					if(head==NULL)
					{
						printf("\nUnderflow");
					}
					else
					{
						struct node *del=head;
						head=head->next;
						del->next=NULL;
						free(del);
						rear--;
					}
					break;
			}	
		
		case 3:
			      {
			        pos=head;
			        if(head==NULL)
			        {
			        	printf("Queue is empty");
			     	}
			     	else
			     	{
			        printf("\nElements are:");
			        while(pos!=NULL)
			        {
			        	printf("\t%d",pos->data);
			        	pos=pos->next;
			        }
			        }
			        break;
			       }
			       
		case 4:
			{	
				printf("The front element is: %d",head->data);
			}
			break;
			       
		case 5:
			 {
			       	 printf("\nExiting");
			       	 exit(0);
			}	
		default:
			{
				printf("Wrong choice");
			}	
			}
		
	}
}
