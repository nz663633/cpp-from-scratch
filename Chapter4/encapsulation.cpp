#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private: // 접근 지정자 (public, protected)
    int m_month;
    int m_day;
    int m_year;

public:
    void setDate(const int &month_input, const int &day_input, const int &year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    void setMonth(const int &month_input)
    {
        m_month = month_input;
    }

    // 객체에 저장된 데이터를 외부에서 읽을 수 있도록 함
    int getDay()
    {
        return m_day;
    }

    void copyFrom(const Date &date)
    {
        m_month = date.m_month;
        m_day = date.m_day;
        m_year = date.m_year;
    }
};

int main()
{
    Date today; // {8, 4, 2025};
    /*
    today.m_month = 8;
    today.m_day = 4;
    today.m_year = 2025;
    */
    today.setDate(8, 4, 2025);
    today.setMonth(10);

    Date copy;
    copy.copyFrom(today);

    return 0;
}