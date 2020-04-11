//
// Created by zx on 2020/4/11.
//

#include "h_state.h"
void h_state_dispatch(void * const me)
{
    if(((HState*)me)->state)
    {
        ((HState*)me)->state(me);
    }
}