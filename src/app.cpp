#include "app.hpp"

namespace VKRender {

    void App::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}