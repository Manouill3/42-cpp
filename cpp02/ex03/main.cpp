/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:31:10 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/06 15:26:51 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(1, 2);
    Point b(3, 3);
    Point c(2, 1);
    Point point(5, 2);

    if (bsp(a, b, c, point))
        std::cout << "Point is in the triangle" << std::endl;
    else
        std::cout << "Point is not in the triangle" << std::endl;
}
