/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:07:14 by brmajor           #+#    #+#             */
/*   Updated: 2024/02/05 15:12:16 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class   Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &ref);
        Cure &operator=(const Cure &ref);
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif