#include <iostream>
using namespace std;

template <typename T>
class Pila
{
  private:
    ListaPuntatori<T> list1;

  public:

    void push(const T elem)
    {
        list1.inslista(elem, 1);
    }

    pop()
    {
        if (list1.listavuota())
        {
            cout<<"La pila è vuota. Non è possibile effettuare l'operazione"<<endl;
            return 1;
        }

        T elem=list1.leggilista(1);
        list1.canclista(1);              
        return elem; 
    }

    T top() const
    {
        if (list1.listavuota())
        {
            cout<<"La pila è vuota. Non è possibile effettuare l'operazione"<<endl;
            return T();
        }
        return list1.leggilista(1);
    }

    
    bool isEmpty() const
    {
        return list1.listavuota();
    }

    int size() const
    {
        return list1.lunghezza();
    }

};
