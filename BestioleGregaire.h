#ifndef _BESTIOLEGREGAIRES_H_
#define _BESTIOLEGREGAIRES_H_


#include "UImg.h"

#include <iostream>

using namespace std;


class Milieu;


class BestioleGregaire: public Bestiole
{

private :
   static const double     AFF_SIZE;
   static const double     MAX_VITESSE;
   static const double     LIMITE_VUE;

   static int              next;

private :
   int               identite;
   int               x, y;
   double            cumulX, cumulY;
   double            orientation;
   double            vitesse;

   T               * couleur;

private :
   void bouge( int xLim, int yLim );
   void clone();

public :                                           // Forme canonique :
   BestioleGregaire( void );                               // Constructeur par defaut
   BestioleGregaire( const BestioleGregaire & b );                 // Constructeur de copies
   ~BestioleGregaire( void );                              // Destructeur
                                                   // Operateur d'affectation binaire par defaut
   void action( Milieu & monMilieu );
   void draw( UImg & support );

   bool jeTeVois( const BestioleGregaire & b ) const;

   void initCoords( int xLim, int yLim );

   friend bool operator==( const BestioleGregaire & b1, const BestioleGregaire & b2 );

};


#endif
