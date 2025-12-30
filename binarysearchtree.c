#include <stdio.h>
#include <stdlib.h>


struct node{
    int val;
    struct node* left;
    struct node* right;

};
struct node* tree;
void createtree(struct node*)
{
    tree = NULL;
}

struct node *insertelement(struct node* tree, int x)
{
    struct node *ptr, *nodeptr, *parentptr;
    ptr = (struct node*) malloc(sizeof(struct node));
    
    ptr->val = x;
    ptr->left = NULL;
    ptr->right = NULL;
    
    if(tree==NULL)
    {
       tree=ptr;
       tree->left = NULL;
       tree->right = NULL;
    }
    else{
        parentptr = NULL;
        nodeptr = tree;
        while(nodeptr != NULL){
            //Finding parent node of new-node
            parentptr=nodeptr;
            if(x < nodeptr->val) 
                nodeptr=nodeptr->left;
            else
                nodeptr = nodeptr->right;
        }
        
        //Inserting new node.
        if(x < parentptr->val)
            parentptr->left = ptr;
        else
            parentptr->right = ptr;
    }
    
    return tree;
}

struct node* deleteelement(struct node* tree, int x)
{
    struct node*cur,*parent,*suc,*psuc,*ptr;
    if(tree = NULL)
    {
        printf("tree is empty");
        return(tree);
    }
    parent = tree;

}
