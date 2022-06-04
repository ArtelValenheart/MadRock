#pragma once

#ifdef MR_PLATFORM_WINDOWS

extern MadRock::Application* MadRock::CreateApplication();

int main(int argc, char** argv)
{
	auto app = MadRock::CreateApplication();
	app->Run();
	delete app;
}

#endif