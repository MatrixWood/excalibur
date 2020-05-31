#ifndef NODE_H
#define NODE_H

#include <stdlib.h>

/*
typedef enum token_type {
  SEQ,
  SET,
  ADD,
  SUB,
  MUL,
  DIV,
  VAR,
  NUM,
  RET
} token;
*/

#define SEQ_TYPE 0
#define SET_TYPE 1
#define ADD_TYPE 2
#define SUB_TYPE 3
#define MUL_TYPE 4 
#define DIV_TYPE 5
#define VAR_TYPE 6
#define NUM_TYPE 7
#define RET_TYPE 8

struct Node {
	int type;
	int val;
  struct Node* op1;
	struct Node* op2;
};

struct Node* make_node(int _type, struct Node* oper1, struct Node* oper2, int _val) {
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->type = _type;
	node->val = _val;
	node->op1 = oper1;
	node->op2 = oper2;

	return node;
}

#endif