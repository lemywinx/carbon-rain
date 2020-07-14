#ifndef ACTOR_H
#define ACTOR_H
#include <libtcod/libtcod.hpp>
//TEST
class Actor {
    public :
        int x, y; //position on map
        int ch; //ascii code
        TCODColor col; // color
        const char *name; // the actor's name


        Actor(int x, int y, int ch, const char *name, const TCODColor &col);
        void update();
        bool moveOrAttack(int x, int y);
        void render() const;
};

#endif
