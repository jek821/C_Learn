#ifndef NODE_H
#define NODE_H

typedef struct SNode{
    int data;
    struct SNode *next; 
} SNode; 

SNode * initSNode(int data);

void freeSNode(SNode **node);

void printSNode(SNode *node);

#endif