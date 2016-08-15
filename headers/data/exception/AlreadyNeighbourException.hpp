#ifndef ALREADY_NEIGHBOUR_EXCEPTION_HPP
#define ALREADY_NEIGHBOUR_EXCEPTION_HPP

#include <string>
#include <exception>

class AlreadyNeighbourException : public std::exception{

	private:
		std::string message;

	public:
		AlreadyNeighbourException(std::string const& phrase="") throw();

		virtual const char* what() const throw();
};

#endif
