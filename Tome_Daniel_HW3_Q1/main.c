#pragma once
#include <stdio.h>
#include "QueueNode.h"


void main() {
	int n , k;
	QueueNode* ptr;
	queueinfo x;
	printf("Please insert Queue length : \n");
	scanf_s("%d", &n);

	printf("Please insert number of  steps: \n");
	scanf_s("%d", &k);

	QueueNode* q= createQueue();
	for (int i = 1; i < n + 1; i++) {
		insert(&q, i);
	}
	PrintQueue(q);

	ptr = q;
	printf("Order of elimination:  ");
	while (n > 1) {
		for (int i = 1; i <= k - 1; i++) {
			ptr = ptr->next;
		}
		delafter(ptr, &x);
		printf("%d ", x);
		n--;
	}
	

	printf("\n");
	delafter(ptr, &x);
	printf("Leader is %d", x);
}