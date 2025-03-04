/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:04:58 by phartman          #+#    #+#             */
/*   Updated: 2025/03/04 14:03:55 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RESET   "\033[0m"
#define RED     "\033[31m"


#include <iostream>
class Brain{
	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();

		std::string ideas[100];

};