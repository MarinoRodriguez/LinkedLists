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

    myList.Update(&node1, &node2);

    std::cout << myList.GetFirst()->GetNombre() << std::endl;

    myList.Remove(&node2);
    myList.Remove(&node1);

    std::cout << myList.GetFirst()->GetNombre() << std::endl;

    return 0;
}