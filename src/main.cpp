#include <iostream>
#include <ctime>
#include <string>

using namespace std;


int
main ()
{

  int opcao, escape;
  int vidas = 3;
  string name;
  srand (time (NULL));

  cout << "Digite o seu nome: ";
  cin >> name;

  while (vidas > 0)
	{

	  cout << "O que deseja fazer?" << endl;
	  cout << "1) Tentar pegar a chave dos guardas." << endl;
	  cout << "2) Tentar escapar (barulhento)" << endl;
	  cout << "Digite o que você quer fazer: ";
	  cin >> opcao;
	  cout << endl << endl;
	  if (opcao == 1)
		{
		  escape = rand () % 2;
		  if (escape == 1)
			{
			  cout << "ISSO! Você conseguiu!" << endl;
			  break;
			}
		  else
			{
			  cout << "Putz, você foi pego pelos guardas." << endl;
			}
		}
	  else if (opcao == 2)
		{
		  escape = rand () % 2;
		  if (escape == 1)
			{
			  cout << "Boa, você conseguiu fugir. Parabéns, " << name << "!"
				<< endl;
			  break;
			}
		  else
			{
			  cout << "Hahaha, se lascou. Não deu certo." << endl;
			  vidas--;
			  cout << "Você tem apenas " << vidas << " vidas restantes." <<
				endl;
			}
		}
	}
  if (vidas == 0)
	{
	  cout << "Você perdeu todas as vidas. Game over!" << endl;
	}

  return 0;
}
