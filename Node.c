#include <stdlib.h>
#include <stdio.h> 
#include "Node.h" 

SNode * initSNode(int data){
    SNode *newNode = malloc(sizeof(SNode));
    if (!newNode){printf("Error Allocating New Node");return NULL;}
    newNode->data = data;
    newNode->next = NULL; 
    return newNode; 
}

void freeSNode(SNode **node){
        if (node == NULL || *node == NULL){
            printf("ERROR: Node Already Free, Pointer NULL\n");
            return;
        } 
        if ((*node)->next){
            freeSNode(&((*node)->next)); 
            free(*node);
            *node = NULL; 
        }else{
            free(*node);
            *node = NULL;
            return; 
        }
}


void printSNode(SNode *node){
      if (!node){
    printf("ERROR: Reference to null pointer rejected!\n");
    return;
  }
    printf("data: %d\n", node->data);
}
