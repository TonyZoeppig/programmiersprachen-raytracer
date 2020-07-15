#define _USE_MATH_DEFINES

#include "sphere.hpp"
#include <cmath>
#include <iostream>

Sphere::Sphere(glm::vec3 const& cntr, float r) :
	center_{ cntr },
	radius_{ r } {}

Sphere::Sphere(std::string name, glm::vec3 const& color, glm::vec3 const& cntr, float r) :
	Shape(name, color),
	center_{ cntr },
	radius_{ r } {}

float Sphere::area() const
{
	if (radius_ < 0) {
		std::cout << "Radius darf nicht negativ sein!" << std::endl;
		return -1;
	}
	return M_PI * 4 * pow(radius_, 2.0f);
}

float Sphere::volume() const
{
	if (radius_ < 0) {
		std::cout << "Radius darf nicht negativ sein!" << std::endl;
		return -1;
	}
	return (4 * M_PI * pow(radius_, 3.0f))/3;
}

std::ostream& Sphere::print(std::ostream& os) const
{
	Shape::print(os);
	os << ", Center (x|y|z): " << center_.x << " | " << center_.y << " | " << center_.z << ", Radius: " << radius_;
	return os;
}

std::ostream& operator<<(std::ostream& os, Sphere const& s)
{
	return s.print(os);
}
