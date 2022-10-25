#include <iostream>
using namespace std;

int main() { 
  int nIntero;
  int nPrecedente;
  int nSuccessivo;
  cout << "Benvenuto nel contatore di numeri precedenti e successivi :-)" << endl;
  cout << "Inserisci qualsiasi numero tu voglia...: ";
  cin >> nIntero;
  nPrecedente = nIntero - 1;
  nSuccessivo = nIntero + 1;
  cout << "Il numero precedente e' " << nPrecedente << endl;
  cout << "Il numero successivo e' " << nSuccessivo << endl;
}
