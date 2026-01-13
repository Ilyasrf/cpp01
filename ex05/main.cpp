#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "--- Testing DEBUG ---" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\n--- Testing WARNING ---" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n--- Testing ERROR ---" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n--- Testing INVALID ---" << std::endl;
    harl.complain("I want a discount");

    return 0;
}