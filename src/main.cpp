#include <iostream>
#define MINIAUDIO_IMPLEMENTATION
#include <miniaudio.h>
#include <cstdio>
#include <filesystem>

std::string path = std::filesystem::current_path().parent_path().string();

int main() {
    ma_result result;
    ma_engine engine;

    result = ma_engine_init(nullptr, &engine);
    if (result != MA_SUCCESS) {
        return -1;
    }
    ma_engine_play_sound(&engine, (path + "/res/Auf.mp3").c_str(), nullptr);
    ma_engine_play_sound(&engine, (path + "/res/GTA4.wav").c_str(), nullptr);

    printf("Press Enter to quit...");
    getchar();

    ma_engine_uninit(&engine);

    return 0;
}