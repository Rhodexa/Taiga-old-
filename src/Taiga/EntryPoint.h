#pragma once

#ifdef _TAIGA_TARGET_PLATFORM_WINDOWS

extern tga::App* tga::createApp();


int main(int argc, char** argv) {
	auto app = tga::createApp();
	app->Run();
	delete app;
}

#endif

