#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) {
		
	if(root == NULL) {
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} else {
      
		struct node* cur;
		
		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}



struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

int getHeight(struct node* root) {
     int left_h,right_h;
    if(root==NULL)
        return -1;
    else
        {
        left_h = getHeight(root->left) + 1;
        right_h = getHeight(root->right) + 1;
    }
    if(left_h > right_h)
        return (left_h);
    else
        return (right_h );
}


int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	printf("%d",getHeight(root));
    return 0;
}
