#include <iostream>
#include "Student.h"

int main()
{
    Man a("Volk",22,54,"Male");
    Man b(a);
    cout << b;
    a.set_name("kirpich");
    Student s;
    s.set_year(2006);
    s.add();
    cout<<s.get_year()<<endl;
    cout << a;
    return 0;
}
