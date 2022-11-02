#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 16
struct it{
	int key;
	char name[200];
};

struct it *item;
struct it *hasarr[size];
struct it* dummyItem;



int hascode(int key){
	return key%size;
}
void create(int key,char *name){
	struct it *item=(struct it *)malloc(sizeof(struct it));
	
	item->key=key;
//	item->name=name;
strcpy(item->name,name);
	
	//get has code
	
	int h=hascode(key);
	
	//linking to another packs
	if(hasarr[h]!=NULL && hasarr[h]->key!=-1){
		          
		     ++h;
		     h%=size;
	}
	
	hasarr[h]=item;
	
	
	
}

//search 

struct it *search(int key){
	
	int h=hascode(key);
	  
	  while(hasarr[h]!=NULL){
	  	    if(hasarr[h]->key==key){
	  	    	
	  	    	  return hasarr[h];
			  }
			  else{
			  	     ++h;
			  	     h%=size;
			  }
	  }
	  return NULL;
}


struct it*del(struct it *item){
	           
	           int key=item->key;
	           
	           //get hascode
	           
	           int h=hascode(key);
	           //DUMMY ITEM
	           while(hasarr[h]!=NULL){
	           	  if(hasarr[h]->key==key){
	           	  	           struct it *temp=hasarr[h];
							   hasarr[h]=dummyItem;
							   return temp; 
	           	  	   
					 }
					 ++h;
					 h%=size;
			   }
			   
			   return NULL;
	
}
void display(){
	
	int i=0;
	
	for(i=0;i<size;i++){
		if(hasarr[i]!=NULL){
			printf("(%d,%s) , ",hasarr[i]->key,hasarr[i]->name);
		}
		else{
			printf("(~,~)");
		}
	}
	printf("\n");
}





int main(){
   dummyItem = (struct it*) malloc(sizeof(struct it));
   
   dummyItem->key = -1; 
   strcpy(dummyItem->name,"-1"); 
	struct it *item;
	create(0,"sudhagar");
	create(2,"sudha");
	create(3,"siddharth");
	create(4,"siddharth");
	create(1,"samy");
	create(5,"sudha2");
	create(6,"siddharth");
	create(7,"sugan");
	
	display();
	
	item=search(6);
	if(item!=NULL){
		printf("found...%s",item->name);
	}else{
		printf("not found in this time...");
	}
	printf("\n");
	
	del(item);
	display();
	printf("\n");
	item=search(6);
	if(item!=NULL){
		printf("found...%s",item->name);
	}else{
		printf("not found in this time...");
	}
	
	
	
	
	return 0;
}
