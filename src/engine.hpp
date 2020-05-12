#ifndef ENGINE_H
#define ENGINE_H

#include <libtcod/libtcod.hpp>

class Actor;
class Map;

class Engine {
    public :
        TCODList<Actor *> actors;
        Actor *player;
        Map *map;

        Engine();
        ~Engine();
        void update();
        void render();
};

extern Engine engine;

#endif
