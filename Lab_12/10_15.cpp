// 10.15
#include <iostream>
#include <vector>

typedef struct 
{
    std::string lastname;
    std::string firstname;
    std::string secondname;
    char gender;
    unsigned int age;
    unsigned int year;
} student;

student input()
{
    student s1{};
    std::cout << "Input last name: ";
    std::cin >> s1.lastname;
    std::cout << "Input first name: ";
    std::cin >> s1.firstname;
    std::cout << "Input second name: ";
    std::cin >> s1.secondname;
    std::cout << "Input gender(m or f): ";
    std::cin >> s1.gender;
    std::cout << "Input age: ";
    std::cin >> s1.age;
    std::cout << "Input year: ";
    std::cin >> s1.year;
    return s1;
}

void print(const student s1)
{
    std::cout << "last name: " << s1.lastname << "  ";
    std::cout << "first name: " << s1.firstname << "  ";
    std::cout << "second name: " << s1.secondname << "  ";
    std::cout << "gender: " << s1.gender << "  ";
    std::cout << "age: " << s1.age << "  ";
    std::cout << "year: " << s1.year << std::endl;
}

void input_list(std::vector <student> *a)
{
    int n;
    std::cout << "Input number of students: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "student " << i + 1 << std::endl;
        a->push_back(input());
    }
}

void print_list(const std::vector <student> a)
{
    int i = 1;
    for (student s: a)
    {
        std::cout << "student " << i << std::endl;
        i++;
        print(s);
    }
}

void popular_name(const std::vector <student> a)
{
    std::string m_name;
    std::string f_name;
    int kf = 0;
    int km = 0;
    for (student s: a)
    {
        int c = 0;
        for (student r: a)
        {
            if (s.firstname == r.firstname) c += 1;
        }
        if (s.gender == 'f')
        {
            if(c > kf)
            {
                kf = c;
                f_name = s.firstname;
            }
        }
        if (s.gender == 'm')
        {
            if(c > km)
            {
                km = c;
                m_name = s.firstname;
            }
        }
    }
    if(km > 0) std::cout << "Most popular men name: " << m_name << std::endl;
    if(kf > 0) std::cout << "Most popular female name: " << f_name << std::endl;
}

void popular_age(const std::vector <student> a)
{
    int age;
    int k = 0;
    for (student s: a)
    {
        int c = 0;
        for (student r : a)
        {
            if (s.age == r.age) c += 1;
        }
        if (c > k)
        {
            k = c;
            age = s.age;
        }
    }
    std::cout << "People at the age " << age << std::endl;
    for (student s : a)
    {
        if (s.age == age)
        {
            std::cout << s.lastname << " " << s.firstname << " " << s.secondname << std::endl;
        }
    }
}

int main()
{
    std::vector <student> students;

    input_list(&students);
    std::cout << std::endl;
    print_list(students);
    std::cout << std::endl;
    popular_name(students);
    popular_age(students);
}