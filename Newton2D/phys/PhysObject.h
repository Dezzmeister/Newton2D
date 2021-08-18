#pragma once
#include "PhysState.h"

class PhysObject {
public:

	PhysState now;
	PhysState next;

	const double density;
	const double mass;
	const double area;

	PhysObject(const double _density, const double _area);

	virtual ~PhysObject();
};
