#pragma once
#include "MyLinkedNode.h"

class MyLinkedList
{
    private:
    MyLinkedNode *_first;
    MyLinkedNode *_last;
    
    public:
        MyLinkedList();

        void Add(MyLinkedNode *node);
        void Update(MyLinkedNode *old, MyLinkedNode *newNode);
        void Remove(MyLinkedNode *node);

        //mis extras
        MyLinkedNode* GetFirst();
        MyLinkedNode* GetLast();
};