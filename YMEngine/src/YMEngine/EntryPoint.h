#pragma once

#ifdef YME_PLATFORM_WINDOWS

extern YMEngine::Application* YMEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = YMEngine::CreateApplication();
	app -> Run();
	delete app;
}

#endif