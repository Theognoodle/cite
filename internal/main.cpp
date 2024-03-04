// CITE

#include "Tutorial.h"
#include "KiSHLib.h"
#include "worker.h"
using namespace std;



int main() {
    bool active = true;
    while(active = true) {
        int command = 0;
        worker workerInit;
        std::cout << "Select Function: \n[1] Insert Row \n[2] Insert String \n[3] Delete String\n[4] Change Target \n\n$>";
         switch (command) {
             case 1:
                 workerInit.pushrow();
                 break;
             case 2:
                 workerInit.insert();
                 break;
             case 3:
                 workerInit.del();
                 break;
             case 4:
                 std::cout << "";
         }
    }


}
