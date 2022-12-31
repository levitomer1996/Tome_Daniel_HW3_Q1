#pragma once
#include <stdio.h>
#include "QueueNode.h"


void main() {
	int q_length = 0;
	queueinfo x;
	printf("Please insert Queue length : \n");
	scanf_s("%d", &q_length);

	QueueNode* q= createQueue();
	for (int i = 1; i < q_length +1; i++) {
		insert(&q, i);
	}
	PrintQueue(q);
	delafter(q->next, &x);
	printf(" \n Deleted value: %d\n", x);
	PrintQueue(q);
}