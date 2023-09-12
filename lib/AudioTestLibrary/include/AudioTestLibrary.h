//
// Created by David Kadish on 10/09/2023.
//

#ifndef AUDIOTESTLIBRARY_H
#define AUDIOTESTLIBRARY_H

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include <Audio.h>

class AudioTestClass {

public:
    AudioTestClass();

    void setup();

    void loop();

private:
    AudioInputI2S i2s1;
};


#endif //AUDIOTESTLIBRARY_H
