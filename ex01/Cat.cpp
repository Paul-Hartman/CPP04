/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:05 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 14:05:23 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	_brain = new Brain(*other._brain);
	*this = other;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat assignation operator" << std::endl;
	if(this!=&other){
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete _brain;
}

void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const{
	return _brain;
}