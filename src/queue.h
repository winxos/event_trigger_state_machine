//
// Created by zx on 2020/4/11.
//

#ifndef EVENTTRIGGERSTATEMACHINE_QUEUE_H
#define EVENTTRIGGERSTATEMACHINE_QUEUE_H
struct Queue
{
    int head;
    int tail;
    int count;
    int length;
    int *data; //storage
};
typedef struct Queue Queue;
typedef unsigned char bool;
#define TRUE (1)
#define FALSE (0)
bool queue_push(Queue *q,int n);
bool queue_pop(Queue *q, int *n);
#endif //EVENTTRIGGERSTATEMACHINE_QUEUE_H
