#pragma once
#include "Core.h"
namespace Daisy {
	class DAISY_API Application {
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};
	Application* CreateApplication();
}


