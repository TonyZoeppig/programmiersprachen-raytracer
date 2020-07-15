#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <glm/vec3.hpp>
#include "shape.hpp"

class Sphere : public Shape {
public:
	Sphere(glm::vec3 const& cntr, float r);
	Sphere(std::string name, glm::vec3 const& color, glm::vec3 const& cntr, float r);
	float area() const override;
	float volume() const override;
	std::ostream& print(std::ostream& os) const override;

private:
	glm::vec3 center_;
	float radius_;
};

std::ostream& operator<<(std::ostream& os, Sphere const& s);

#endif