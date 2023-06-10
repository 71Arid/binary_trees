#include "binary_trees.h"
#include <stdlib.h>

/**
 * parent - pointer to parent node of node to create
 * @value: value of the node to create
 */
 
 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
     if (parent == NULL || value == NULL || )
     {
         return NULL;
     }
     binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
     newNode->n = value;
     newNode->left = NULL;
     newNode->right = NULL;
     if (value > parent->n){
        parent->right = newNode;
     }
     else if (value < parent->n)
     {
         parent->left = newnode;
     }
     else 
     {
         return(parent);
     }
 }
