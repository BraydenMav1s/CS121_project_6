#include "Address.h"
#include <iostream>

Address::Address() {
    street = "";
    city = "";
    state = "";
    zip = "";
}

void Address::init(std::string street, std::string city, std::string state, std::string zip) {
    this->street = street;
    this->city = city;
    this->state = state;
    this->zip = zip;
}

void Address::printAddress() const {
    std::cout << street << std::endl;
    std::cout << city << " " << state << ", " << zip << std::endl;
}


