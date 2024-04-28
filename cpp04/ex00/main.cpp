#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	{
		const Animal* a1 = new Animal();
		const Animal* c1 = new Cat();
		const Animal* d1 = new Dog();

		a1->makeSound();
		c1->makeSound();
		d1->makeSound();
		delete(a1);
		delete(c1);
		delete(d1);
	}
	{
		const WrongAnimal* a1 = new WrongAnimal();
		const WrongAnimal* c1 = new WrongCat();
		const WrongAnimal* d1 = new WrongDog();

		a1->makeSound();
		c1->makeSound();
		d1->makeSound();
		delete(a1);
		delete(c1);
		delete(d1);
	}
	return (0);
}
