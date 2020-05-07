#include <iostream>
#include <libtcod/libtcod.hpp>


int main() {
    TCODConsole::initRoot(80, 50, "Carbon Rain", false);
    while ( !TCODConsole::isWindowClosed() ) {
        TCOD_key_t key;
        TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, &key, NULL);
        TCODConsole::root->clear();
        TCODConsole::root->putChar(40, 25, '@');
        TCODConsole::flush();
    }
    return 0;
}



