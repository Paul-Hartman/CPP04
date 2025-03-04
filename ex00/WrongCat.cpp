/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:36:36 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 13:48:44 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << ORANGE << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	*this = other;
	std::cout << ORANGE <<  "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << ORANGE <<  "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		type = other.type;
	std::cout << ORANGE <<  "WrongCat assignment operator called" << std::endl;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << ORANGE <<  "WrongCat sound" << std::endl;
}

