/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:28:49 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 17:40:21 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &ref);
        Dog &operator=(const Dog &ref);
        void    makeSound() const;
};

#endif