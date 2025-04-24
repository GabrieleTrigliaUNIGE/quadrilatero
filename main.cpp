#include <iostream>
#include "CRectangle.h"

int main(int argc, char const *argv[])
{
    Quadrilateral* A;
    Rectangle r1;
    Rectangle r2(1, 7);

    A = &r2;

    std::cout << "Area: " << A->GetArea() << std::endl;

    A->Dump();
    r2.Dump();
}

// todo: aggiungere rombo
