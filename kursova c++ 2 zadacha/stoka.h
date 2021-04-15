#ifndef STOKA_H
#define STOKA_H
#include "vidStoka.h"

class Stoka : public VidStoka {
   friend ostream &operator<<( ostream &, const Stoka & );
public:
    static int objectCount;
   Stoka( string name,double =0.0, double =0.0  );
   ~Stoka();
   void setQuantity( double );
   double getQuantity() const{return quantity;}
   void setSingularPrice( double );
   double getSingularPrice() const {return singularPrice;}
   double getFullPrice() const;
   void operator --(){--quantity;}
   Stoka operator+(Stoka&);
   virtual void print()const;

protected:
   double quantity;
   double singularPrice;

};


#endif // STOKA_H

