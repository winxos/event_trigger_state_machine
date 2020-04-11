//
// Created by zx on 2020/4/11.
//

#ifndef EVENTTRIGGERSTATEMACHINE_H_STATE_H
#define EVENTTRIGGERSTATEMACHINE_H_STATE_H
typedef void (*pFunState)(void * const me);
typedef struct HState{
    pFunState state;
    int evt;
}HState;
void event_push(int);
#define state_to(_target) (((HState*)me)->state = ((pFunState)_target),event_push(0))
#define sig(me) (((HState*)me)->evt)
void h_state_dispatch(void * const me);
#endif //EVENTTRIGGERSTATEMACHINE_H_STATE_H
