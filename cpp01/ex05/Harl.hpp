/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:09:42 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/25 13:14:37 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
