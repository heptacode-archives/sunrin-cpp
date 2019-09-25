#pragma once
#include "Component.h"
#include "Math.h"

class Transform :
	public Component
{
public:
	Transform(Point position = Point(), float angle = 0.0f);
	virtual ~Transform();

public:
	virtual void Update() {};

	Point position;
	float rotatingAngle;
	Point scale;

	Point positioningCenter;
	Point rotatingCenter;
	Point scalingCenter;

public:
	void SetPosition(float x, float y);
	void SetRotation(float angle);
	void SetScale(float x, float y);
};

