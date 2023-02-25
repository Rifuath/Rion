#pragma once

#ifdef RN_PLATFORM_WINDOWS

extern Rion::Application* Rion::CreateApplication();




int main(int argc, char** argv)
{
	Rion::Log::init();
	RN_CORE_WARN("this is a warning");
	RN_INFO("this is client info");

	Rion::Application *app = Rion::CreateApplication();
	app->run();
	delete app;

}
#endif