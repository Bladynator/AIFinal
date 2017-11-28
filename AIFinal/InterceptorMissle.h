#pragma once
#include "Missle.h"

class InterceptorMissle : Missle
{
public:
	InterceptorMissle();
	~InterceptorMissle();

	float lifeTime;
	void SeekPlayer();
};

