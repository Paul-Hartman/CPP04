/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 14:00:13 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int totalAnimals = 20;
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
	return 0;
}
