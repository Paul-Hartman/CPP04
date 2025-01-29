/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:12 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 14:08:34 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void testDeepCopy() {
    Dog originalDog;
    originalDog.getBrain()->ideas[0] = "Original Dog Idea 1";
    originalDog.getBrain()->ideas[1] = "Original Dog Idea 2";

    Dog copiedDog = originalDog; // Copy constructor

    // Modify the original dog's brain
    originalDog.getBrain()->ideas[0] = "Modified Dog Idea 1";

    std::cout << "Original Dog Brain Idea 0: " << originalDog.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Dog Brain Idea 0: " << copiedDog.getBrain()->ideas[0] << std::endl;

    Cat originalCat;
    originalCat.getBrain()->ideas[0] = "Original Cat Idea 1";
    originalCat.getBrain()->ideas[1] = "Original Cat Idea 2";

    Cat copiedCat = originalCat; // Copy constructor

    // Modify the original cat's brain
    originalCat.getBrain()->ideas[0] = "Modified Cat Idea 1";

    std::cout << "Original Cat Brain Idea 0: " << originalCat.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Cat Brain Idea 0: " << copiedCat.getBrain()->ideas[0] << std::endl;
}


int main()
{
	// int totalAnimals = 20;
	// Animal* animals[totalAnimals];

	// for(int i = 0; i < totalAnimals; i++){
	// 	if(i % 2 == 0)
	// 		animals[i] = new Dog();
	// 	else
	// 		animals[i] = new Cat();
	// }
	
	// for(int i = 0; i < totalAnimals; i++){
	// 	animals[i]->makeSound();
	// 	delete animals[i];
	// }

	testDeepCopy();
	return 0;
}
