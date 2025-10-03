/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:54:47 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/03 15:45:44 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float val_x, float val_y) : x(val_x), y(val_y) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point &Point::operator=(const Point &obj) {
    if (this != &obj) {
        Point tmp(obj);
        return tmp;
    }
    return *this;
}

Point::~Point() {}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    
    
    return False;
}
