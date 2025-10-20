/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:46:13 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/17 13:46:25 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    std::cout << "=== Constructors ===" << std::endl;
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    std::cout << "a = " << a << std::endl; // Expected: 0
    std::cout << "b = " << b << std::endl; // Expected: 10
    std::cout << "c = " << c << std::endl; // Expected: 42.42
    std::cout << "d = " << d << std::endl; // Expected: 10 (copy of b)

    std::cout << "\n=== Conversion to int and float === " << std::endl;
    std::cout << "b to int = " << b.toInt() << std::endl; // Expected: 10
    std::cout << "c to float = " << c.toFloat() << std::endl; // Expected: 42.42

    std::cout << "\n=== Comparison Operators ===" << std::endl;
    std::cout << "b > c ? " << (b > c) << std::endl; // Expected: 0 (false)
    std::cout << "b < c ? " << (b < c) << std::endl; // Expected: 1 (true)
    std::cout << "b == d ? " << (b == d) << std::endl; // Expected: 1 (true)
    std::cout << "b != c ? " << (b != c) << std::endl; // Expected: 1 (true)
    std::cout << "b >= d ? " << (b >= d) << std::endl; // Expected: 1 (true)
    std::cout << "c <= b ? " << (c <= b) << std::endl; // Expected: 0 (false)

    std::cout << "\n=== Arithmetic Operators ===" << std::endl;
    Fixed e = b + c;
    Fixed f = c - b;
    Fixed g = b * c;
    Fixed h = c / b;
    std::cout << "b + c = " << e << std::endl; // Expected: 52.42
    std::cout << "c - b = " << f << std::endl; // Expected: 32.42
    std::cout << "b * c = " << g << std::endl; // Expected: 424.2
    std::cout << "c / b = " << h << std::endl; // Expected: 4.242

    std::cout << "\n=== Increment and Decrement Operators ===" << std::endl;
    Fixed x;
    std::cout << "x = " << x << std::endl; // Expected: 0
    std::cout << "++x = " << ++x << std::endl; // Expected: 0.00390625 (1/256)
    std::cout << "x = " << x << std::endl; // Expected: 0.00390625
    std::cout << "x++ = " << x++ << std::endl; // Expected: 0.00390625
    std::cout << "x = " << x << std::endl; // Expected: 0.0078125 (2/256)
    std::cout << "--x = " << --x << std::endl; // Expected: 0.00390625
    std::cout << "x = " << x << std::endl; // Expected: 0.00390625
    std::cout << "x-- = " << x-- << std::endl; // Expected: 0.00390625
    std::cout << "x = " << x << std::endl; // Expected: 0

    std::cout << "\n=== Min and Max Functions ===" << std::endl;
    Fixed const y(2.5f);
    Fixed const z(5.5f);
    std::cout << "y = " << y << ", z = " << z << std::endl;
    std::cout << "min(y, z) = " << Fixed::min(y, z) << std::endl; // Expected: 2.5
    std::cout << "max(y, z) = " << Fixed::max(y, z) << std::endl; // Expected: 5.5
}