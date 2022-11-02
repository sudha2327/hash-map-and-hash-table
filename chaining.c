#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10
struct node
{
               int data;
               struct node *next;
};
struct node *head[TABLE_SIZE]={NULL},*c;
void insert()
{
    int i,key;
    printf("\nenter a value to insert into hash table\n");
    scanf("%d",&key);
    i=key%TABLE_SIZE;
    printf("\n enter the values for insert at the key loacton of [%d]",key);
    int s;
    scanf("%d",&s);
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=s;
    newnode->next = NULL;
    if(head[i] == NULL)
        head[i] = newnode;
    else
    {
        c=head[i];
        while(c->next != NULL)
        {
           c=c->next;
        }
        c->next=newnode;
    }
}
void search()

{
    int key,index;
    printf("\nenter the element to be searched\n");
    scanf("%d",&key);
    
    //get hash index
    index=key%TABLE_SIZE;
//    
//    while(head[index]!=NULL){
//    	if(index==key){
//    		printf("search found at [%d]",key);
//    		
//		}
//	}
    
    
    
    
    
	if(head[index]== NULL)
        printf("\n Search element not found\n");
    else
    {
        while(head[index]!=NULL){
        	 if(index== key)
                
            {   printf("search element found at [%d]\n",index);
                
                   // printf("datas in the index packets are: %d",c->data);
                   
                   for(c=head[index];c!=NULL;c=c->next){
                   	 printf("datas have present at the key values:%d",c->data);
				   }
                    break;
            }
                c=c->next;
		}
		
		
      
   
    }
}
void display()
{
    int i;
    for(i=0;i<TABLE_SIZE;i++)
          {
           printf("\nentries at index %d\n",i);
               if(head[i] == NULL)
               {
               printf("No Hash Entry");
               
               }
               else
               {
                 for (c=head[i];c!=NULL;c=c->next){
                 	              printf("%d->",c->data);
				 }
                              
               }
          }
         
}
main()
{
    int opt,key,i;
    while(1)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
                                           
        }
    }
}
