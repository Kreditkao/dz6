#include <iostream>

// Базовий клас Animal
class Animal {
public:
    virtual void makeSound() const = 0; // Віртуальна функція makeSound
};

// Простір імен Animals
namespace Animals {
    // Клас Dog у просторі імен Animals
    class Dog : public Animal {
    public:
        void makeSound() const override {
            std::cout << "Woof!" << std::endl;
        }
    };

    // Простір імен Wild у просторі імен Animals
    namespace Wild {
        class Lion : public Animal {
        public:
            void makeSound() const override {
                std::cout << "Roar!" << std::endl;
            }
        };
    }
}

// Простір імен Birds
namespace Birds {
    class Sparrow : public Animal {
    public:
        void makeSound() const override {
            std::cout << "Chirp!" << std::endl;
        }
    };

    // Простір імен Domestic у просторі імен Birds
    namespace Domestic {
        class Parrot : public Animal {
        public:
            void makeSound() const override {
                std::cout << "Squawk!" << std::endl;
            }
        };
    }
}

int main() {
   
    Animals::Dog dog;
    Animals::Wild::Lion lion;
    Birds::Sparrow sparrow;
    Birds::Domestic::Parrot parrot;

 
    dog.makeSound();
    lion.makeSound();
    sparrow.makeSound();
    parrot.makeSound();

    return 0;
}
