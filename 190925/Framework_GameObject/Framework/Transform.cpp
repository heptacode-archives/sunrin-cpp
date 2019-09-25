#include "Transform.h"
Transform::Transform(Point position, float angle)
	:Component(), position(position), rotatingAngle(angle), 
	positioningCenter(Point()), rotatingCenter(Point()), scalingCenter(Point())
{
	positioningCenter.x = 0.0f;
	positioningCenter.y = 0.0f;
	rotatingCenter.x = 0.0f;
	rotatingCenter.y = 0.0f;
	scalingCenter.x = 0.0f;
	scalingCenter.y = 0.0f;

	scale.x = 1.0f;
	scale.y = 1.0f;
}

Transform::~Transform()
{
}

void Transform::SetPosition(float x, float y)
{
	position.x = x;
	position.y = y;
}

void Transform::SetRotation(float angle)
{
	rotatingAngle = angle;
}

void Transform::SetScale(float x, float y)
{
	scale.x = x;
	scale.y = y;
}
