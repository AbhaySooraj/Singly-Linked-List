/*Program to implement singly linked list */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

void main()
{	struct timeval t0;
   	struct timeval t1;
   	float elapsed;
	struct node
	{
		int data;
		struct node *next;
		
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	
	int ch, enter,count=0,search,number=1000,i;
	while(1)
	{
		printf("\n 1:Insert \n 2:Display \n 3:Count \n 4:Search an element\n 5:Exit ");
		printf("\n Enter your choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
			{	for(i=0;i<number;i++)
				{
					if(head==NULL)
					{
						head=(struct node *)malloc(sizeof(struct node));
						head->data=rand()%100;
						pos=head;
						tail=head;
					}
				
					else
					{
						tail->next=(struct node *)malloc(sizeof(struct node));
						tail=tail->next;
						tail->data=rand()%100;
					}
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
				printf("Enter the element to be searched :");
				scanf("%d",&search);
				pos=head;
				count=1;
				gettimeofday(&t0, NULL);
				while(pos!=NULL)
				{
					if(pos->data==search)
					{
						printf("Element Present in Position %d",count);
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
				gettimeofday(&t1, NULL);
				elapsed = timedifference_msec(t0, t1);
  				printf("\nCode executed in %f milliseconds.\n", elapsed);
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
