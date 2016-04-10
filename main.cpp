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
    DataStore d = node2->getData();
    cout << "datastore object got from Node: " << d;

    // oveload example

    DataStore dataStore1("data store1 ", 1);
    DataStore dataStore2("datastore2", 2);

    dataStore1 + dataStore2;
    cout << dataStore1;

    dataStore1 = dataStore2;
    cout << dataStore1;

    cout << "GRAPH:" << endl;

    Node<double> *node3 = new Node<double>(5.8);
    Node<double> *node4 = new Node<double>(2.7);
    Node<double> *node5 = new Node<double>(7.1);
    Node<double> *node6 = new Node<double>(2.3);

    node3->addNeighbour(node4);
    node4->addNeighbour(node3);
    node3->addNeighbour(node5);
    node5->addNeighbour(node3);

    cout << *node3 << endl;
    cout << *node4 << endl;
    cout << *node5 << endl;

    node3->addNeighbour(node6);
    node6->addNeighbour(node3);
    cout << *node3 << endl;

    cout << "after delete:" << endl;
    node3->deleteNeighbour(node6);
    node6->deleteNeighbour(node3);
    cout << *node3 << endl;

    Node<double> *node7 = NULL;
    node3->deleteNeighbour(node7);
    node3->addNeighbour(node7);



    cout<<"END"<<endl;
    return 0;
}