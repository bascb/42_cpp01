/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:09:55 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/08 20:00:15 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	get_level( std::string level );

int	main (int argc, char **argv)
{
	Harl	harl;
	int		level;
	
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <log level>" << std::endl;
		return 0;
	}
	level = get_level(argv[1]);
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 1:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 2:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}

int	get_level( std::string level )
{
	int			i;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	return (i);
}