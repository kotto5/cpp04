#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void    test_animal(){
    std::cout << COLOR_YELLOW << "Test Animal" << COLOR_DEF << std::endl;
    Animal animal;
}

void    test_dog(){
    std::cout << COLOR_YELLOW << "Test Dog" << COLOR_DEF << std::endl;
    Dog dog;
    dog.makeSound();
}

/// If you want to use a reference or a pointer to an Animal, 
// you need to declare the methods in Animal as virtual.

void    test_dog_ref(){
    std::cout << COLOR_YELLOW << "Test Dog ref" << COLOR_DEF << std::endl;
    const Animal &animal = Dog();
    animal.makeSound();

    const Animal animal2 = Animal();
    animal2.makeSound();
}

void    test_Cat_ref(){
    std::cout << COLOR_YELLOW << "Test Cat ref" << COLOR_DEF << std::endl;
    const Animal &animal = Cat();
    animal.makeSound();
}

int main()
{
    // test_animal();
    // test_dog();


    test_dog_ref();
    test_Cat_ref();
    return (0);
}