//
// Created by zx on 2020/4/11.
//

#include <stdio.h>
#include "work.h"
#include "h_state.h"
void work_init(struct Demo * const me)
{
    switch(sig(me))
    {
        case SIG_READY:
            puts("work init entry");
            break;
        case SIG_TEST:
            puts("TEST in init");
            state_to(work_test);
            break;
    }
}
void work_test(struct Demo * const me)
{
    switch(sig(me))
    {
        case SIG_READY:
            puts("work test entry");
            break;
        case SIG_TEST:
            puts("TEST in test");
            break;
    }
}