#include "shape.hpp"
#include <iostream>

Shape::Shape(std::string name, glm::vec3 const& color) :
	name_{name},
	color_{color} {}

std::ostream& Shape::print(std::ostream& os) const
{
	os << "Name: " << name_ << ", Color (RGB): " << color_.x << " | " << color_.y << " | " << color_.z;
	return os;
}

std::ostream& operator<<(std::ostream& os, Shape const& s)
{
	return s.print(os);
}
