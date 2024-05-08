/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:17:28 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/08 19:36:45 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain( std::string level )
{
	func_ptr	functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::unknown};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4 && levels[i].compare(level))
		i++;
	(this->*functions[i])();
}

void	Harl::debug( void )
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::unknown( void )
{
	std::cout << "Irrelevant complaint." << std::endl;
}