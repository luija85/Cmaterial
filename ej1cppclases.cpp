#include <iostream>
using namespace std;

class listaNumeros{
private:
    int num;
    int lista[100];
  
  public:
    int agregarNumero(int val);
    int extraerNumero(int ind);
    int numeroNumeros(void);
    listaNumeros(void);
};
  //constructor de la clase… en breve se verá su utilidad
  listaNumeros::listaNumeros(void){
  num=0;
}

int listaNumeros::agregarNumero(int val){
  if(num<100)lista[num++]=val;
  else return -1;
    return num;
}

int listaNumeros::extraerNumero(int ind){
  if((ind<num)&&(ind>=0))return lista[ind];
  return 0;
}

int listaNumeros::numeroNumeros(){
  return num;
}

int main(){
  listaNumeros milista;
  int i,val=1;
  
  while(val!=0){
  cout<<"introduzca un numero (finalizar con 0):";
  cin>>val;
    if(val!=0)val=milista.agregarNumero(val);
  }
  
  cout<<"\nLa lista de numeros es la siguiente:\n";
  for(i=0;i<milista.numeroNumeros();i++)
    cout<<milista.extraerNumero(i)<<" ";
  cout<<"\n*********FIN DEL PROGRAMA**********\n";
  
  return 0;
}
