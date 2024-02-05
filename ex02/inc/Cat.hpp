/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:29:10 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 12:25:22 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &ref);
        Cat &operator=(const Cat &ref);
        void    makeSound() const;
};

#endif