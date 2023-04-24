#include <Rays.h>

class sandbox : public Rays::Application
{
public:
	sandbox()
	{

	}
	~sandbox()
	{

	}
};

Rays::Application* Rays::createApplication()
{
	return new sandbox();
}