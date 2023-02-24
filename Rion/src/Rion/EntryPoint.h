#pragma once

#ifdef RN_PLATFORM_WINDOWS

extern Rion::Application* Rion::CreateApplication();




int main(int argc, char** argv)
{
	Rion::Application *app = Rion::CreateApplication();
	app->run();
	delete app;

}
#endif