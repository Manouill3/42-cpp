/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:22:56 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/17 13:16:17 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float getBeta(Point a, Point c, Point point) {
    return getFirstbeta(a, point, c) + getSecbeta(a, point, c);
}

float getSecbeta(Point a, Point b, Point c) {
    float aX;
    float cY;
    float bY;
    float cX;
    float res;

    aX = a.getX().toFloat();
    cY = c.getY().toFloat();
    bY = b.getY().toFloat();
    cX = c.getX().toFloat();
    
    res = (aX - cX) * (bY - cY);
    return res;
}

float getFirstbeta(Point a, Point b, Point c) {
    float aY;
    float cX;
    float bX;
    float cY;
    float res;

    aY = a.getY().toFloat();
    cX = c.getX().toFloat();
    bX = b.getX().toFloat();
    cY = c.getY().toFloat();
    
    res = (cY - aY) * (bX - cX);
    return res;
}

float getAlpha(Point b, Point c, Point point) {
    return getFirstPart(point, b, c) + getSecPart(point, b, c);
}

float getSecPart(Point a, Point b, Point c) {
    float aY;
    float cY;
    float bX;
    float cX;
    float res;

    aY = a.getY().toFloat();
    cY = c.getY().toFloat();
    bX = b.getX().toFloat();
    cX = c.getX().toFloat();
    
    res = (cX - bX) * (aY - cY);
    return res;
}

float getFirstPart(Point a, Point b, Point c) {
    float aX;
    float cX;
    float bY;
    float cY;
    float res;

    aX = a.getX().toFloat();
    cX = c.getX().toFloat();
    bY = b.getY().toFloat();
    cY = c.getY().toFloat();
    
    res = (bY - cY) * (aX - cX);
    return res;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float d;
    float alpha;
    float beta;
    float gamma;

    d = getFirstPart(a, b, c) + getSecPart(a, b, c);
    alpha = getAlpha(b, c, point) / d;
    beta = getBeta(a, c, point) / d;
    gamma = 1.0f - alpha - beta;
    return (alpha > 0 && beta > 0 && gamma > 0);
}
