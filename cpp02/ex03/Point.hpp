/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:55:08 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/06 14:48:05 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
  
private :

    const Fixed x;
    const Fixed y;

public :

    Point();
    Point(float val_x, float val_y);
    Point(const Point &obj);
    Point &operator=(const Point &obj);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};

float getBeta(Point a, Point c, Point point);
float getSecbeta(Point a, Point b, Point c);
float getFirstbeta(Point a, Point b, Point c);
float getAlpha(Point b, Point c, Point point);
float getSecPart(Point a, Point b, Point c);
float getFirstPart(Point a, Point b, Point c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif