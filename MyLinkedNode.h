#pragma once
#include <string>

class MyLinkedNode
{
private:
    std::string _nombre;
    MyLinkedNode *_prev;
    MyLinkedNode *_next;

public:
    MyLinkedNode(std::string nombre);

    void SetPrev(MyLinkedNode *prev);
    MyLinkedNode* GetPrev();

    void SetNext(MyLinkedNode *next);
    MyLinkedNode* GetNext();

    void SetNombre(std::string nombre);
    std::string GetNombre();
};
