#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define size 20

struct dataitem{
	int key;
	int data;
};

int hashcode(int key){
	return key%size;
}


struct dataitem *item;
struct dataitem *dummyItem;
struct dataitem* hasarr[size];

void insert(int key,int data){
	
	struct dataitem *item;
	item=(struct dataitem*)malloc(sizeof(struct dataitem));
	item->key=key;
	item->data=data;
	//get hashing index
	
	int h=hashcode(key);

	while(hasarr[h]!=NULL && hasarr[h]->key!=-1){
		++h;
	    h%=size;
	}
	
	hasarr[h]=item;

}


struct dataitem *search(int key){
   	struct dataitem *item;
	item=(struct dataitem*)malloc(sizeof(struct dataitem)); 
	int has=hashcode(key);
	
	while(hasarr[has]!=NULL){
		if(hasarr[has]->key==key){
			 return hasarr[has];
		}else{
			++has;
			has%=size;
		}
	}
	return NULL;
		
	
}


struct dataitem *del(struct dataitem* item){
	
	int key=item->key;
	
	int has=hashcode(key);
	
	while(hasarr[has]!=NULL){
		if(hasarr[has]->key=key){
			struct dataitem* temp=hasarr[has];
			
			hasarr[has]=dummyItem;
			
			return temp;
		}
		++has;
		has%=size;
	}
	
	
	
	
	return NULL;
}


void display(){
	
	int i=0;
	
	for(i=0;i<size;i++){
		
		if(hasarr[i]!=NULL){
			
			printf(" (%d,%d) , ",hasarr[i]->key,hasarr[i]->data);
			
		}else{
			printf("~");
			
		}
	}
	printf("\n");
}


int main(){
    dummyItem = (struct dataitem*) malloc(sizeof(struct dataitem));
   dummyItem->data = -1;  
   dummyItem->key = -1; 
	insert(1, 20);
   insert(2, 70);
   insert(42, 80);
   insert(4, 25);
   insert(12, 44);
   insert(14, 32);
   insert(17, 11);
   insert(13, 78);
   insert(37, 97);

   display();
	
	//serach option
	printf("\n");
 item=search(12);
	if(item!=NULL){
		printf("found....==>%d",item->data);
	}else{
		printf("not find....");
	}
	
	
	
	del(item);
	printf("\n");
	display();
	item=search(12);
	if(item!=NULL){
		printf("found....==>%d",item->data);
	}else{
		printf("not find....");
	}
	
	return 0;
}


