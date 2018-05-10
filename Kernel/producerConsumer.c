
#include "include/producerConsumer.h"
#include "include/semaphore.h"
#include "include/queue.h"


#define MAX_QUEUE_LENGTH 5
#define MAX_MSG_SIZE 30


int semFullCount = 0;
int semEmptyCount = MAX_QUEUE_LENGTH;
Queue messageQueue;


void createMessageQueue() {
	messageQueue = newQueue(MAX_MSG_SIZE);
}


void produce(char *message) {
    while (1) {
        down(&semEmptyCount);
        enqueue(messageQueue, message);
        up(&semFullCount);
    }
}

void consume() {
    while (1) {
        down(&semFullCount);
        consume();
        up(&semEmptyCount);
    }
}