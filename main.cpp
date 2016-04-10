#include <iostream>
#include "Node.h";

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Node<int> *node1 = new Node<int>(5);
    cout << "Node #" << node1->getId() << ": " << node1->getData();

    return 0;
}