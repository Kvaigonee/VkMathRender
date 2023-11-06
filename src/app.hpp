#pragma once

#include "pipeline.hpp"
#include "window.hpp"

namespace VKRender {
	class App {
		public:
			static constexpr int WIDTH = 800;
			static constexpr int HEIGHT = 600;

			void run();

		private:
			Window window{ WIDTH, HEIGHT, "Hello Vulkan!" };
			Pipeline pipeline{ "shaders/simple_triangle.vert.spv", "shaders/simple_triangle.frag.spv" };
		};
}