#include <iostream>


namespace Universe {
   
    namespace Galaxy {
        
        void explore() {
            std::cout << "Exploring the Galaxy in the Universe namespace" << std::endl;
        }
    }
}

// Глобальна функція з таким самим іменем поза простором імен
void explore() {
    std::cout << "Exploring globally" << std::endl;
}

int main() {
    // Виклик глобальної функції
    ::explore(); 

    
    Universe::Galaxy::explore();

    
    using namespace Universe::Galaxy;

    
    Universe::Galaxy::explore();

    return 0;
}
