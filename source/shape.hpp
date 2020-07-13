#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <string>
#include <glm/vec3.hpp>

class Shape {
public:
	Shape() = default;
	Shape(std::string name, glm::vec3 const& color_);
	virtual float area() const = 0;
	virtual float volume() const = 0;
protected:
	std::string name_ = "Shape";
	glm::vec3 color_{ 128, 128, 128 };
};

#endif