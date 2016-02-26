#ifndef __PHYSISCS_H__
#define __PHYSISCS_H__

#include <allegro5/allegro.h>
#include "game.h"

struct Vec {
    double x;
    double y;
};

struct Movil {
    struct Vec a;
    struct Vec v;
    struct Vec r;
    //ALLEGRO_BITMAP *bouncer;
};

extern void update_physics(bool keys[4], struct Movil *nave);
extern void init(ALLEGRO_BITMAP *bouncer, struct Movil *nave);

#endif
