/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:22:05 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 12:52:40 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat assignation operator" << std::endl;
	Animal::operator=(other);
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}