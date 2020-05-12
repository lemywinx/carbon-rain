#include <iostream>
#include <libtcod/libtcod.hpp>
#include "actor.hpp"
#include "map.hpp"
#include "engine.hpp"


int main() {
    int playerx=40, playery=25;
    TCODConsole::initRoot(80, 50, "libtcod C++ tutorial", false);
    while ( !TCODConsole::isWindowClosed() ) {
        TCOD_key_t key;
        TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
        switch(key.vk) {
            case TCODK_UP : playery--; break;
            case TCODK_DOWN : playery++; break;
            case TCODK_LEFT : playerx--; break;
            case TCODK_RIGHT : playerx++; break;
            default:break;
        }
        TCODConsole::root->clear();
        TCODConsole::root->putChar(playerx, playery, '@');
        //TCODConsole::root->putChar(40, 25, '@'); Originally the hardcoded values
        TCODConsole::flush();
    }
    return 0;
}



