#include "MyLinkedList.h"

MyLinkedList::MyLinkedList() : _first(nullptr), _last(nullptr)
{
}

void MyLinkedList::Add(MyLinkedNode *node)
{
    if (node == nullptr)
        return;

    if (_first == nullptr)
        _first = node;

    if (_last != nullptr)
    {
        _last->SetNext(node);
        node->SetPrev(_last);
    }

    _last = node;
}

void MyLinkedList::Update(MyLinkedNode *old, MyLinkedNode *newNode)
{
    if (old == newNode)
        return;

    MyLinkedNode *prev = old->GetPrev();
    MyLinkedNode *next = old->GetNext();

    if (_first == old)
        _first = newNode;
    if (_last == old)
        _last = newNode;

    newNode->SetPrev(prev);
    newNode->SetNext(next);

    if (prev != nullptr)
        prev->SetNext(newNode);

    if (next != nullptr)
        next->SetPrev(newNode);

    old->SetNext(nullptr);
    old->SetPrev(nullptr);
}

void MyLinkedList::Remove(MyLinkedNode *node)
{
    if (node == nullptr)
        return;

    MyLinkedNode *prev = node->GetPrev();
    MyLinkedNode *next = node->GetNext();

    if (_first == node)
        _first = next;

    if (_last == node)
        _last = prev;

    if (prev != nullptr)
        prev->SetNext(next);

    if (next != nullptr)
        next->SetPrev(prev);

    node->SetNext(nullptr);
    node->SetPrev(nullptr);
}

MyLinkedNode *MyLinkedList::GetFirst()
{
    return _first;
}

MyLinkedNode *MyLinkedList::GetLast()
{
    return _last;
}