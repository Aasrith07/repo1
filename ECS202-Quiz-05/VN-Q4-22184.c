#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

int findSmallest(struct Node* root) {
    if (root == NULL) {
        return -1; 
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int findLargest(struct Node* root) {
    if (root == NULL) {
        return -1; 
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

void destroyTree(struct Node* root) {
    if (root != NULL) {
        destroyTree(root->left);
        destroyTree(root->right);
        free(root);
    }
}

int main() {
    int num, sum;
    struct Node* root = NULL;


    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        if (num > 0) {
            root = insert(root, num);
        }
    }

   
    sum = findSmallest(root) + findLargest(root);

    
    printf("%d\n", sum);

   
    destroyTree(root);

    return 0;
}