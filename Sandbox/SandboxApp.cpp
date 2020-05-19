#include <Kronic.h>

class Sandbox : public Kronic::App
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Kronic::App* CreateApp()
{
	return new Sandbox();
}