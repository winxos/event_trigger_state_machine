//
// Created by zx on 2020/4/11.
//

#ifndef EVENTTRIGGERSTATEMACHINE_WORK_H
#define EVENTTRIGGERSTATEMACHINE_WORK_H
#include "h_state.h"
enum Event{
    SIG_READY,
    SIG_TEST
};
struct Demo{
    HState super;
    int test_item;
};
void work_init(struct Demo * const me);
void work_test(struct Demo * const me);

#endif //EVENTTRIGGERSTATEMACHINE_WORK_H
