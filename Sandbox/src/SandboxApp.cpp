#include <MadRock.h>

class Sandbox : public MadRock::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

MadRock::Application* MadRock::CreateApplication()
{
	return new Sandbox();
}