#include "primitives.hpp"
namespace noether 
{
	float Vector3::length()
	{
		return std::sqrt((x * x) + (y * y) + (z * z));
	}

	void Vector3::normalize()
	{
		float len = length();
		x *= (1 / len);
		y *= (1 / len);
		z *= (1 / len);
	}
	Vector3 Vector3::operator*(Vector3 vec)
	{
		return Vector3(vec.x * x, vec.y * y, vec.z * z);
	}

	Vector3 Vector3::operator+(Vector3 vec)
	{
		return Vector3(vec.x + x, vec.y + y, vec.z + z);
	}

	Vector3 Vector3::operator-(Vector3 vec)
	{
		return Vector3(vec.x - x, vec.y - y, vec.z - z);
	}

	Vector3 Vector3::operator*(float scalar)
	{
		return Vector3(this->x * scalar, this->y * scalar, this->z * scalar);
	}

	void Vector3::operator*=(float scalar)
	{
		x *= scalar;
		y *= scalar;
		z *= scalar;
	}
}