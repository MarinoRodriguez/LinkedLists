#pragma once
#include "MyLinkedNode.h"

class MyLinkedList
{
    private:
    MyLinkedNode::MyLinkedNode *_first;
    MyLinkedNode::MyLinkedNode *_last;
    
    public:
        MyLinkedList();
        ~MyLinkedList();

        void Add(MyLinkedList::MyLinkedList *node);
        void Update(MyLinkedList::MyLinkedList *old, MyLinkedList::MyLinkedList *new);
        void Remove(MyLinkedList::MyLinkedList *node);
};