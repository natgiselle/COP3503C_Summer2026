#ifndef NODE_H
#define NODE_H

class Node{
    public:
        int data;
        Node* next;

        Node(): data(0), next(nullptr){};
        Node(int data_):  data(data_), next(nullptr){};
};
#endif