#ifndef VIDSTOKA_H
#define VIDSTOKA_H
#include "thing.h"
using namespace std;

class VidStoka : public Thing {
   friend ostream &operator<<( ostream &, const VidStoka & );
public:
   VidStoka( string name );
   ~VidStoka();
   void setNameStoka( string name );
   string getNameStoka() const { return nameStoka; }
   virtual void print() const;

protected:
   string nameStoka;


};
#endif

