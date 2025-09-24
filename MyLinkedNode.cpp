#include "MyLinkedNode.h"

MyLinkedNode* MyLinkedNode::GetNext(){
    return MyLinkedNode::_next;
}

void MyLinkedNode::SetNext(MyLinkedNode *next) {
    _next = next;
}

MyLinkedNode* MyLinkedNode::GetPrev(){
    return MyLinkedNode::_prev;
}

void MyLinkedNode::SetPrev(MyLinkedNode *prev) {
    _prev = prev;
}

void MyLinkedNode::SetNombre(std::string nombre){
 _nombre = nombre;
}

std::string MyLinkedNode::GetNombre(){
    return _nombre;
}