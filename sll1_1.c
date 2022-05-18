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
	
	int ch, enter,count=0;
	while(1)
	{
		printf("\n 1:Insert \n 2:Display \n 3:Count \n 4:Exit ");
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
			{
				count=0;
				pos=head;
				while(pos!=NULL)
				{
					count++;
					pos=pos->next;
				}
				printf("The number of elements are %d",count);
				break;
			}
			
			case 4:
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
				
				
				
				
				
				
				
				
				
			
			
			
			
			
			
			
			
			
