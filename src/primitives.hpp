#pragma once
#include <vector>
#include <numeric>
#include <algorithm>
#include <concepts>
#include <cmath>

namespace noether {

struct Vector3
{
	float x, y, z;
	Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
	float length();

	Vector3 operator*(Vector3 vec);
	Vector3 operator+(Vector3 vec);
	Vector3 operator-(Vector3 vec);



	// Multiplication by scalar
	Vector3 operator*(float scalar); 
	void operator*=(float scalar);


	

};

struct Vector2
{
	float x, y;
};

struct Triangle
{
	Vector3 x;
	Vector3 y;
	Vector3 z;
	
};

struct Object
{
	Vector3 position;
	Vector3 velocity;
	Vector3 force;
	float mass;
};

}