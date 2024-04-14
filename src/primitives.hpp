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
	void normalize();

	Vector3 operator*(Vector3 vec);
	Vector3 operator+(Vector3 vec);
	Vector3 operator-(Vector3 vec);

	// Multiplication by scalar
	Vector3 operator*(float scalar); 
	void operator*=(float scalar);	

};

struct Sphere
{
	Vector3 center;
	float radius;
	Sphere(Vector3 position, float rad) : center(position), radius(rad) {}
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