/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:02:50 by phartman          #+#    #+#             */
/*   Updated: 2025/01/29 14:31:46 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal{
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal(std::string type);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string type;

	private:
		
};

#endif