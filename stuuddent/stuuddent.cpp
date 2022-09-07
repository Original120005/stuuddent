#include <iostream> 
#include <Windows.h> 
using namespace std;

class Student
{
private:
    char* firstname;
    char* lastname;
    char* date;
    char* telephon;
    int group;

public:

    Student()
    {
        cout << "Конструктор по умолчанию\n";
        firstname = nullptr;
        lastname = nullptr;
        date = nullptr;
        telephon = nullptr;
        group = 0;
    }

    Student(const char* fname, const char* lname, const char* dat, const char* tel, int grp)
    {

        firstname = new char[strlen(fname) + 1];
        strcpy_s(firstname, strlen(fname) + 1, fname);


        lastname = new char[strlen(lname) + 1];
        strcpy_s(lastname, strlen(lname) + 1, lname);


        date = new char[strlen(dat) + 1];
        strcpy_s(date, strlen(dat) + 1, dat);


        telephon = new char[strlen(tel) + 1];
        strcpy_s(telephon, strlen(tel) + 1, tel);


        group = grp;

    }


    void Print()
    {
        cout << "Имя  : " << firstname << endl;
        cout << "Фамилия : " << lastname << endl;
        cout << "Дата рождения : " << date << endl;
        cout << "Номер телефона  : " << telephon << "\n";
        cout << "Номер группы  : " << group << "\n";
    }
    void Input() {
        char buf[200];
        cout << "Введите имя : ";
        cin.getline(buf, 200);
        if (firstname != nullptr) {
            cout << firstname << " удалено! \n";
            delete[]firstname;
        }
        firstname = new char[strlen(buf) + 1];
        strcpy_s(firstname, strlen(buf) + 1, buf);

        cout << "Введите Фамилию : ";
        cin.getline(buf, 200);
        if (lastname != nullptr) {
            cout << lastname << " удалено! \n";
            delete[]lastname;
        }
        lastname = new char[strlen(buf) + 1];
        strcpy_s(lastname, strlen(buf) + 1, buf);

        cout << "Введите дату рождения : ";
        cin.getline(buf, 200);
        if (date != nullptr) {
            cout << date << " удалено! \n";
            delete[]date;
        }
        date = new char[strlen(buf) + 1];
        strcpy_s(date, strlen(buf) + 1, buf);

        cout << "Введите номер телефона : ";
        cin.getline(buf, 200);
        if (telephon != nullptr) {
            cout << telephon << " удалено! \n";
            delete[]telephon;
        }
        telephon = new char[strlen(buf) + 1];
        strcpy_s(telephon, strlen(buf) + 1, buf);

        cout << "Введите группу : ";
        cin >> group;

    }
    ~Student()
    {
        cout << "Диструктор\n";
        delete[]firstname;
        delete[]lastname;
        delete[]date;
        delete[]telephon;
    }
    void Setfirstname(char* fname)
    {
        fname = firstname;
    }
    char* Getfirstname()
    {
        return firstname;
    }
    void Setlastname(char* lname)
    {
        lname = lastname;
    }
    char* Getlastname()
    {
        return lastname;
    }
    void Setdate(char* dat)
    {
        dat = date;
    }
    char* Getdate()
    {
        return date;
    }
    void Settelephon(char* tel)
    {
        telephon = tel;
    }
    char* Gettelephon()
    {
        return telephon;
    }
    void Setgroup(int grp)
    {
        group = grp;
    }
    int Getgroup()
    {
        return group;
    }


};
int main()
{
    setlocale(LC_ALL, "RUS");
    Student obj1("Dima", "Pozdnyakov", "19.05.2004", "+380503950580", 221);
    obj1.Print();
    obj1.Input();
    obj1.Print();

}