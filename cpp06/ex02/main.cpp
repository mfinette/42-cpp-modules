/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:57:31 by mfinette          #+#    #+#             */
/*   Updated: 2024/01/10 17:34:12 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int nb = rand();

	if ((nb % 3) == 0)
	{
		cout << "A base generated" << endl;
		return (new A());
	}
	else if ((nb % 3) == 1)
	{
		cout << "B base generated" << endl;
		return (new B());
	}
	else if ((nb % 3) == 2)
	{
		cout << "C base generated" << endl;
		return (new C());
	}
	else
	{
		cout << "Base not generated" << endl;
		return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
	{
		cout << "// VIA POINTER //Base of type A found" << endl;
		return ;
	}
	else if (dynamic_cast<B *>(p) != NULL)
	{
		cout << "// VIA POINTER // Base of type B found" << endl;
		return ;
	}
	else if (dynamic_cast<C *>(p) != NULL)
	{
		cout << "// VIA POINTER // Base of type C found" << endl;
		return ;
	}
	else
		cout << "// VIA POINTER // Base isn't type A B or C" << endl;
}

void	identify(Base &p)
{
	Base test;

	try
	{
		test = dynamic_cast<A&>(p);
		cout << "// VIA REFERENCE // Base of type A found" << endl;
	}
	catch (...) {}
	try
	{
		test = dynamic_cast<B&>(p);
		cout << "// VIA REFERENCE // Base of type B found" << endl;
	}
	catch (...) {}
	try
	{
		test = dynamic_cast<C&>(p);
		cout << "// VIA REFERENCE // Base of type C found" << endl;
	}
	catch (...) {}
}

int	main()
{
	Base	*base;
	
	srand(time(NULL));
	base = generate();
	identify(base);
	identify(*base);
	return 0;
}