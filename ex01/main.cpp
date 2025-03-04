/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 13:43:14 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void testDeepCopy() {
	Dog a;
	Dog b(a);
	Dog c = a;
	Dog d;
	d = a;
	
	std::cout << "a: " << a() << std::endl;
	std::cout << "b: " << b.getBrainAddress() << std::endl;
	std::cout << "c: " << c.getBrainAddress() << std::endl;
	std::cout << "d: " << d.getBrainAddress() << std::endl;	
}


int main()
{
	int totalAnimals = 4;
	Animal* animals[totalAnimals];

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
