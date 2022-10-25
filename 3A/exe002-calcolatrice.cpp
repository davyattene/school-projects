#include <iostream>
using namespace std;

int main() {
  
	float primoNumero, secondoNumero, addizione, sottrazione, moltiplicazione, divisione, percentualeUno, percentualeDue;
	int percDaEsprimereUno, percDaEsprimereDue;

  // Primo Numero
  cout << "Benvenuto nel mio calcolatore :-) " << endl;
  cout << "Digita il primo numero...: ";
  cin >> primoNumero;

  // Secondo Numero
  cout << "Digita il secondo numero...: ";
  cin >> secondoNumero;

  // Percenruale Primo Numero
  cout << "Digita la percentuale da esprimere per il primo numero...: ";
  cin >> percDaEsprimereUno;

  // Percenruale Secondo Numero
  cout << "Digita la percentuale da esprimere per il secondo numero...: ";
  cin >> percDaEsprimereDue;

  // Calcoli
  addizione = primoNumero + secondoNumero;
  sottrazione = primoNumero - secondoNumero;
  moltiplicazione = primoNumero * secondoNumero;
  divisione = primoNumero / secondoNumero;
  percentualeUno = primoNumero * percDaEsprimereUno / 100;
  percentualeDue = secondoNumero * percDaEsprimereDue / 100;

  // Risultato
  cout << "Ecco i tuoi risultati: " << endl;
  cout << " - Addizione: " << addizione << endl;
  cout << " - Sottrazione: " << sottrazione << endl;
  cout << " - Moltiplicazione: " << moltiplicazione << endl;
  cout << " - Divisione: " << divisione << endl;
  cout << " - Percentuale Primo Numero: " << percentualeUno << endl;
  cout << " - Percentuale 2: " << percentualeDue << endl;
  cout << "Grazie per avermi utilizzato :-) " << endl;
}
