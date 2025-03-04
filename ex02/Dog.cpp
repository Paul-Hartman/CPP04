/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:43 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 14:35:36 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain()){
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog &other){
	std::cout << "Dog copy constructor" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog assignation operator" << std::endl;
	if(this != &other){
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
	delete _brain;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const{
	return _brain;
}