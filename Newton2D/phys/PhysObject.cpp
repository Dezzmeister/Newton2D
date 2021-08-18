#include "PhysObject.h"

PhysObject::PhysObject(const double _density, const double _area): 
	density(_density),
	area(_area),
	mass(_density * _area) {

}

PhysObject::~PhysObject() {
	// Stub method
}
