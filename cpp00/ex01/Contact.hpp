/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:26:17 by mdegache          #+#    #+#             */
/*   Updated: 2025/09/03 10:28:58 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
    
private :

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string secret;
    
public :
    Contact();
    ~Contact();
    
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_number();
    std::string get_secret();
    
    void set_first_name(std::string a);
    void set_last_name(std::string a);
    void set_nickname(std::string a);
    void set_number(std::string a);
    void set_secret(std::string a);
};
