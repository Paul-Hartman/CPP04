/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:43 by phartman          #+#    #+#             */
/*   Updated: 2025/02/27 15:44:09 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << BLUE << "Dog default constructor" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &other){
	std::cout << BLUE << "Dog copy constructor" << std::endl;
	_brain = new Brain(*other._brain);
	*this = other;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << BLUE <<  "Dog assignation operator" << std::endl;
	if(this != &other){
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog(){
	std::cout << BLUE <<  "Dog destructor" << std::endl;
	delete _brain;
}

void Dog::makeSound() const{
	std::cout << BLUE <<  "Woof" << std::endl;
}

Brain* Dog::getBrain() const{
	return _brain;
}