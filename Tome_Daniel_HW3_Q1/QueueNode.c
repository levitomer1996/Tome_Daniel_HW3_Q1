#include <stdio.h>
#include <stdlib.h>
#include "QueueNode.h"



QueueNode* createQueue()
{
	QueueNode* q = NULL;
	return q;
}

int isEmptyQueue(QueueNode* Q)
{
	if (Q == NULL) {
		return 1;
	}
	return 0;
}

void insert(QueueNode** Q, queueinfo x)
{
	QueueNode* new_q = malloc(sizeof(QueueNode));
	if (new_q == NULL) {
		return;
	}

	new_q->value = x;

	if (isEmptyQueue(*Q)) {
		new_q->next = new_q;
		*Q = new_q;
	}
	else {
		new_q->next = (*Q)->next;
		(*Q)->next = new_q;
		*Q = new_q;
	}
}
	
	


void delafter(QueueNode* p, queueinfo* x)
{
	// check if p is a valid node
	if (p == NULL || p->next == NULL) {
		return;
	}

	// save the value of the node to be deleted
	*x = p->next->value;

	// delete the node
	QueueNode* temp = p->next;
	p->next = p->next->next;
	free(temp);
}

void PrintQueue(QueueNode* Q)
{
	QueueNode* current = Q->next;
	if (current != NULL) {
		do {
			printf(" %d \n", current->value);
			current = current->next;
		} while (current != Q->next);
	}
	else {
		printf("%d", Q->value);
	}
	
}
