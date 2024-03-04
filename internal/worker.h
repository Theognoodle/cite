

#ifndef WORKER_H
#define WORKER_H

#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

class worker {
    public:
        bool active;
        std::string target;
        void insert();
        void del();
        void pushrow();
        void changeTarget();




};


#endif
