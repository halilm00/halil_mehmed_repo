#include <iostream>
#include "vidStoka.h"
using namespace std;

VidStoka::VidStoka(string name){
    name = nameStoka;
}
VidStoka::~VidStoka(){
    cout<<"Object Destroyed!"<<endl;
}
void VidStoka::setNameStoka(string name){
    nameStoka = name;
}

void VidStoka::print() const{
    cout<<endl<<"Name: "<<nameStoka<<endl;

}


ostream &operator<<( ostream &output, const VidStoka &p )
{
   output << '[' << p.nameStoka <<  ']';

   return output;
}


