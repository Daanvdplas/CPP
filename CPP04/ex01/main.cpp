#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout << " -------making sounds ------ " << std::endl;
	Dog dog1;
	Dog dog2(dog1);

	dog1.makeSound();
	dog2.makeSound();

	Cat cat1;
	Cat cat2(cat1);

	cat1.makeSound();
	cat2.makeSound();

	std::cout << " ------making sounds from animal pointers ------- " << std::endl;
	const Animal* meta = new Animal();
   	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << " ------ deleting ------- " << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << " -------copying cat ideas------ " << std::endl;
	cat1.setIdea(0, "cat1 idea 1");
	cat1.setIdea(1, "cat1 idea 2");
	cat2.setIdea(0, "cat2 idea");
	Cat cat3(cat1);
	cat3.setIdea(1, "cat3 new idea!");
	Cat cat4 = cat1;
	cat4.setIdea(1, "cat4 new idea!");
	std::cout << cat1.getIdea(0) << std::endl;
	std::cout << cat1.getIdea(1) << std::endl;
	std::cout << cat2.getIdea(0) << std::endl;
	std::cout << cat3.getIdea(0) << std::endl;
	std::cout << cat3.getIdea(1) << std::endl;
	std::cout << cat4.getIdea(0) << std::endl;
	std::cout << cat4.getIdea(1) << std::endl;
	std::cout << " ------copying dog ideas------- " << std::endl;
	dog1.setIdea(0, "dog1 idea 1");
	dog1.setIdea(1, "dog1 idea 2");
	dog2.setIdea(0, "dog2 idea");
	Dog dog3(dog1);
	dog3.setIdea(1, "dog3 new idea!");
	Dog dog4 = dog1;
	dog4.setIdea(1, "dog4 new idea!");
	std::cout << dog1.getIdea(0) << std::endl;
	std::cout << dog1.getIdea(1) << std::endl;
	std::cout << dog2.getIdea(0) << std::endl;
	std::cout << dog3.getIdea(0) << std::endl;
	std::cout << dog3.getIdea(1) << std::endl;
	std::cout << dog4.getIdea(0) << std::endl;
	std::cout << dog4.getIdea(1) << std::endl;
}
