#pragma once
#include "obras.h"
#include <string>

using std::string;

class Literatura:public Obras{
	string genero, epoca;
 public:
 	Literatura(string, string, string, string, string);
 	virtual string toString()const;
};
