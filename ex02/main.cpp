/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 15:01:39 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


void testDeepCopy() {
	Dog a;
	Dog b;
	b = a;
	
	std::cout << "a: " << a.getBrain() << std::endl;
	std::cout << "d: " << b.getBrain() << std::endl;
	a.getBrain()->ideas[0] = "new idea";
	std::cout << "First idea of brain a:" << a.getBrain()->ideas[0] << std::endl;
	std::cout << "First idea of brain b: " << b.getBrain()->ideas[0] << std::endl;
}


void subjectTest()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;
}

int main()
{

	subjectTest();
	int totalAnimals = 4;
	AAnimal* animals[totalAnimals];

	for(int i = 0; i < totalAnimals; i++){
		if(i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	for(int i = 0; i < totalAnimals; i++){
		animals[i]->makeSound();
		delete animals[i];
	}
	testDeepCopy();
	
	return 0;
}
