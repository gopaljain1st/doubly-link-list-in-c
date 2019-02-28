#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<malloc.h>
struct node
{   struct node *left;
    int info;
    struct node *right;
};
typedef struct node a;
a *start,*end,*ptr;
void gotoxy(int x, int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int count=0;
void create();
void insert_at_beg(int);
void insert_at_last(int);
void insert_at_nth_pos(int,int);
void del_at_beg();
void del_at_last();
void del_at_nth_pos(int);
void display();
void reverse();
void sorting();
void search(int);
int main()
{
    int ch,n,n1;
    start=NULL;
    end=NULL;
    ptr=(a*)malloc(sizeof(a));
    while(1)
    {    
    printf("\n\n\n\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                Doubly linklist......              *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*      (1) for create doubly linked list            *\n");
printf("\t\t*      (2) for inserting                            *\n");
printf("\t\t*      (3) for deleting                             *\n");
printf("\t\t*      (4) for searching                            *\n");
printf("\t\t*      (5) reverse print in doubly linked list      *\n");
printf("\t\t*      (6) for display doubly linked list           *\n");
printf("\t\t*      (7) for sorting                              *\n");
printf("\t\t*      (8) for exit.....                            *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");

        gotoxy(40,18);
        scanf("%d",&ch);
        system("cls");
        switch(ch)
        {
            case 1: create();
                   break;
            case 2:
            {    while(1)
            {  
            printf("\n\n\n\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*     (1) for insert at begining                    *\n");
printf("\t\t*     (2) for insert at last                        *\n");
printf("\t\t*     (3) for insert at nth position                *\n");
printf("\t\t*     (4) for insert after position                 *\n");
printf("\t\t*     (5) for insert before position                *\n");
printf("\t\t*     (6) for display doubly linked list            *\n");
printf("\t\t*     (7) for main menu                             *\n");
printf("\t\t*     (8) for exit...                               *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t*                                                   *\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
                gotoxy(40,18);
            	scanf("%d",&ch);
            	system("cls");
            	switch(ch)
            	{
            		case 1: printf("enter the element which you insert at node1:\n");
            		scanf("%d",&n);
            		insert_at_beg(n);
            		break;
            		case 2: printf("enter the element which you insert at last node:\n");
            		        scanf("%d",&n);
            		        insert_at_last(n);
            		        break;
            		case 3: printf("enter the position of node:\n");
            		        scanf("%d",&n);
            		        printf("enter the element which you insert at %d position:\n",n);
            		        scanf("%d",&n1);
            		        insert_at_nth_pos(n,n1);
            		        break;
            		case 4: printf("enter the position of node for inserting element after node:\n");
            		        scanf("%d",&n);
            		        printf("enter the element:\n");
            		        scanf("%d",&n1);
            		        insert_at_nth_pos(n+1,n1);
            		        break;
            		case 5: printf("enter the position of node for inserting element before node:\n");
            		        scanf("%d",&n);
            		        printf("enter the element:\n");
            		        scanf("%d",&n1);
            		        insert_at_nth_pos(n-1,n1);
            		        break;
            		case 6: display();
            		        break;
            		case 7:  break;
            		case 8: printf("thank you......\n\n\n\n\n\n\n");
					       exit(0);
            		default : printf("please enter correct choice:\n");
            		         system("pause");
            		         system("cls");
				}
				if(ch==7)
				break;
			}
            
          break;  }
            case 3: {    while(1)
                         {  
                         printf("\n\n\n\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*      (1) for delete at begining                             *\n");
printf("\t\t*      (2) for delete at last                                 *\n");
printf("\t\t*      (3) for delete at nth position                         *\n");
printf("\t\t*      (4) for delete after position                          *\n");
printf("\t\t*      (5) for delete before position                         *\n");
printf("\t\t*      (6) for display doubly linked list                     *\n");
printf("\t\t*      (7) for main menu                                      *\n");
printf("\t\t*      (8) for exit.....                                      *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*                                                             *\n");
printf("\t\t*                                                             *\n");
printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
                    gotoxy(40,18);
                	scanf("%d",&ch);
                	system("cls");
                 	switch(ch)
                         	{
                         		case 1: del_at_beg();
                         		        break;
                         		case 2: del_at_last();
                         		        break;
                         		case 3: printf("enter the position which you delete in link list:\n");
                         		        scanf("%d",&n);
                         		        del_at_nth_pos(n);
                         		        break;
                         		case 4: printf("enter the positon of node for deleting element after position:\n");
                         		        scanf("%d",&n);
                         		        del_at_nth_pos(n+1);
                         		        break;
                         		case 5: printf("enter the position of node for deleting element before position:\n");
                         		        scanf("%d",&n);
                         		        del_at_nth_pos(n-1);
                         		        break;
                         		case 6: display();
                         		         break;
                         		case 7: break;
                         		case 8:printf("thank you......\n\n\n\n\n\n\n"); 
								       exit(0);
                         		default : printf("please enter correct choice:\n");
                         		          break;
                         		system("pause");
                         		system("cls");
						}	
						if(ch==7)
						break;
						 }
						 break;
				}
			case 4: printf("enter the element which you search in linked list:\n");
			        scanf("%d",&ch);
					search(ch);
					break; 
            case 6: display();                
                    break;         
            case 8:printf("thank you......\n\n\n\n\n\n\n");
			       exit(0);
            default : printf("please enter coorect choice:\n");
                      system("pause");
                      system("cls");
                      break;
            case 5: reverse();
                    break;
            case 7: sorting();
                    break;
        }
        
    }
}
void create()
{
    int ch;
    a *temp;
    start=ptr;
    ptr->left=NULL;
    do
    { count++;
        printf("enter the element which you insert at node%d:\n",count);
        scanf("%d",&ptr->info);
        printf("element are inserted at %d node:\n",count);
        printf("press 1 for create another node or 0 for not(1/0):\n");
        scanf("%d",&ch);
        system("cls");
        if(ch!=1&&ch!=0)
        {
           printf("enter the coorect option:\n");
           printf("press 1 for create another node or 0 for not create another node(1/0):\n");
           scanf("%d",&ch);
           system("cls");
        }
        if(ch==1)
        {  
            ptr->right=(a*)malloc(sizeof(a));
            temp=ptr->right;
            temp->left=ptr;
            ptr=ptr->right;
        }
        else 
		{
		ptr->right=NULL;
		end=ptr;
	    }
    }while(ch==1);
    
}
void insert_at_beg(int ele)
{
   a *nnode;
   count++;
    nnode=(a*)malloc(sizeof(a));
    nnode->left=NULL;
    if(start==NULL)
    {   
        start=nnode;
        nnode->right=NULL;
        end=nnode;
    }
    else
    {
        nnode->right=start;
        start->left=nnode;
        start=nnode;
    }
    nnode->info=ele;
    printf("element are inserted at first node:\n");
    system("pause");
    system("cls");
}
void display()
{
    a *temp;
    if(start==NULL)
    {
        printf("linked list are empty!!\n");
    }
    else
    {
        temp=start;
        while(temp->right!=NULL)
        {
            printf("%d\t",temp->info);
            temp=temp->right;
        }printf("%d\n",temp->info);
    }
    system("pause");
    system("cls");
}
void insert_at_last(int ele)
{ a *nnode;
    count++;
    nnode=(a*)malloc(sizeof(a));
    nnode->info=ele;
    nnode->right=NULL;
    if(start==NULL)
    {
       insert_at_beg(ele);
    }
    else
    {
    	end->right=nnode;
        nnode->left=end;
        end=nnode;
    }
    printf("elemenet are inserted at last node:\n");
    system("pause");
    system("cls");
}
void insert_at_nth_pos(int pos,int ele)
{
    int j;
    
    a *temp,*nnode,*save;
    nnode=(a*)malloc(sizeof(a));
    temp=start;
    if(pos==0||pos<0)
    {
      printf("position does not exist in linked list\n");
      system("pause");
      system("cls");
      return;
    }
    count++;
   if(count+1<pos)
    printf("position does not exist:\n");
   else if(count+1==pos)
    insert_at_last(ele);
    else if(pos==1)
    insert_at_beg(ele);
    else
    { temp=start;
          nnode->info=ele;
        for(j=1;j<pos-1;j++)
        {   
          temp=temp->right;
        }
        nnode->left=temp;
        nnode->right=temp->right;
        save=temp->right;
        temp->right=nnode;
        save->left=nnode;
     printf("element are inserted at %dth position:\n",pos);
    }
    system("pause");
    system("cls");
}
void del_at_beg()
{ a *temp;
    if(start==NULL)
    printf("there are no node to delete:\n");
    else
    {  temp=start;
    start=start->right;
    start->left=NULL;
    free(temp);
    count--;
     }
    printf("element are deleted from begining:\n");
    system("pause");
    system("cls");
}
void del_at_last()
{  a *temp;
    int i=0,j;
    if(start==NULL)
    {
    printf("there are no node to delete:\n");
  return;
  } 
    else if(start->right==NULL)
    {   temp=start; 
       start=start->right;
       start->left=NULL;
       free(temp);
    }
    else{
            temp=end;
            end=end->left;
            end->right=NULL;
            free(temp);
       }
       count--;
    printf("element are deleted from last:\n");
    system("pause");
    system("cls");
}
void del_at_nth_pos(int pos)
{
    int j;
    a *temp,*temp1;
    temp=start;
    if(pos==0||pos<0)
    {
    printf("there are no node to delete in this position:\n");
    system("pause");
    system("cls");
    return;
    }
    if(start==NULL)
    {
    printf("there are no node to delete:\n");
   return;
   }
    else if(count<pos)
    printf("position does not exit:\n");
    else if(pos==1)
    del_at_beg();
    else if(pos==count)
    del_at_last();
    else
    {temp=start;
    for(j=1;j<pos-1;j++)
    temp=temp->right;
        temp1=temp;
        temp=temp->right;
        temp1->right=temp->right;
		temp=temp->right;
		temp->left=temp1;    
     count--;
    printf("element are deleted from %d position:\n",pos);
    }
    system("pause");
    system("cls");
}
void search(int item)
{  a *temp;
int i=0;
  temp=start;
	while(temp)
	{ i++;
		if(temp->info==item)
		{
			printf("element are found at %d node:\n",i);
			system("pause");
			system("cls");
			return;
		}
		temp=temp->right;
	}
	if(temp==NULL)
	printf("element are not found:\n");
	system("pause");
	system("cls");
	
}
void reverse()
{
	a *temp;
	temp=end;
	if(end==NULL)
	printf("linked list are empty:\n");
	else
	{
	while(temp->left!=NULL)
	{
		printf("%d\t",temp->info);
		temp=temp->left;
	}printf("%d\n",temp->info);
   }
    system("pause");
    system("cls");
}
void sorting()
{
	int i,j,temp;
	a *temp1,*temp2,*temp3;
	temp3=start;
	while(temp3!=NULL)
	{   
	   temp2=temp3->right;
	   while(temp2!=NULL)
	   {
	   	  if(temp3->info>temp2->info)
	   	  {
	   	  	temp=temp3->info;
	   	  	temp3->info=temp2->info;
	   	  	temp2->info=temp;
		  }
		  temp2=temp2->right;
	   }
	   temp3=temp3->right;
	}
}
