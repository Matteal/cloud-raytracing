#include "Engine.h"

int main(int argc, char*argv[])
{
    Engine app;
    app.init(800, 800);
    app.setBackgroundColor(0.4f, 0.4f, 0.8f, 1.f);
    app.run();
    return 0;
}
