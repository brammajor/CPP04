/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:58:51 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/02 16:13:35 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice &ref);
        Ice &operator=(const Ice &ref);
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif