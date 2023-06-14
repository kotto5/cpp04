#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
    Animal animal2 = animal;
    animal2 = animal;
    animal.makeSound();
}

void    test_pdf(){
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
}

void    test_wrongcat(){
    // 親クラスのmakesound()を仮想関数化してない場合
    {
        // base クラスで参照を受け取ると, 子クラスの関数のオーバーロードが反映されない
        const WrongAnimal &WrongCat1 = WrongCat();
        WrongCat1.makeSound();

        // delivered クラスなら反映される
        WrongCat    WrongCat;
        WrongCat.makeSound();
    }
    // 仮想化している場合 オーバーロードが反映される
    {
        const Animal &Cat1 = Cat();
        Cat1.makeSound();
    }
}

int main()
{
    test_animal();
    test_dog();

    test_dog_ref();
    test_Cat_ref();

    test_pdf();
    test_wrongcat();

    return (0);
}