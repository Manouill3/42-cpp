/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:20:07 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/10 11:27:30 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    
private :

    std::string ideas[100];

public :

    Brain();
    Brain(const Brain &obj);
    Brain &operator=(const Brain &obj);
    ~Brain();
};

#endif