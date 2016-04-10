//
// Created by robert on 10.04.16.
//

#ifndef GRAFY_DATASTORE_H
#define GRAFY_DATASTORE_H

#include <string>
#include <iostream>

using namespace std;


class DataStore {
    string text;
    int number;

public:
    friend std::ostream &operator<<(std::ostream &out, const DataStore &dataStore) {
        out << "DataStore (" << dataStore.text << "; " << dataStore.number << ")" << endl;
    }


    // constructors
    DataStore() {
        text = "";
        number = 0;
    }

    DataStore(const string &text, int number) : text(text), number(number) { }

    // geters and setters
    const string &getText() const {
        return text;
    }

    void setText(const string &text) {
        DataStore::text = text;
    }

    int getNumber() const {
        return number;
    }

    void setNumber(int number) {
        DataStore::number = number;
    }

    // operators overload
    DataStore operator+(const DataStore &dataStore) {
        this->text += dataStore.text;
        this->number += dataStore.number;
    }

    DataStore operator=(const DataStore &dataStore) {
        this->text = dataStore.text;
        this->number = dataStore.number;
    }


};



#endif //GRAFY_DATASTORE_H
