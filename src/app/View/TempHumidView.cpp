#include "TempHumidView.h"

TempHumidView::TempHumidView(LCD *lcd)
{
    this->lcd = lcd;
}

TempHumidView::~TempHumidView()
{

}

void TempHumidView::setTempHumidData(float temp, float humid)
{
    char buff1[30];
    char buff2[30];
    sprintf(buff1, "%.1lfC", temp);
    lcd->WriteStringXY(0, 10, buff1);
    sprintf(buff2, "%.1lf%%", humid);
    lcd->WriteStringXY(1, 10, buff2);    
    printf("%s, %s\n", buff1, buff2);
}