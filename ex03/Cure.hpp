/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:36:15 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 15:41:47 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter &target);
};
