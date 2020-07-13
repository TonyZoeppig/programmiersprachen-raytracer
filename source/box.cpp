#include "box.hpp"

Box::Box(glm::vec3 const& min, glm::vec3 const& max) :
	min_{ min },
	max_{ max } {}

Box::Box(std::string name, glm::vec3 const& color, glm::vec3 const& min, glm::vec3 const& max) :
	Shape(name, color),
	min_{min},
	max_{max} {}

float Box::area() const
{
	float a = (max_.x - min_.x) * (max_.y - min_.y);
	float b = (max_.x - min_.x) * (max_.z - min_.z);
	float c = (max_.y - min_.y) * (max_.z - min_.z);

	return 2*a + 2*b + 2*c;
}

float Box::volume() const
{
	return (max_.x - min_.x) * (max_.y - min_.y) * (max_.z - min_.z);
}

