// pre-processor directives
#include <iostream>
#include <iomanip>

// create macro values (constants)
#define STOP 0
#define START 10

// create macro expressions (constants)
#define CONDITION(i) (i > STOP)

// use C++ standard library namespace
using namespace std;

// this function uses a while loop to display a
// countdown to stdout
void loops1(void) {
    // declare and initialize a counter variable
    // for our loop
    int i = START;

    // set up while loop using macro expression
    // as its condition
    while(CONDITION(i)){
        //printf("%d ", i);
        cout << i << " ";
        i--;
    }
    //printf("blastoff\n");
    cout << "blastoff" << endl;
}

// this function uses a do-while loop to display a
// countdown to stdout