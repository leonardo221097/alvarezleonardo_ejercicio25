#include <iostream>


float matriz[0][0];


int main()
{
 int x;
 
    std::cout << "escribe un numero de 3 a 11"  << std::endl;
    std::cin >>x;
    if(x<3){
        std::cout << "el valor no se encuentra dentro del rango de 3 a 11"  << std::endl;
    }
    else if(x>11){
        std::cout << "el valor no se encuentra dentro del rango de 3 a 11"  << std::endl;
    }
    else{
    int columnas=x;
        int filas=x+2;
    matriz[filas][columnas] ;
        
    }
    
   
  
    
    return 0;
}

int relleno(int m){
    for (int i=0;i<m+2;i++)
    {
      for (int j=0;j<m;j++) {
          matriz[i][j] =i+j;
          
      }
    }
    
   
}
