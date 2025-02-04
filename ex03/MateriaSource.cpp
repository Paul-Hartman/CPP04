/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:01:01 by phartman          #+#    #+#             */
/*   Updated: 2025/02/04 16:44:40 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor" << std::endl;
	for(int i = 0; i < 4; i++){
		_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other){
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
	std::cout << "MateriaSource copy constructor" << std::endl;
	if(this != &other)
	{
		for (int i = 0; i < 4 && _materias[i]; i++){
			delete _materias[i];
			_materias[i] = other._materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++){
		delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i++){
		if(!_materias[i]){
			_materias[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if(_materias[i] && _materias[i]->getType() == type){
			return _materias[i]->clone();
		}
	}
	return NULL;
}