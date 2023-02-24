#include <Rion.h>

class Sandbox : public Rion::Application
{
public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	
	}

};


Rion::Application* Rion::CreateApplication()
{
	return new Sandbox();
}