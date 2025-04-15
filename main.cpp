#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"

using namespace std;

int main() {
    cout << "=== TEST CLASSE BASE: Quadrilateral ===" << endl;

    // Creo un quadrilatero di default (1x1 con angoli 90°)
    Quadrilateral q1;
    q1.Dump();

    // Modifico direttamente i dati tramite Init personalizzato
    cout << "\n--- Modifica quadrilatero ---" << endl;
    Quadrilateral q2 = q1;
    q2.Reset(); // azzera tutto
    q2.Dump();

    cout << "\n=== TEST CLASSE DERIVATA: Rectangle ===" << endl;

    // Rettangolo 3x5
    Rectangle r1(3.0f, 5.0f);
    r1.Dump();

    // Rettangolo con SetDim
    cout << "\n--- Rettangolo modificato ---" << endl;
    Rectangle r2;
    r2.SetDim(2.0f, 4.0f);
    r2.Dump();

    // Confronto tra r1 e r2
    cout << "\n--- Confronto r1 e r2 ---" << endl;
    if (r1 == r2) {
        cout << "I due rettangoli sono uguali." << endl;
    } else {
        cout << "I due rettangoli sono diversi." << endl;
    }

    // Uso dei setter individuali
    cout << "\n--- Impostazione larghezza e altezza separatamente ---" << endl;
    r2.SetWidth(3.0f);
    r2.SetHeight(5.0f);
    r2.Dump();

    cout << "\n--- Dopo modifica, r1 e r2 sono uguali? ---" << endl;
    if (r1 == r2) {
        cout << "Ora i rettangoli sono uguali!" << endl;
    } else {
        cout << "Ancora diversi." << endl;
    }

    // Area e perimetro
    cout << "\nArea di r1: " << r1.GetArea() << endl;
    cout << "Perimetro di r1: " << r1.GetPerimeter() << endl;

    return 0;
}

// #include <iostream>
// #include "CRectangle.h"

// int main(int argc, char const *argv[])
// {
//     float area;
//     float a0, a1, a2, a3;
//     Quadrilateral* A;
//     Rectangle r1;
//     Rectangle r2(1, 7);

//     A = &r1;

//     A->Dump();
//     r1.Dump();

//     area = r1.GetArea();
//     std::cout << "Area of r1: " << area << std::endl;

//     r1=r2;

    
    
//     return 0;
// }
