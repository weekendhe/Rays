#pragma once

#ifdef RAYS_PLATFORM_WINDOWS
#include "Application.h"

extern Rays::Application* Rays::createApplication();

int main(int argc,char** argv)
{
	auto app = Rays::createApplication();
	app->Run();
	delete app;
}
#endif