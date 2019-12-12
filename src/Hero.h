#pragma once
#ifndef __Hero__
#define __Hero__

#include "DisplayObject.h"
#include "MoveState.h"

class Hero : public DisplayObject
{
public:
	Hero();
	~Hero();
	
	// Inherited via GameObject
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

	MoveState getState() { return m_moveState; }
	void setState(MoveState ms) { m_moveState = ms; }

private:
	MoveState m_moveState;
	int m_frameCount;
	int m_frameMax;
};

#endif /* defined (__Hero__) */