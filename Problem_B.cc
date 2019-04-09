#include <iostream>
#include <iterator>
#include <algorithm>
#include <map>
using namespace std;

template<typename T>
void read (map<T,unsigned int>& inguy,istream& is)
{
  //använd DETTA!!!!!!!!!!!!!!!!!!!!!
  istream_iterator <T> eos;
  istream_iterator<T> isit (is);
  for_each(isit, eos,[&inguy](T tjenare){++inguy[tjenare];});
}


template<typename T>
void print(map<T,unsigned int> & item, ostream & os)
{
  unsigned int temp = 0;
  ostream_iterator<T> it{os," "};

  for(auto it : item)
  {
      os<<it.first << ' '<<it.second<<'\n';
      temp += it.second-1;
    }

  os<<"\ntotalt antal kopior: "<<temp<<'\n';
    
}


int main()
{
  map<string, unsigned int> words_count_dracula;
  read (words_count_dracula,cin);
  print(words_count_dracula,cout);
  int hej{};
  cout<<"hej: "<<hej;
    // 1. Skapa en lämplig behållare
    
    // 2. Fyll behållaren med hjälp av istream_iterator
    //    Ta bort eventuella dubletter
    //    Räkna hur många dubletter det var

    // 3. Skriv ut behållaren med  ostream_iterator

    // 4. Skriv ut antalet dubletter

}
