#include "integer.h"
#include <iostream>
using namespace std;

int	main()
{
    Integer x;
    Integer b(4);
    Integer c(3);
    Integer d = c;
    cout<<d + b<< endl;
    cout<< (c^2) << endl;
    cout << (c^d) << endl;
    cin>>x;
    x*=b;
    cout<< x <<"\n";
}