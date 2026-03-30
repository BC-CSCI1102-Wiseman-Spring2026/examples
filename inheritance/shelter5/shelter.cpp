#include <iostream>
#include <cstdlib>
#include "pet.hpp"
#include "cat.hpp"
#include "dog.hpp"
using namespace std;

int main() {
    pet p("birdie", 5);
    cout << p << endl;
    p.play();
    p.speak();
    p.eat();

    return 0;
}

