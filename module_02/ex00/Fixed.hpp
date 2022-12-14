/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaat <dsaat@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 13:34:42 by dsaat         #+#    #+#                 */
/*   Updated: 2022/10/13 13:39:26 by dsaat         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed {
	
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
	private:
		int					_fixedNumber;
		static const int	_fbNumber = 8;
};

#endif