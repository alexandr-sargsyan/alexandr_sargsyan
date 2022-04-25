#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

template <typename T>
class Queue
{
private:
    List<T> _list;

public:
    bool isEmpty();
    void pushBack(T);
    T popFront();
    T peek();
    Queue();
    ~Queue();
};

#endif
© 2022 GitHub, Inc.Terms
                   Privacy
                       Security
                           Status
                               Docs
                                   Contact GitHub
                                       Pricing
                                           API
                                               Training
                                                   Blog
                                                       About
