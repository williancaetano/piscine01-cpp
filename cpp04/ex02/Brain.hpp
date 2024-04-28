#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(std::string thought);
		Brain(const Brain &cpy);
		Brain &operator=(const Brain &rhs);
		virtual ~Brain(void);
		void	printIdea(void) const;
		void	printIdea(unsigned int index) const;
		std::string	getIdea(unsigned int index) const;
		void		setIdea(std::string str, unsigned int index);
		void		setIdeas(std::string str);
	protected:
		std::string	_ideas[100];
};

#endif
