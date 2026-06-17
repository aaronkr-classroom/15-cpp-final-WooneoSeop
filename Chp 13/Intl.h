#pragma once
// Intl.h

#ifndef GUARD_INTL_h
#define GUARD_INTL_h

#include <iostream>

#include "Core.h"

using namespace std;

class Intl : public Core {
public:
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };
	double grade() const;
	istream& read(istream&);

private:
	double toeic; // 토익
	Intl* clone() const { return new Intl(*this); }
};

#endif