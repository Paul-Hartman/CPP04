/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:35:51 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 17:23:37 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type){
	std::cout << "Cure name constructor" << std::endl;
}

Cure::Cure(const Cure &other){
	std::cout << "Cure copy constructor" << std::endl;
	*this = other;
}

Cure &Cure::operator=(const Cure &other){
	std::cout << "Cure assignation operator" << std::endl;
	if(this != &other){
		type = other.type;
	}
	return *this;
}

Cure::~Cure(){
	std::cout << "Cure destructor" << std::endl;
}

AMateria* Cure::clone() const{
	std::cout << "Cure clone" << std::endl;
	return new Cure(*this);
}

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}