#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
    
    int res=0;
    double a=0.0,b=0.0,c=0.0,uno=0.0,dos=0.0;
    cout<<"resolucion de segundo grado\n";
    
    do{
    cout<<"primer valor (a)";
    cin>>a;
    cout<<"segundo valor (b)";
    cin>>b;
    cout<<"tercer valor (c)";
    cin>>c;
    
    uno=(-b+sqrt(b*b-4.0*a*c))/2.0*a;
    dos=(-b-sqrt(b*b-4.0*a*c))/2.0*a;
    
    cout<<"Primer resultado x1="<<uno<<"\n";
    cout<<"Segundo resultado x2="<<dos<<"\n\n";
    
    cout<<"Deseas intentarlo de nuevo? si=1/no=2\n";
    cin>>res;
    }while(res==1);
    
}
