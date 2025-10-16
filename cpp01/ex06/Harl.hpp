/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:22:25 by mdegache          #+#    #+#             */
/*   Updated: 2025/10/15 09:37:42 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
    
private :

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public :

    Harl(void);
    ~Harl(void);

    void complain(std::string level);
};

#endif