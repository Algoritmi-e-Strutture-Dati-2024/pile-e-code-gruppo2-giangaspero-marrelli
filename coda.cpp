#include <iostream>
using namespace std;

template <typename T>
class Coda
{

  private:
    ListaPuntatori<T> list2;



  public:
    void enqueue(const T& elem)
    {
        list2.inslista(elem, list2.lunghezza()+1);
    }
    
    dequeue()
    {
        if (list2.listavuota())
        {
            cout<<"La coda è vuota, non è possibile effettuare l'operazione"<<endl;
            return 1;
        }

        T elem=list2.leggilista(1);
        list2.canclista(1);              
        return elem; 
    }

    T front() const
    {
        if (list2.listavuota())
        {
            cout<<"La coda è vuota, non è possibile effettuare l'operazione"<<endl;
            return T();
        }

        return list2.leggilista(1); 
    }

    bool isEmpty() const
    {
        return list2.listavuota();
    }

    int size() const
    {
        return list2.lunghezza();
    }

};
