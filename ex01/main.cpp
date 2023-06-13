#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void    test_pdf(){
    {
        // const Animal* j = new Dog();
        // const Animal* i = new Cat();
        Dog* j = new Dog();
        j->setBrain();
        j->printBrain();
        // Cat* i = new Cat();
        // delete j;
        // delete i;
    }
}

int main()
{
    test_pdf();

    return (0);
}
