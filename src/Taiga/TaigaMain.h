#pragma once
#include "Core.h"

namespace tga {
	class TAIGA App {
	public:
		int width = 480;
		int height = 340;
		const char* title = "Taiga Window";
		bool autobegin = true;
		App();
		virtual ~App();

		void Run();
	};

	App* createApp();
}

