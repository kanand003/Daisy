#pragma once

#ifdef DY_PLATFORM_WINDOWS

extern Daisy::Application* Daisy::CreateApplication();
	
int main(int argc, char** argv) {
	auto app = Daisy::CreateApplication();
	app->Run();
	delete app;
}
#endif