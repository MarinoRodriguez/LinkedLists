#include <iostream>
#include "MyLinkedList.h"
#include "MyLinkedNode.h"


int main(){

    MyLinkedList myList;// = new MyLinkedList();

    MyLinkedNode node1("primer nodo");
    MyLinkedNode node2("segundo nodo");
    MyLinkedNode node3("tercer nodo");

    myList.Add(&node1);
    myList.Add(&node2);
    myList.Add(&node3);

    std::cout << myList.GetFirst()->GetNombre() << std::endl;

    MyLinkedNode node4("cuarto nodo");

    myList.Update(&node1, &node4);

    std::cout << myList.GetFirst()->GetNombre() << std::endl;

    myList.Remove(&node4);

    std::cout << myList.GetFirst()->GetNombre() << std::endl;

    return 0;
}