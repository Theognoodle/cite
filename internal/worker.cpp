//
// Created by TheOgNoodle on 2/29/2024.
//

#include "worker.h"
#include <fstream>
#include <iostream>
#include <ostream>
#include <ctime>
#include <string>

void worker::pushrow() {
    std::fstream keyFile(worker::target);
    std::string baseRow;
    std::string midRow;
    std::string topRow;
    std::cout << "Insert String\n";
    std::cin >> baseRow;
    std::cin >> midRow;
    std::cin >> topRow;
    //this is an awful way of doing this
    keyFile << baseRow << midRow << topRow;
    std::cout << "/n";
    keyFile.close();
    baseRow = "";
    midRow = "";
    topRow = "";
}

void worker::insert() {
    std::fstream keyFile(worker::target);
    std::string base;
    std::cout << "String To Insert\n$ ";
    std::cin >> base;
    keyFile << base;
    keyFile.close();
    base = "";
}

void worker::del() {
    std::cout << "WIP";
}

