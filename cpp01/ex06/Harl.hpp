/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:22:25 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/25 13:29:24 by mdegache         ###   ########.fr       */
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
