#include <Daisy.h>

class Sandbox : public Daisy::Application
{
public:
	Sandbox();
	~Sandbox();

private:

};

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

Daisy::Application* Daisy::CreateApplication() {
	return new Sandbox;
}