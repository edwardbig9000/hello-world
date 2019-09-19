
////////////////////////////////////////////////////
//code by                                         //  
//Edward Emil Suriel                              //
//ID:1066584                                      //  
//Email: emilsurielp@gmail.com                    //
////////////////////////////////////////////////////

#include <iostream>
#include <math.h>
using namespace std;


int main() {
	
	float lecturas[7]={5,4,89,16,-4,-12,-13.8}; // declaro matriz
    unsigned long suma=0; // variable para la suma de los cuadrados
    float rms =0;    // varible para la media de cuadrados

   
    for(int j=0;j<7;j++)     
  {    
    suma=suma+pow((lecturas[j]),2);  // calcula la suma de los cuadrados
  }
 rms=sqrt((suma/7)); 
cout<<"El valor RMS es:\n"<<rms<<"\n";


}
