#pragma once

#ifdef MZ_PLATFORM_MACOS

extern Mazel::App* Mazel::CreateApp();

int main(int argc, char** argv)
{
    Mazel::Log::Init();
    MZ_CORE_WARN("Init Log!");
    MZ_INFO("Hello, Mazel");
    
    auto app = Mazel::CreateApp();
    app->Run();
    delete app;
    
}

#endif // MZ_PLATFORM_MACOS
