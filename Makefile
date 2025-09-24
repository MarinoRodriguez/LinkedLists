SRC = MyLinkedNode.cpp \
		MyLinkedList.cpp

OBJ = MyLinkedNode.o \
		MyLinkedList.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} main.cpp -o main