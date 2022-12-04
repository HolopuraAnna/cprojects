// 15.15
#include <iostream>
#include <fstream>
#include <exception>
#include <vector>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int Month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    public:
    int date;
    Date()
    {
        day = 1;
        month = 1;
        date = 0;
    }
    Date(int x, int y)
    {
        day = x;
        month = y;
        date = day;
        for (int i = 0; i < month-1; i++)
        {
            date += Month[i];
        }
    }
    Date(int x)
    {
        date = x;
        int i = 0;
        while (Month[i] < x)
        {
            x -= Month[i];
            i++;
        }
        month = i + 1;
        day = x + 1;
        //cout << day << "  " << month << "\n";
    }

    int input()
    {
        cout << "Input day: ";
        cin >> day;
        cout << "Input month: ";
        cin >> month;
        for (int i = 0; i < month-1; i++)
        {
            date += Month[i];
            //cout << i << "  " << date << "     ";
        }
        date += day;
        //cout << date << "\n";
        return date;
    }
    void show()
    {
        cout << day << "/" << month;
    }

    bool operator<=(const int x)
    {
        return (date <= x);
    }

    bool operator>=(const int x)
    {
        return (date >= x);
    }
};

class Guest
{
    public:
    string lastname;
    Date date1, date2;
    int room;
    Guest(){}
    Guest(string l, int d1, int d2, int r)
    {
        string lastname = l;
        Date date1(d1);
        Date date2(d2);
        int room = r;
    }

    int input()
    {
        cout << "Input last name: ";
        cin >> lastname;
        cout << "Input date of check-in\n";
        date1.input();
        cout << "Input date of check-out\n";
        date2.input();
        cout << "Input room: ";
        cin >> room;
        return 0;
    }
    void show()
    {
        cout << lastname << "  ";
        date1.show();
        cout << " to ";
        date2.show();
        cout << "  in room:" << room;
    }
};

class Hotel
{
    private:
    int Rooms[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int Price[20] = {5,4,5,5,5,6,3,4,4,6,6,7,8,8,8,9,10,11,11,20};
    std::vector< Guest > Guests;

    public:
    Hotel(){}

    void new_guest(string l, int d1, int d2, int r)
    {
        Guest g(l, d1, d2, r);
        Guests.push_back(g);
    }

    int input_guest()
    {
        Guest g1;
        g1.input();
        Guests.push_back(g1);
        return 0;
    }

    int g_room(string l)
    {
        for (Guest g : Guests)
        {
            if (g.lastname == l)
            {
                return g.room;
            }
        }
        cout << "there no guest with this lastname\n";
        return 1;
    }
    void show_g_room(string l)
    {
        for (Guest g : Guests)
        {
            if (g.lastname == l)
            {
                cout << l << " lives in room " << g.room << " from ";
                g.date1.show();
                cout << " to ";
                g.date2.show();
                cout << "\n";
            }
        }
    }

    int free_rooms(int d)
    {
        int k = 0;
        for (Guest g : Guests)
        {
            if ((g.date1 <= d) && (g.date2 >= d)) k++;
        }
        cout << k << " rooms are free for this date\n";
        return k;
    }

    int free_room(int d1, int d2)
    {
        int k = 0;
        for (int r : Rooms)
        {
            for (Guest g : Guests)
            {
                if ((g.room != r) || ((g.room == r) && ((g.date2 <= d1) || (g.date1 >= d2)))) k++;
            }
            if (k == Guests.size())
            {
                cout << "room " << r << " is free for this date\n";
                return r;
            }
            else k = 0;
        }
        cout << "no free rooms for this date\n";
        return 1;
    }

    int price(string l, int d1, int d2)
    {
        cout << "the price is " << Price[g_room(l)] * (d2 - d1) << "\n";
        return Price[g_room(l)] * (d2 - d1);
    }
};

int main()
{
    Hotel h;
    h.new_guest("Black", 43, 49, 20);
    h.new_guest("Taylor", 79, 87, 4);
    h.new_guest("Martin", 215, 221, 14);
    h.new_guest("Smith", 85, 93, 14);
    h.new_guest("Davis", 13, 32, 5);
    
    h.free_rooms(86);
    h.free_room(45, 63);
    h.price("Smith", 85, 90);
    h.show_g_room("Davis");
}