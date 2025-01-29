/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:02:50 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 12:58:24 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();
		Animal(const Animal &other);
		Animal(std::string type);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;

	protected:
		std::string type;

	private:
		
};

#endif