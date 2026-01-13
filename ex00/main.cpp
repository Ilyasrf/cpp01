#include "Zombie.hpp"

int main(void) {
    std::cout << "--- Creating a zombie on the Stack ---" << std::endl;
    randomChump("Stack_Zombie");

    std::cout << std::endl;
    std::cout << "--- Creating a zombie on the Heap ---" << std::endl;
    Zombie* heapZombie = newZombie("Heap_Zombie");

    heapZombie->announce();

    delete heapZombie;
    return 0;
}