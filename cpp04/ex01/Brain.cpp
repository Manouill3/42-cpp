/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:55:43 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/20 14:32:50 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &obj) {
    for (int i = 0; i < 100; i++)
        ideas[i] = obj.ideas[i];
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj) {
    if (this != &obj) {
        for (int i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];
    }
    std::cout << "Brain copy assignement called" << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
