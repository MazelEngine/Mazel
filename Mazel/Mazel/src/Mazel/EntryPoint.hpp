#pragma once

#ifdef MZ_PLATFORM_MACOS

extern Mazel::App* Mazel::CreateApp();

int main(int argc, char** argv)
{
    auto app = Mazel::CreateApp();
    app->Run();
    delete app;
    
}

#endif // MZ_PLATFORM_MACOS
