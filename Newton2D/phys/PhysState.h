#pragma once
#include "../math/Vec2.h"

typedef struct PhysState {
	Vec2 pos{ Vec2::ZERO };

	Vec2 vel{ Vec2::ZERO };

	Vec2 acc{ Vec2::ZERO };

	// Net force
	Vec2 F{ Vec2::ZERO };

	// Momentum
	Vec2 p{ Vec2::ZERO };

	// Total kinetic energy
	double K{ 0 };
} PhysState;

