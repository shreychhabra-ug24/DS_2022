#include<stdio.h>
#include<stdlib.h>

// STACK OF POSITIVE NUMBERS
struct stackType {
	int *data;
	int size;
	int top;
};
typedef struct stackType * StackAddress;

StackAddress initStack() {
	StackAddress s = malloc( sizeof(struct stackType) );
	s->top  = -1;
	s->size = 100;
	s->data = malloc( s->size * sizeof(int) );
	return s;
}

void freeStack(StackAddress s){
	free(s->data);
	free(s);
}

int insertStack(StackAddress s, int val) {
	if( s->top == s->size-1 ) {return -1;} // stack is full
	if( val < 0 ) {return -2;}
	s->data[ ++s->top ] = val;
	return val;
}

int extractStack(StackAddress s) {
	if( s->top < 0 ) return -1; // stack is empty
	return s->data[ s->top-- ];
}


//=============================================================

struct queueType {
	int *data;
	int size;
	int start;
	int n; // number of elements in the queue
};
typedef struct queueType * QueueAddress;

QueueAddress initQueue() {
	QueueAddress q = malloc( sizeof(struct queueType) );
	q->n     = 0;
	q->start = 0;
	q->size  = 100;
	q->data  = malloc( q->size * sizeof(int) );
	return q;
}

void freeQueue(QueueAddress q) {
	free(q);
}

int insertQueue(QueueAddress q, int val) {
	if(q->n == q->size) {return -1;}
	if(val < 0) {return -2;}
	q->data[ (q->start + q->n++) ] =  val;
	return val;
}

int extractQueue(QueueAddress q) {
	if(q->n == 0) return -1;
	q->n--;
	return q->data[ q->start++ ];
}

int main() {

	printf("Stack: ");
	StackAddress s = initStack();

	insertStack(s, 10);
	insertStack(s, 20);
	insertStack(s, 30);
	insertStack(s, 555);

	printf("%d ", extractStack(s));
	printf("%d ", extractStack(s));
	printf("%d ", extractStack(s));
	printf("%d ", extractStack(s));

	freeStack(s);

	printf("\n\nQueue: ");
	QueueAddress q = initQueue();

	insertQueue(q, 10);
	insertQueue(q, 20);
	insertQueue(q, 30);
	insertQueue(q, 555);

	printf("%d ", extractQueue(q));
	printf("%d ", extractQueue(q));
	printf("%d ", extractQueue(q));
	printf("%d ", extractQueue(q));
	printf("%d ", extractQueue(q));

	freeQueue(q);

	printf("\n\nDone!\n");
	return 0;
}