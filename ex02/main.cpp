#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <stdlib.h>

void    test_leak(){
    int* leakyArray = new int[1000000000]; // Allocate 1 million integers    std::cout << "Leaky int: " << *leakyInt << std::endl;
    std::cout << leakyArray[0] << std::endl;
}

void    test_pdf(){
    {
        Dog* j = new Dog();
        j->setBrain();
        j->printBrain();
        delete j;
    }
    {
        Cat* j = new Cat();
        j->setBrain();
        j->printBrain();
        delete j;
    }
}

void    testBaseRef(void){
    {
        Dog* j = new Dog();
        j->setBrain();
        Animal  *DogPtr = j;
        DogPtr->makeSound();
        delete DogPtr;
        // j->printBrain(); // 実行できたりするが、heap use after free.
        // delete j;
    }
}

void    testLostBrainDog(){
    Dog* j = new Dog();
    j->printBrain();
    j->setBrain();
    {
        Dog i = *j;
        std::cout << "2!\n";
        i.printBrain();
    }
    j->printBrain();
    delete j;
}

void    testLostBrainCat(){
    Cat* j = new Cat();
    j->printBrain();
    j->setBrain();
    {
        Cat i = *j;
        std::cout << "2!\n";
        i.printBrain();
    }
    j->printBrain();
    delete j;
}

void    testArray(){
    // Animal  *animals[10];
    Animal  **animals;
    animals = new Animal*[10];

    for (int i = 0; i < 5; i++){
        Dog *dog = new Dog();
        dog->setBrain();
        animals[i] = dog;
    }
    for (int i = 5; i < 10; i++){
        Cat *cat = new Cat();
        cat->setBrain();
        animals[i] = cat;
    }
    for (int i = 0; i < 10; i++){
        delete animals[i];
    }
    delete[] animals;
}

void    test_localy(){
    {
        Dog dog1 = Dog();
        Dog dog2 = dog1;
    }
}

void    testAnimalInstance(){
    // Animal  animal;
}

int main()
{
    test_pdf();
    testBaseRef();
    testLostBrainDog();
    testLostBrainCat();
    testArray();
    test_localy();
    // testAnimalInstance();

    if (system("leaks exefile"))
        return (2);
    return (0);
}
