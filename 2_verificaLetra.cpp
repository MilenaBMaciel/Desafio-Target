/*
    Autor: Milena Bueno Maciel
    Descrição: Verifica a existencia de uma letra na string recebida na entrada
*/
#include <iostream> 
using namespace std;
int main(){
    string palavra;
    cout << "Digite a string de entrada: " << endl;
    getline(cin, palavra);
    int contador=0;
    for(auto letra : palavra){
        if(letra == 'a' || letra == 'a'- 32) contador++; 
    }

    if(!contador) cout << "Letra nao encontrada" << endl;
    else cout << "Letra encontrada " << contador << " vezes" << endl;

    return 0;
}