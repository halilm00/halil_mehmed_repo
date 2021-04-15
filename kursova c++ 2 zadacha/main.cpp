#include <iostream>
#include "thing.h"
#include "vidStoka.h"
#include "stoka.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Stoka econdStoka("blluminium",5.0,6.0);
    Stoka firstStoka("Steel",6.0,3.0);

    firstStoka.print();

    cout<<endl<<"Full price: ";
    cout<< firstStoka.getFullPrice()<<endl;

    Stoka secondStoka("Alluminium",5.0,6.0);

    cout<<firstStoka+secondStoka<<endl;




    return 0;
}
