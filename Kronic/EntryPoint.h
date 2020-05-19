#pragma once
#ifdef KR_PLATFORM_WINDOWS


extern Kronic::App* Kronic::CreateApp();
int main(int argc, char** argv)
{
	auto app = Kronic::CreateApp();
	app->Run();
	delete app;
}

#endif