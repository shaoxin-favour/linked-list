#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node{
  int value;
  struct _node pointer;
}Node;

Node createnode(Node* a,int value);

#endif
