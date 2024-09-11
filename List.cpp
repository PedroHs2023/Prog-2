#include <iostream>
#include <vector> 
#include <sstream>


using namespace std;

int main()
{
  vector<string>list;

  while (true)
  {
    int op;

    cout << "**********Menu**********"     << endl;
    cout << "1 - Adicionar um objeto "     << endl;
    cout << "2 - Imprimir os objeto  "     << endl;
    cout << "3 - Buscar as palavras  "     << endl;
    cout << "4 - Buscar por letras   "     << endl;
    cout << "5 - Remover um indice   "    << endl;
    cout << "0 - Sair                "     << endl;

    cout <<"Opcao escolhida: ";
    cin >>op;

    if(op == 1)
    {
      string w;
      cout << "Digite a palavra: " ;
      cin >> w;
      list.push_back(w);
      continue;
    }
    if(op == 2)
    {
      for (size_t i = 0; i < list.size(); i ++)
       {
          cout << i << " " << list.at(i) << endl;
       }
        
    }
    if(op == 3)
    {
      string search;
      cout << "Digite a palavra que voce procura: ";
      cin >> search;
      for (size_t i = 0; i < list.size(); i++)
        {
          
          if (list[i] == search )
          {
             cout << "Palavra escolhida: " << list[i] << " Posicao: " << i << endl;
          }
          
        }
      continue;  
    }
    if(op == 4)
    {
      string searchsub;
      cout << "Digite a substring que voce quer encontrar: ";
      cin >> searchsub;
      vector<string> results;
      for (const string& str : list)
      {
         if (str.find(searchsub) != string::npos)
         {
            results.push_back(str);
         }
         
      }

      cout << "Achou " << results.size() << " substring contendo: " << searchsub << endl;
      for (const string& str : results)
      {
        cout << str << endl;
      }
        
      
      continue;
    }
    if(op == 5)
    {
      int i;
      cout << "Digite a index que vc quer remover: ";
      cin >> i;
      list.erase(list.begin() + i);
    }
    if(op == 0)
    {
        break;
    }
  }
  return 0;
}