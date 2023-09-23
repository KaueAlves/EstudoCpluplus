# Resumos e dicas

    // setw - Define quantidade de caracteres exibidos na saida
    #include <iomanip>
    using std::setw;
    ---
    cout << setw(10) << 120; 

---
    // rand - Seleciona numeros aleatórios, de 1 ao numero definido após o %
    #include <cstdlib>
    using std::rand;
    ---
    int randomizarInt(int x){
        return (1+rand() % x);
    }
----
    // Randomiza valores double
    #include <random>
    using std::uniform_real_distribution;
    ---
    double randomizarDouble(double x, double y)
    {
        std::random_device rd;
        std::default_random_engine generator(rd());  
        uniform_real_distribution<double> distribution(x,y);
        return distribution(generator);
    }

