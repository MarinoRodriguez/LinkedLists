#include <string>

class MyLinkedNode
{
private:
    std::string _nombre;
    MyLinkedNode *_prev;
    MyLinkedNode *_next;

public:
    MyLinkedNode();
    ~MyLinkedNode();

    void SetPrev(MyLinkedNode *prev);
    MyLinkedNode GetPrev();

    void SetNext(MyLinkedNode *next);
    MyLinkedNode GetNext();
};
