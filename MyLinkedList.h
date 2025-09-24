#pragma once
#include "MyLinkedNode.h"

class MyLinkedList
{
    private:
    MyLinkedNode *_first;
    MyLinkedNode *_last;
    
    public:
        MyLinkedList();
        ~MyLinkedList();

        void Add(MyLinkedList *node);
        void Update(MyLinkedList *old, MyLinkedList *new);
        void Remove(MyLinkedList *node);
};