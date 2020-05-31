#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

struct stack_item 
{
	int val;
	struct stack_item* next;
};

struct stack_item* head = NULL;

void push(int val)
{
	struct stack_item* item = (struct stack_item*)malloc(sizeof(struct stack_item));
	item->val = val;
	item->next = head;
	head = item;
}

int pop()
{
	int val = head->val;

	struct stack_item* tmp = head;
	head = head->next;
	free(tmp);

	return val;
}

int empty()
{
	return head == NULL;
}

#endif