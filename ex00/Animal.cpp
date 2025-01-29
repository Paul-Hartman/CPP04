/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:17:36 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 12:58:32 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &other){
	std::cout << "Animal copy constructor" << std::endl;
	*this = other;
}

Animal::Animal(std::string type) : type(type){
	std::cout << "Animal type constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << "Animal assignation operator" << std::endl;
	type = other.type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}
