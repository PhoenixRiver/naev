/*
 * See Licensing and Copyright notice in naev.h
 */



#ifndef WEAPON_H
#  define WEAPON__H


#include "outfit.h"
#include "physics.h"


/**
 * @enum WeaponLayer
 * @brief Designates the layer the weapon is on.
 * Automatically set up on creation (player is front, rest is back).
 */
typedef enum { WEAPON_LAYER_BG, WEAPON_LAYER_FG } WeaponLayer;


/*
 * addition
 */
void weapon_add( const Outfit* outfit,
      const double dir, const Vector2d* pos, const Vector2d* vel,
      const unsigned int parent, const unsigned int target );


/*
 * Beam weapons.
 */
int beam_start( const Outfit* outfit,
      const double dir, const Vector2d* pos, const Vector2d* vel,
      const unsigned int parent, const unsigned int target );
void beam_end( const unsigned int parent, int beam );


/*
 * Misc stuff.
 */
void weapon_explode( double x, double y, double radius,
      DamageType dtype, double damage,
      unsigned int parent, int mode );


/*
 * update
 */
void weapons_update( const double dt );
void weapons_render( const WeaponLayer layer );


/*
 * clean
 */
void weapon_clear (void);
void weapon_exit (void);


#endif /* WEAPON_H */

