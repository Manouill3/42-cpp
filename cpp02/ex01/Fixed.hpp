/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:25:47 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/30 15:29:07 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
private :

    int raw;
    static const int bits = 8;

public :

    Fixed();
    Fixed(const Fixed &prev);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    
    int getRawBits(void) const;
    void setRawBits(int const raw);

    Fixed(const int val);
    Fixed(const float val);
    
    float toFloat(void) const;
    int toInt(void) const;
};


#endif //FIXED_HPP