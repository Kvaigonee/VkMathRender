#include <stdio.h>
#include <iostream>
#include <Render.hpp>

using namespace std;

int main() {

    Render* rn = new Render();

    std::cout << rn->createWindow();

}
