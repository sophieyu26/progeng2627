#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                ly = true;
            }
            else {
                ly = false;
            }
        }
        else{
            ly = true;
        }
    }
    else {
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if(m1 == 12){
        if(d1 < 31){
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
        else if (d1 == 31){
            d2 = 1;
            m2 = 1;
            y2 = y1 + 1;
        }
    }
    else{
        y2 = y1;
        if(m1 < 8 && m1 % 2 == 1 || m1 == 8 || m1 == 10){
            if(d1 < 31){
                d2 = d1 + 1;
                m2 = m1;
            }
            else if(d1 == 31){
                d2 = 1;
                m2 = m1 + 1;
            }
        }
        else if(m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
            if(d1 < 30){
                d2 = d1 + 1;
                m2 = m1;
            }
            else if(d1 == 30){
                d2 = 1;
                m2 = m1 + 1;
            }
        }
        else if(m1 == 2){
            if(leap_year(y1)){
                if (d1 < 29){
                    d2 = d1 + 1;
                    m2 = 2;
                }
                else if(d1 == 29){
                    d2 = 1;
                    m2 = 3;
                }
            }
            else{
                if (d1 < 28){
                    d2 = d1 + 1;
                    m2 = 2;
                }
                else if(d1 == 28){
                    d2 = 1;
                    m2 = 3;
                }
            }
        }
    }
}

int main(){
    int d1 = 31, m1 = 12, y1 = 2027, d2, m2, y2;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1 && m2 ==1 && y2 == 2028) << std::endl;

    d1 = 12, m1 = 3, y1 = 2013;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 13 && m2 == 3 && y2 == 2013) << std::endl;

    d1 = 30, m1 = 6, y1 = 1971;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 7 && y2 == 1971) << std::endl;

    d1 = 16, m1 = 9, y1 = 3022;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 17 && m2 == 9 && y2 == 3022) << std::endl;

    d1 = 28, m1 = 2, y1 = 2500;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 3 && y2 == 2500) << std::endl;

    d1 = 29, m1 = 2, y1 = 2028;
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 3 && y2 == 2028) << std::endl;
}