/*Program to implement singly linked list */
#include<stdio.h>
#include<stdlib.h>

void main()
{
	struct node
	{
		int data;
		struct node *next;
		
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	
	int ch, enter,count=0,search;
	while(1)
	{
		printf("\n 1:Insert \n 2:Display \n 3:Deletion \n 4:Search an element\n 5:Exit ");
		printf("\n Enter your choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
			{	printf("\n Enter Data:");
				scanf("%d",&enter);
				if(head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					head->data=enter;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node *)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=enter;
				}
				break;
			}
			
			case 2:
			{
				pos=head;
				printf("\n Elements are :");
				while(pos!=NULL)
				{
					printf("%d\t",pos->data);
					pos=pos->next;
				}
				break;
			}
			
			case 3:
			{	int x,i;
				struct node *temp=head;
				printf("Enter postion to be deleted :");
				scanf("%d",&x);
				if(x==0)
				{
					head=head->next;
					temp->next=NULL;
					free(temp);
				}
				else
				{
					for(i=0;i<x-1;i++)
					{
						temp=temp->next;
						
					}
					struct node *del=temp->next;
					temp->next=temp->next->next;
					del->next=NULL;
					free(del);
				}
				break;			
			}
			
			case 4:
			{
				printf("Enter the element to be searched :");
				scanf("%d",&search);
				pos=head;
				count=1;
				while(pos!=NULL)
				{
					if(pos->data==search)
					{
						printf("Element Present in Position %d",count-1);
						break;
					}
					else
					{
						pos=pos->next;
						count++;
					}
				}
				if(pos==NULL)
				{
					printf("Element not found ");
				}
				break;
			}
				
			case 5:
			{
				printf("\nExiting");
				exit(0);
			}
			
			default:
			{
				printf("Wrong Option!!!");
			}
		}
	}
}
