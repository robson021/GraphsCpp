//
// Created by robert on 10.04.16.
//

#ifndef GRAFY_NODE_H
#define GRAFY_NODE_H

#include <iostream>
#include <vector>

using namespace std;

template<class T>
class Node {
    static long id_counter;
    T data;
    long id;
    std::vector<Node<T> *> otherNodes;

public:

    // constructors
    Node() {
        this->id = ++id_counter;
    }

    Node(T data) : data(data) {
        this->id = ++id_counter;
    }

    Node(const Node &pattern) {
        this->data = pattern.data;
        this->otherNodes = pattern.otherNodes;
        this->id = ++id_counter;
    }

    void addNeighbour(Node<T> *other) {
        this->otherNodes.push_back(other);
        std::cout << "Node #" << this->id << " added new node the the list" << endl;
    }

    // getters and setters
    T getData() {
        return this->data;
    }

    void setData(T data) {
        Node::data = data;
        cout << "Data set. " << data << endl;
    }

    long getId() const {
        return id;
    }

    void setId(long id) {
        Node::id = id;
    }

    const std::vector<Node *> &getOtherNodes() const {
        return otherNodes;
    }

    void setOtherNodes(const std::vector<Node *> &otherNodes) {
        Node::otherNodes = otherNodes;
    }
};

// init static variable
template<typename T>
long Node<T>::id_counter = 0;


#endif //GRAFY_NODE_H
