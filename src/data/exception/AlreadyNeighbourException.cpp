#include <data/exception/AlreadyNeighbourException.hpp>

using namespace std;

AlreadyNeighbourException::AlreadyNeighbourException(string const& message) throw(){
	this->message = message;
}

const char* AlreadyNeighbourException::what() const throw(){
	return message.c_str();
}
