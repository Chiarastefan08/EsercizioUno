#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    //crea un vettore
    int numeri[10] = {20, 50, -10, -40, 80, -30, 70, 55, 75, 5};
    int q = 0;
    int multipli = 0;
    bool negativi = false;

    //ordina il vettore
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (numeri[i] > numeri[j]) {
                q = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = q;
            }
        }
    }

    //conta i multipli
    for (int i = 0; i < 10; i++) {
        std::cout<<numeri[i]<<std::endl;
        if (numeri[i] % 10 == 0) {
            multipli++;
        }
        //verifica i valori non negativi
        if (numeri[i] < 0) {
            negativi = true;

        }
    }
    //come scrivere negativi == true
    if (negativi) {
        std::cout << "ci sono negativi" << std::endl;
    }

    return 0;
}


