#include <iostream>
using namespace std;
int main()
{
    //declaración de variables
    int n=5, i,*p;

    p=&n;
    *p=53;
    

    if(n==1)  //si se lee un 1, se imprime directamente que no es primo                                           
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;          //i es el divisor
        while(n%i!=0) //mientras el número sea divisible por el divisor
        {
            i++;      //siguiente divisor
        }
        //cuando sale del while, si el divisor es el propio número
        //entonces el número es primo
        if(i==n)      
            cout << "\nPrimo" << endl;  
        else
            cout << "\nNo es primo" << endl; 
    }

    cout<<p;

    return 0;
}