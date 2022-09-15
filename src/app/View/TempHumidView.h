#ifndef TEMPHUMIDVIEW_H
#define TEMPHUMIDVIEW_H

#include "LCD.h"

#pragma once

class TempHumidView
{
private:
    LCD *lcd;

public:
    TempHumidView(LCD *lcd);
    ~TempHumidView();
    void setTempHumidData(float temp, float humid);


};

#endif