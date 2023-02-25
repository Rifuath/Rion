#pragma once

#include "Core.h"


namespace Rion {

	class RION_API Application
	{
	public:
		Application();
		virtual ~Application();


		void run();

	};

	//to be defined by client
	Application* CreateApplication();

}
