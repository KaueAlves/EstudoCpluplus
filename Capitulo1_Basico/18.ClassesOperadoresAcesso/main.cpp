#include <iostream>
using std::cout;
using std::endl;

class Count
{
private:
    /* data */
    int x;
public:
    Count(/* args */){
        x = 0;
    }
    void set(int value){
        x = value;
    }
    void print(){
        std::cout << x << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    Count counter; // Cria o objeto counter
    Count *CountPtr = &counter; // Cria o ponteiro para counter
    Count &CountRef = counter; // Cria referencia para counter

    cout << "Defina X como 1 usando o nome do objeto" << endl;
    counter.set(1);
    counter.print();
    cout << endl;

    cout << "Defina X como 1 a referencia de counter" << endl;
    CountRef.set(2);
    CountRef.print();
    cout << endl;

    cout << "Defina X como 1 usando o nome do objeto" << endl;
    CountPtr->set(3);
    CountPtr->print();
    cout << endl;

    return 0;
}
