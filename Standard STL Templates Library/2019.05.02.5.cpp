#include <iostream>
#include <map>

using namespace std;

template<typename f, typename s>
void print_Multimap(const multimap<f,s> &MM)
{
    for(i:MM)
        cout<<i.first<<" - "<<i.second<<"$"<<endl;
}

int main()
{
    setlocale(LC_ALL,"RUS");
    multimap<string, int> myMultimap;

    myMultimap.emplace("�������", 1000);
    myMultimap.emplace("�������", 2000);
    myMultimap.emplace("�������", 2000);
    myMultimap.emplace("���������", 3000);

    print_Multimap(myMultimap);

    return 0;
}
