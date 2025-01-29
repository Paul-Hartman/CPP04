/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:53:29 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 16:55:35 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria"){
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){
	std::cout << "AMateria type constructor" << std::endl;
}

AMateria::AMateria(const AMateria &other){
	std::cout << "AMateria copy constructor" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other){
	std::cout << "AMateria assignation operator" << std::endl;
	if(this != &other){
		type = other.type;
	}
	return *this;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const{
	return type;
}

void AMateria::use(ICharacter &target){
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}

