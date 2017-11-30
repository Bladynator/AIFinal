#ifndef INTERCEPTOR_MISSLE_H
#define INTERCEPTOR_MISSLE_H
#include "Missle.h"

class InterceptorMissle : public Missle
{
public:
	InterceptorMissle();
	~InterceptorMissle();

	float lifeTime;
	void SeekPlayer();
};

#endif // !INTERCEPTOR_MISSLE_H