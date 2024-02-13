/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:59:05 by bcastelo          #+#    #+#             */
/*   Updated: 2024/02/13 19:12:00 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon of type " << type << " was destroyed" << std::endl;
}

const std::string&	Weapon::getType( void )
{
	return type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}