#include <iostream>
#include "world.h"

int main() {
    World& world = World::instance();
    Country* scotland = world.getCountry("Scotland");
    Country* catalonia = world.getCountry("Catalonia");
    Country* england = world.getCountry("England");
    Country* spain = world.getCountry("Spain");

    Union* eu = world.getUnion("European Union");

    spain->detachCountry(catalonia);
    england->detachCountry(scotland);

    eu->attachCountry(catalonia);
    eu->attachCountry(scotland);

    std::cout << world.giveSupport() << std::endl;
    return 0;
}