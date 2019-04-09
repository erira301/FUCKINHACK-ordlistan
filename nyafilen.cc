#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

template<typename T>
void read (vector<T>& inguy,istream& is)
{
  istream_iterator <T> eos;
  istream_iterator<T> isit (is);
  copy(isit,eos, inserter(inguy,inguy.begin()) );
}


template<typename T>
auto clean (vector<T> & hejsan,set<T> & hej)
{
  int temp = 0;
  for(auto it = hejsan.begin(); it!= hejsan.end(); ++it)
    {
      if(!hej.insert(*it).second)
	{
	  temp++;
	}
    }
  return temp;
}

template<typename T>
void print(set<T> & item, ostream & os)
{
  copy(item.begin(), item.end(),ostream_iterator<T> {os," "});   
}


int main()
{
  vector<string> hej;
  read (hej,cin);
  
  set<string> words_count_dracula;
  read (hej,cin);
  int i = clean(hej,words_count_dracula);
  print(words_count_dracula,cout);
  cout<<"\ntotalt antal dubletter: "<<i<<'\n';
    // 1. Skapa en lämplig behållare
    
    // 2. Fyll behållaren med hjälp av istream_iterator
    //    Ta bort eventuella dubletter
    //    Räkna hur många dubletter det var

    // 3. Skriv ut behållaren med  ostream_iterator

    // 4. Skriv ut antalet dubletter

}
