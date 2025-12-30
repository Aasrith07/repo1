/* Struct practice
#include <stdio.h>
#include <string.h>

struct student{
      int roll;
      float cgpa;
      char name[100];
};

int main()
{
      struct student s1;
      s1.roll = 1664;
      s1.cgpa = 9.2;
      strcpy(s1.name,"krishna");

      printf("student name = %s", s1.name);
      printf("roll no =%d",s1.roll);
      printf("cgpa = %f",s1.cgpa);


      return 0;
}
// */


/* Traversing a linekd list
#include <stdio.h>
#include <stdlib.h>
struct node{
            int data;
            struct node *link;
      };

int main()
{     
      struct node *three = malloc(sizeof(struct node));
      three -> data = 1000;
      three ->link = NULL;

      struct node *two = malloc(sizeof(struct node));
      two -> data = 300;
      two -> link = three;
      
      struct node *one = malloc(sizeof(struct node));
      one -> data =500;
      one -> link = two;


      struct node *head;
      head = one;

      // printf("%i\n",one->data);
      // printf("%i\n",two->data);
      // printf("%i\n",three->data);
      while(head != NULL)
      {
          printf("%d",head->data);
          head = head->link;
          
      }
      return 0;
}*/

// Linklis full basics
/*
#include <stdio.h>
#include <stdlib.h>

struct node{ 
      int data;
      struct node *link;
};

struct node* insertatend(struct node* ptr, int d)
{
      struct node* temp = malloc(sizeof(struct node));
      temp -> data = d;
      temp -> link = NULL;
      while(ptr->link!= NULL)
      {
            ptr = ptr ->link;
      }
      ptr -> link = temp;
      return temp;
}

struct node* delnode(struct node* head)
{
     if(head == NULL)
     {
      printf("List is empty");
     }
     else{
      struct node *temp = head;
      head = head ->link;
      free(temp);
      temp = NULL;
     }
     return head;
}

void particularnode(struct node* head,int pos)
{
      struct node* current = head;
      struct node* previous = head;
      if(head == NULL)
      {
            printf("no");
      }
      else if(pos == 1)
      {
            head = current ->link;
            free(current);
            current = NULL;
      }

      else{
            while(pos!=1)
            {
                  previous = current;
                  current = current-> link;
                  pos--;
            }
            previous->link = current->link;
            free(current);
            current = NULL;
      }
}

void lastnode(struct node* head)

{
      if(head == NULL)
     {
      printf("List is empty");
     }
     else if(head ->link == NULL)
     {
      free(head);
      head = NULL;
     }
     else
     {
      struct node* temp;
      struct node* temp2;
      temp = head;
      while(temp ->link ->link != NULL)
      {
            temp = temp->link;
      }
      free(temp->link);
      temp ->link= NULL;
     }
}

struct node* revll(struct node* head)
{
      struct node* prev=NULL;
      struct node* next=NULL;
      while(head!=NULL)
      {
            
            next = head->link;
            head->link = prev;
            prev = head;
            head =  next;
      }

      head = prev;
      return head;

}

int main()
{
      int count =0;
      int pos = 3 ;
     
     struct node *one = malloc(sizeof(struct node));
     struct node *two = malloc(sizeof(struct node));
     struct node *three = malloc(sizeof(struct node));
     struct node *four = malloc(sizeof(struct node));
     
     one -> data = 10;
     two -> data = 20;
     three -> data = 30;

      one -> link = two;
     two -> link = three;
     three -> link = NULL;
     struct node *ptr = three;
     ptr = insertatend(ptr,35);

     ptr = one;

      while( ptr!= NULL)
      {
            count++;
            printf("%d\t",ptr->data);
            ptr = ptr->link;
      }
      printf("%i\n",count);

      // one = delnode(one);
      // particularnode(one,pos);
      one = revll(one);
      ptr = one;
      while(ptr !=NULL){
            printf("%d",ptr->data);
            ptr = ptr ->link;      }
      
     return 0;
}
*/
// Stacks

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//       int data;
//       struct node* next;
// };


// struct node* push(struct node* head,int d)
// {
//       struct node* temp = malloc(sizeof(temp));
//       temp -> data = d;
//       temp->next =  head;
//       head = temp;
//       return head;
// }
// void print(struct node* head)
// {
//       struct node* ptr;
//       ptr = head;
//       while(ptr != NULL)
//       {
//             printf("%i",ptr->data);
//             ptr = ptr->next;
//       }
// }


// int main()
// {
//       int d;
//       struct node* head;
//       scanf("%i",&d);
//       struct node* one;
//       one ->data = 100;
//       one -> next = NULL;
//       head = one;
//       head = push(head,d);
//       struct node* ptr = NULL;
//       ptr = head;
//       while(ptr!= NULL)
//       {
//             printf("%i",ptr ->data);
//             ptr = ptr->next;
//       }
//       return 0;
// }
#include <stdio.h>
#include <stdlib.h>

struct node {
      int data;
      struct node* left;
      struct node* right;
};

void insertion(struct node* tree,int d)
{
      struct node* ptr,*parentptr,*nodeptr;
      ptr ->data = d;
      ptr -> left = NULL;
      ptr -> right =NULL;
      if(tree== NULL)
      {
            tree = ptr;

      }
      else
      {
            parentptr =NULL;
            nodeptr = tree;
            while(nodeptr  != NULL)
            {
                  parentptr = nodeptr;
                  if(d<nodeptr->data)
                  {
                        nodeptr = nodeptr ->left;
                  }
                  else{
                        nodeptr = nodeptr->right;
                  }
            }
            if(d <parentptr->data)
            {
                 ptr = parentptr ->left; 
            }
            else
            {
                  ptr = parentptr->right;
            }

      }
}

void inordertraversal(struct node* tree)
{
      while(tree != NULL)
      {
            inordertraversal(tree->left);
            printf("%d\t",tree->data);
            inordertraversal(tree ->right);
      }
}

void deletion(struct node* tree, int d)
{     
      struct node* parentptr, ptr2,ptr3;

      if(d < tree ->data)
      {
            deletion(tree->left,d);
      }
      else if(d > tree ->data)
      {
            deletion(tree->right,d);
      }
      else{
            if(tree->right != NULL && tree -> left != NULL)
            {
                  parentptr = inorderpredes();
            }
            else if (tree->right != NULL)
            {

            }
      }

}