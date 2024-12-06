#include <iostream>
using namespace std;

double valuta_polacca(string character)
{
    Coda<double> coda1;

    double val = 0;

    for (i=0; i<coda1.size(); i++)
    {
        char symbol=coda1[i];

        if (isdigit(symbol))
        {
            coda1.enqueue(symbol);
        }
        else
        {
            double numtop = coda1.front();
            coda1.dequeue();
            double numsuc = coda1.front();
            coda1.dequeue();

            double ris = 0;

            if (symbol == '+') {
                ris = numsuc + numtop;
            } else if (symbol == '-') {
                ris = numsuc - numtop;
            }

            coda1.enqueue(ris);
        }
    }
    
    return coda1.front();
}

int main() {

    Pila<int> pila1;
    Coda<int> coda1;

    cout<<"Ora verranno inseriti degli elementi casuali all'interno della pila"<<endl;
    pila1.push(5);
    pila1.push(7);
    pila1.push(13);

    cout<<"Rimozione e visualizzazione dell'elemento in cima: "<<pila1.pop()<<;

    cout<<"Visualizzazione dell'elemento in cima senza rimozione: "<<pila1.top()<<endl;

    cout<<"Lunghezza della pila: "<<pila1.size()<<endl;

    cout<<"PILA VUOTA: " <<(pila1.isEmpty() ? "Sì" : "No")<<endl;



    cout<<"Ora verranno inseriti degli elementi casuali all'interno della pila"<<endl;
    coda1.enqueue(24);
    coda1.enqueue(37);
    coda1.enqueue(39);

    cout<<"Elemento in testa alla coda: "<<coda1.front()<<endl;

    cout<<"Rimozione dell'elemento in testa alla coda e rimozione: "<<coda1.dequeue()<<endl;

    cout<<"Lunghezza della coda: "<<coda1.size()<<endl;

    cout<<"CODA VUOTA: "<<(coda1.isEmpty() ? "Sì" : "No") << std::endl;

    //esercizio 4
    string sentence="12+4-";

    double result = valuta_polacca(sentence);

    cout<<"Result: "<<result<<endl;


    return 0;
}
