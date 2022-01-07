#include <stdio.h>
#include <stdlib.h>

int main(){
  struct node{
    int data;
    struct node *next;
    struct node *prev;
  };
struct node * head,*tail,*temp;
head=0;
int choice=1,pos;
while(choice==1){
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));

scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0){
  head=tail=newnode;
}
else{
  tail->next=newnode;
  newnode->prev=tail;
  tail=newnode;
}

scanf("%d",&choice);
}



temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;
}


scanf("%d",&pos);
if(pos==1){
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));

scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
head->prev=newnode;
newnode->next=head;
head=newnode;
temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;

}



}

else if(pos==2){
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));

scanf("%d",&newnode->data);

tail->next=newnode;
newnode->prev=tail;
tail=newnode;
newnode->next=0;

temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;

}



}


else
{
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));

scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
temp=head;
int i=1;
while(i<pos-1){
  temp=temp->next;
  i++;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
temp=head;
while(temp!=0){
  printf("%d ",temp->data);
  temp=temp->next;

}


}
}