#pragma once

#include "Core.h"

namespace YMEngine {

	class YMENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

