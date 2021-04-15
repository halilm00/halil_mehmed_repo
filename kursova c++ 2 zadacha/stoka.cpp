#include <iostream>
#include "stoka.h"
#include <iomanip>

int Stoka::objectCount = 0;
Stoka::Stoka( string name, double quant, double sPrice)
                     :VidStoka(nameStoka)
{
    setNameStoka(name);
    setQuantity(quant);
    setSingularPrice(sPrice);
    objectCount++;
}

Stoka::~Stoka(){
    --objectCount;
    cout<<"Object "<< this->nameStoka<<" Destroyed!"<<endl;
}

void Stoka::setQuantity( double quant)
{
    quantity=quant;
}
void Stoka::setSingularPrice( double sPrice)
{
    singularPrice=sPrice;
}
double Stoka::getFullPrice() const
{
    return quantity*singularPrice;
}

Stoka Stoka::operator+(Stoka &newStoka){
    Stoka stoka("New Stoka",0.0,0.0);
    stoka.quantity= this->quantity + newStoka.quantity;
    stoka.singularPrice= (this->singularPrice + newStoka.singularPrice)/2.0;
    return stoka;
}
void Stoka::print()const{
    cout<<endl<<"Name: "<<nameStoka<<endl<<
                "Quantity: "<<quantity<<endl<<
                "Price for only one stock: "<<singularPrice<<endl;
}


ostream &operator<<( ostream &output, const Stoka &c )
{
   output << " Name = " << static_cast< VidStoka > ( c )
          << " Quantity = "
          << setiosflags( ios::fixed | ios::showpoint )
          << setprecision( 2 ) << c.quantity
          << " Price for one = "
          << setiosflags( ios::fixed | ios::showpoint )
          << setprecision( 2 ) << c.singularPrice;

   return output;
}

