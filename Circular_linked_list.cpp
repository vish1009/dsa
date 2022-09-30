#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	
};

void linked_list_traversal(struct node*head){
struct node*p=head;
do{
    printf("element:%d\n",p->data);
	p=p->next;
	
}
while(p!=head);		
}


struct node*insert_at_head(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head->next;
    while(p->next!=head)  {
	   p=p->next;

}
//at this point p points the last node of  this circular linked list
 p->next=ptr
 ;
 ptr->next= head;
 head=ptr;
 return head;
}





int main(){
		struct node*head,*second,*third,*four;
//allocating memory dyanamically in heap;	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	four=(struct node*)malloc(sizeof(struct node));
	
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=four;
	
	four->data=4;
	four->next=head;
	
	printf("circular Linkedlist Before Insertion:\n");
	linked_list_traversal(head);
	printf("Circular Linkedlist After Insertion:\n");
	head=insert_at_head(head,6);
	linked_list_traversal(head);

	
}
