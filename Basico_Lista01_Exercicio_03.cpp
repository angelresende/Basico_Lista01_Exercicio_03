#include <iostream>
#include <clocale> // setlocale
#include <cstdlib> // system
#include <string> // Textos em geral

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
    int op, cont=0, accnota=0;
    float nota, media, menorNota=99, maiorNota=-1;
    system("color 3");
    system ("cls");

    cout << fixed;
    
    do{
        cout << "\nInfome a nota: ";
        cin >> nota;
        accnota+=nota;
        cont ++;
        
        if (nota > maiorNota){
            maiorNota = nota;
        }

        if (nota < menorNota){
            menorNota = nota;
        }

        cout << "Deseja acrescentar mais notas? \n1 - Sim \n2 - Não \n";
        cin >> op;     


    } while (op==1);
    
    media = accnota/cont;
    cout << "A média das notas digitada é: " << media << endl;
    cout << "A maior das notas digitada é: " << maiorNota << endl;
    cout << "A menor das notas digitada é: " << menorNota << endl;

	system("pause");
	return 0;
}
