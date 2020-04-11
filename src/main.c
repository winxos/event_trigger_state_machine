#include <stdio.h>
#include "queue.h"
#include "h_state.h"
#include "work.h"

int q_buf[10];
Queue q={.length=10,.data=q_buf};

void event_push(int n)
{
    queue_push(&q, n);
}
struct Demo demo;
struct Demo *me = &demo;
int main() {
    state_to(work_init);
    event_push(SIG_TEST);
    while (TRUE)
    {
        if(queue_pop(&q,&me->super.evt)==TRUE)
        {
            h_state_dispatch(me);
        }
    }

    return 0;
}
