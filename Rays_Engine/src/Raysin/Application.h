#pragma once

#include "core.h"

namespace Rays{
	class RAYS_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
		
	};
	// To be define in client.
	Application* createApplication();
}
