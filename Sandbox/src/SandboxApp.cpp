#include <YMEngine.h>

class Sandbox : public YMEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

YMEngine::Application* YMEngine::CreateApplication()
{
	return new Sandbox();
}