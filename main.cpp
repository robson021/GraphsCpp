#include <iostream>
#include "Node.h";
#include "DataStore.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Node<int> *node1 = new Node<int>(5);
    cout << "Node #" << node1->getId() << ": " << node1->getData() << endl;

    Node<DataStore> *node2 = new Node<DataStore>();
    DataStore dataStore("example text", 21);
    cout << dataStore << endl;

    node2->setData(dataStore);

    DataStore d2 = node2->getData();
    cout << "Data:\n" << d2 << endl;

    return 0;
}