/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:04:31 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 13:49:05 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RED     "\033[31m"
#define ORANGE  "\033[33m"
#include <iostream>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal(std::string type);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
	
		std::string getType() const;
		void makeSound() const;

	protected:
		std::string type;
		
	private:
	
};
