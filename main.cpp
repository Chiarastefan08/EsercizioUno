#include <iostream>
#include <array>
#include<algorithm>
#include <vector>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    //crea un vettore
    int numeri[10] = {20, 50, -10, -40, 80, -30, 70, 55, 75, 5};
    int q = 0;
    int multipli = 0;
    bool negativi = false;
    std::array<int, 10> arrayCpp = {20, 50, -10, -40, 80, -30, 70, 55, 75, 5};
    std::sort(arrayCpp.begin(), arrayCpp.end());
    std::vector vectorCpp = {20, 50, -10, -40, 80, -30, 70, 55, 75, 5};
    vectorCpp.push_back(-100);
    std::vector vectorCpp2(arrayCpp.begin(), arrayCpp.end());

    std::sort(vectorCpp.begin(), vectorCpp.end());
    std::reverse(vectorCpp.begin(), vectorCpp.end());
    vectorCpp.pop_back();

    //funzione anonima
    auto risultato = std::find_if(vectorCpp.begin(), vectorCpp.end(),[](int x) {
        if (x == 50)
            return true;
        return false;
    });
    //find_if fa un ciclo fino a end e dentro al parametri che gli passo c'è un numero fino alla quale deve arrivare
    //sarebbe come if(x == 50) return true; return false;
;
    int numeroDaPassare;
    std::cout<<"inserisci numero"<<std::endl;
    std::cin>>numeroDaPassare;
    //VOGLIO PASSARGLIIL N UMERO DA CERCARE
    auto risultato = std::find_if(vectorCpp.begin(), vectorCpp.end(),[numeroDaPassare](int x) {
        if (x == numeroDaPassare)
            return true;
        return false;
    });
    std::cout << *risultato << std::endl;
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
    for (int i = 0; i < vectorCpp.size();i++) {
        std::cout<<arrayCpp[i]<<" ";
        std::cout<<vectorCpp[i]<<" ";
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


