/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:05:58 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 15:40:13 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
    protected:
        std::string type;
        Brain* brain;
        Animal();
        Animal(const Animal &ref);
    public:
        
        virtual ~Animal();

        Animal &operator=(const Animal &ref);
        std::string getType() const;
        virtual void    makeSound() const;
};

#endif