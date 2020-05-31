#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOL_TABLE_SIZE 100

struct table_item {
	int id;
	int val;
	char* name;
};

struct table_item* symbol_table[MAX_SYMBOL_TABLE_SIZE];
int table_size = 0;

int add_sym(char* name) {
	for(int i = 0; i < table_size; ++i) {
		if (strcmp(symbol_table[i]->name, name) == 0)
			return symbol_table[i]->id;
	}

	struct table_item* item = (struct table_item*)malloc(sizeof(struct table_item));
	item->id = table_size;
	item->name = name;

	symbol_table[table_size] = item;
	table_size += 1;
	return table_size;
}

struct table_item* get_sym(int id) {
	return symbol_table[id];
}

void set_sym(int id, int val) {
	symbol_table[id]->val = val;
}

#endif 