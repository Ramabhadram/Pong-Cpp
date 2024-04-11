#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball
{
private: 
		Vector2f m_Position;
		RectangleShape m_Shape;

		// float m_Speed = 300.0f; // Ram: Included the Speed of the ball variable in the constructor method;
		float m_Speed; 
		float m_DirectionX = .2f;
		float m_DirectionY = .2f;
public:
	Ball(float startX, float startY, float speed);
	FloatRect getPosition();
	RectangleShape getShape();
	float getXVelocity();
	void reboundSides();
	void reboundBatOrTop();
	void reboundBottom();
	void update(Time dt);
};