/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:43:43 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:26:24 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &ref);
        WrongAnimal &operator=(const WrongAnimal &ref);
        std::string getType() const;
        void    makeSound() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &ref);
        WrongCat &operator=(const WrongCat &ref);
        std::string getType() const;
        void    makeSound() const;
};

#endif