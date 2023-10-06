#ifndef TIME_H
#define TIME_H

class Time
{
private:
    /* data */
    int hour;
    int minute;
    int second;
public:
    Time();
    void setTime(int, int, int); // configura hora, minuto e segunda
    void printUniversal(); // imprime a hora no formato de data/hora universal
    void printStandard(); // imprime a hora no formato-padrão de data/hora 
};
#endif