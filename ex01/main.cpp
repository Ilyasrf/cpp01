#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie* myHorde = zombieHorde(N, "Horde_Member");

        for(int i = 0; i < N; i++) {
            std::cout << i << ": ";
            myHorde[i].announce();

        }
        delete[] myHorde;
    return 0;
}