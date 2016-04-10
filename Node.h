//
// Created by robert on 10.04.16.
//

#ifndef GRAFY_NODE_H
#define GRAFY_NODE_H

#include <vector>

using namespace std;

template<class T>
class Node {
    static long id_counter;
    T data;
    long id;
    std::vector<Node *> otherNodes;

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


    // getters and setters
    T getData() const {
        return data;
    }

    void setData(T data) {
        Node::data = data;
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
