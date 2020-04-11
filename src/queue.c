//
// Created by zx on 2020/4/11.
//

#include "queue.h"
#include "string.h"

bool queue_push(Queue *q, int n)
{
    q->data[q->tail] = n;
    q->tail++;
    if (q->tail >= q->length)
    {
        q->tail = 0;
    }
    if (q->count == q->length)/*full*/
    {
        q->head = q->tail;
    }
    else
    {
        q->count++;
    }
    return TRUE;
}

bool queue_pop(Queue *q, int *n)
{
    if (q->count == 0)
    {
        return FALSE;
    }
    *n=q->data[q->head];
    q->head++;
    if (q->head >= q->length)
    {
        q->head = 0;
    }
    q->count--;
    return TRUE;
}

bool queue_peek(Queue *q, int *n)
{
    if (q->count == 0)
    {
        return FALSE;
    }
    *n=q->data[q->head];
    return TRUE;
}
