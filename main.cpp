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
    //cout << node2->getData(); //TODO causes 139 exit status. fix it

    // oveload example

    DataStore dataStore1("data store1 ", 1);
    DataStore dataStore2("datastore2", 2);

    dataStore1 + dataStore2;
    cout << dataStore1;

    dataStore1 = dataStore2;
    cout << dataStore1;


    return 0;
}