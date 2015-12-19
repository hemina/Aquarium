#ifndef _GROUPEBESTIOLES_H_
#define _GROUPEBESTIOLES_H_


#include "UImg.h"

#include <iostream>

using namespace std;


class Milieu;


class GroupeBestiole: public Bestiole
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
   GroupeBestiole( void );                               // Constructeur par defaut
   GroupeBestiole( const GroupeBestiole & b );                 // Constructeur de copies
   ~GroupeBestiole( void );                              // Destructeur
                                                   // Operateur d'affectation binaire par defaut
   void action( Milieu & monMilieu );
   void draw( UImg & support );

   bool jeTeVois( const GroupeBestiole & b ) const;

   void initCoords( int xLim, int yLim );

   friend bool operator==( const GroupeBestiole & b1, const GroupeBestiole & b2 );

};


#endif
