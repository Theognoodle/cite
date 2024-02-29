//
// Created by TheOgNoodle on 2/19/2024.
//

#ifndef KISH_TUTORIAL_H
#define KISH_TUTORIAL_H

#include <iostream>
#include <fstream>

namespace std {

    class Tutorial {
    public:
        bool handler;
        // This is a really bad way of doing this
        bool instanceExists = false;

        void begin() {
            int temp = 0;
            cout << "Welcome To The CITE Tutorial (Press Enter To Continue)";
            cin >> temp;
            cout << "Cite stands for Cool Internal Text Editor";

        }



    };

} // std

#endif //KISH_TUTORIAL_H
