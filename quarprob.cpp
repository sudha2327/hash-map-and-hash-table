#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 20
struct item{
	int key;
	int data;
};


int hascode(int key){
	
	return key%size;
}


struct item *it;
struct item *hasarr[size];

void insert(int key,int data){
	struct item *it=(struct item*)malloc(sizeof(struct item));
	it->key=key;
	it->data=data;
	//get hascode
	
	int h=hascode(key);
	int i=0;
	for(i=0;i<size;i++){
		int h1=(h+(i*i))%size;
		
		if(hasarr[h1]==NULL){
			hasarr[h1]=it;
			break;
		}
	}

}

void search(int key){
	
	//get hash code
	int h=hascode(key);
	int i=0;
	for(i=0;i<size;i++){
		int h1=(h+i)%size;
		
		if(h1==key){
			printf("search found at [%d]....\n",h1);
			
			printf("search datas are:%d",hasarr[h1]->data);
		}
	}
	
}

void display(){

	int i;
	
	printf("entries in this hastable is:\n");
	
	for(i=0;i<size;i++){
		if(hasarr[i]!=NULL){
			printf("(%d,%d) ,",hasarr[i]->key,hasarr[i]->data);
			
		}else{
			printf("(~,~) ,");
		}
		
	}
	printf("\n");
}
	
	
	
	
int main(){



while(1){
	
	int opt;
	int k,v;int s;
	printf("\n 1 insert \t 2 display \t 3 search \t  4 exit \n");
	scanf("%d",&opt);
	switch(opt){
		
		case 1:
			
			printf("enter the key and value:\n");
			scanf("%d",&k);
			scanf("%d",&v);
			insert(k,v);
			break;
		case 2:
			display();
			break;
		case 3:
			printf("give the key values for searching...\n");
			
			scanf("%d",&s);
			search(s);
			break;
		case 4:
			exit(0);
	}
	
	
	
}
//   insert(1, 20);
//   insert(2, 70);
//   insert(2, 80);
//   insert(2, 88);
//
////   insert(12, 44);
////   insert(14, 32);
////   insert(17, 11);
////   insert(13, 78);
////   insert(37, 97);
//
//   display();
//	
//	search(2);
	
	return 0;
}
	


