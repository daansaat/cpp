/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:25:20 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 13:25:21 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month."<< std::endl;
	std::cout << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!\nI want to speak to the manager now."<< std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level) {
	void (Harl::*function_ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*function_ptr[i])();
	}
}
