#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    
   /*defino mis variables e inicializo*/
    
    float x;
    int i=0;
    float y ;
    int j=0;
    float print;
    
    float* x_p=new float[20];
   
    float* y_p=new float[20];
    
    /*Abrimos x */
    
    ifstream abrox;
    abrox.open("valores_x.txt");
    
    
    /*los asigno a un array*/
    
    while (abrox >> x) {
    x_p[i]=x;
    i+=1;
}
    abrox.close();
    
     /*Abrimos y */
    
    ifstream abroy;
    abroy.open("valores_y.txt");
   
    
    /*los asigno a un array*/
    
    while (abroy >> y) {
    y_p[j]=y;
    j+=1;
}
    abroy.close();
   
    /*Imprimo resultado*/
    
    for(int k=0;k<20;k++){
        print=x_p[k]*y_p[k];
        cout << print << endl;
    }
    
    
    
    
    
    return 0;
}