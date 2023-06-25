#include <stdio.h>
#include <iostream>
#include "../Render/Render.h"

using namespace std;

int main() {

    Render* rn = new Render();

    std::cout << rn->getId();

}
