#include <iostream>
using namespace std;

int main() {

  // Dichiarazione Variabili
  int annoNascita;
  string risposta1, risposta2, risposta3, risposta4, risposta5, risposta6, risposta7, risposta8, risposta9, risposta10;
  int risposteTotali;

  // Acquisizione Anno di Nascita
  cout << "Benvenuto nel test per la patente B." << endl;
  cout << "Buona Fortuna." << endl;
  cout << "Inserisci l'anno di nascita: ";
  cin >> annoNascita;

  // Controllo Anno di Nascita
  if (annoNascita < 2004) {

    // Prima Domanda
    cout << "\nOk possiamo iniziare.\n" << endl;
    cout << "Prima domanda." << endl;
    cout << "In autostrada puoi sorpassare indifferentemente a destra o a sinistra (vero/falso): ";
    cin >> risposta1;
    if (risposta1 == "falso") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Seconda Domanda
    cout << "Seconda domanda." << endl;
    cout << "Il rumore prodotto dai veicoli a motore è causato solo dal motore (vero/falso): "; 
    cin >> risposta2;
    if (risposta2 == "falso") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Terza Domanda
    cout << "Terza domanda." << endl;
    cout << "In presenza di un ferito in stato di shock, occorre fargli bere piccole quantita' di superalcolici (vero/falso): ";
    cin >> risposta3;
    if (risposta3 == "falso") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Quarta Domanda
    cout << "Quarta domanda." << endl;
    cout << "Si devono usare gli indicatori di direzione prima di ogni cambio di corsia, quando si viaggia su strada suddivisa in corsie (vero/falso): ";
    cin >> risposta4;
    if (risposta4 == "vero") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Quinta Domanda
    cout << "Quinta domanda." << endl;
    cout << "I guanti da motociclista possono avere imbottiture diverse a seconda della stagione (vero/falso): ";
    cin >> risposta5;
    if (risposta5 == "vero") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1; 
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Sesta Domanda
    cout << "Sesta domanda." << endl;
    cout << "La revoca della patente è disposta quando il conducente guida con patente scaduta di validita' (vero/falso): ";
    cin >> risposta6;
    if (risposta6 == "falso") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Settima Domanda
    cout << "Settima domanda." << endl;
    cout << "Su strade coperte di neve occorre evitare brusche accelerazioni (vero/falso): ";
    cin >> risposta7;
    if (risposta7 == "vero") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Ottava Domanda
    cout << "Ottava domanda." << endl;
    cout << "I caravan (roulottes) sono rimorchi destinati ai lavori agricoli (vero/falso): ";
    cin >> risposta8;
    if (risposta8 == "falso") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Nona Domanda
    cout << "Nona domanda." << endl;
    cout << "Il valore della distanza di sicurezza deve essere stabilito anche in base alle condizioni atmosferiche (vero/falso): ";
    cin >> risposta9;
    if (risposta9 == "vero") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }

    // Decima Domanda
    cout << "Decima domanda." << endl;
    cout << "In presenza di appositi segnali, il limite massimo di velocita' consentito nei centri abitati, su strade con particolari caratteristiche, può essere di 70 km/h (vero/falso): ";
    cin >> risposta10;
    if (risposta10 == "vero") {
      cout << "Risposta corretta :-)\n" << endl;
      risposteTotali += 1;
    } else {
      cout << "Risposta errata :-(\n" << endl;
    }
    
    // Risultato Finale Esame
    if (risposteTotali < 8) {
      cout << "Mi dispiace sei stato BOCCIATO :-(\n" << endl;
    } else {
      cout << "Complimenti sei stato PROMOSSO. Buona guida :-)\n" << endl;
    }
    
  // Età Candidato inferiore ai 18 anni  
  } else {
    cout << "\nMi dispiace, non hai l'età per effettuare l'esame.\n" << endl;
  }

  // Firma Ideatore Progetto
  cout << "By Davide Attene.\n" << endl;
}
