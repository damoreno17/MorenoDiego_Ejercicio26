#include <iostream>
#include <fstream>
using namespace std;

/*En el caso del factorial debemos crear una variable que almacene y se vaya modificando para que multipique dicho valor almacenado por un indice*/

int main(){
     int numero;
     cout << "ingrese el numero al cual desea sacarle factorial" << endl;
     cin >> numero;
    
    int *factorial = new int[numero];  
    int counter=1;
    
    
    for(int i=0;i<numero;i++){
        if(i==0){
           factorial[0]=1;
        }
        else{
            counter=counter*i;
            factorial[i]=counter;
            
        }
    }
    /*imprimo resultado*/
    for(int j=0;j<numero;j++){
     cout << factorial[j] << endl;
     }
    
return 0;
}