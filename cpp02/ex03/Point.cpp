/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:54:47 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/06 14:58:24 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float val_x, float val_y) : x(val_x), y(val_y) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point &Point::operator=(const Point &obj) {
    (void)obj;
    return *this;
}

Point::~Point() {}

Fixed Point::getX() const {return x;}
Fixed Point::getY() const {return y;}
