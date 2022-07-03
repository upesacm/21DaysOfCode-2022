//21doc, day 19, Shiva 

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
K
*/

class Student
{
  public:
  int age , stand;
  string first , last;
  
  void set_age(int a)
  {
    age = a;
  }
  void set_standard(int b)
  {
    stand = b; 
  }
  void set_first_name(string c)
  {
    first = c;      
  }
  void set_last_name(string d)
  {
    last = d;
  }
  // made the set functions
  int get_age()
  {
    return age;  
  }
  int get_standard()
  {
    return stand;      
  }
  string get_first_name()
  {
    return (first);
  }
  string get_last_name()
  {
    return (last);
  }
  
  string to_string()
  {
    stringstream str1;
    char q=',';
    str1 << age << q << first << q << last << q << stand;
    return str1.str();
  }    
};



int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
