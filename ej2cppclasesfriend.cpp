#include <iostream>

using namespace std;

class A{
  public:
    A(int i) {a=i;};
    void Ver() { cout << a << endl; }
  
  private:
    int a;
    friend void Visualiza(A); //Visualiza es amiga de la clase A
};


// La función Visualiza puede acceder a miembros privados
// de la clase A, ya que ha sido declarada "amiga" de A
void Visualiza(A Xa){
  cout << Xa.a << endl;
}


int main(){
  A Na(10);
  Visualiza(Na); // imprime el valor de Na.a
  Na.Ver(); // Equivalente a la anterior

return 0;
}
