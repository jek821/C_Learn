#include "Node.h"
#include <stdio.h> 

int main(){
  SNode *testNode = initSNode(10);
  printSNode(testNode);
  freeSNode(&testNode);
  return 0;
}