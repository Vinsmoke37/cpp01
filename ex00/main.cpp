#include "Zombie.hpp"

int main()
{
    Zombie *Zombie;

    Zombie = newZombie("Zombie1");
    (*Zombie).announce();
    delete Zombie;
    randomChump("hhhh");
}