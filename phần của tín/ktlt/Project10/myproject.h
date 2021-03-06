#include <iostream>
#include <io.h>
#include<sstream>
#include <fcntl.h>
#include <string>
#include<fstream>
#include<iomanip>
#include <windows.h>
#include<codecvt>
#include<locale>
#define N 50
using namespace std;

struct node
{
	wstring No; wstring ID; wstring socialID;
	wstring firstname; wstring lastname; wstring gender; wstring dateofbirth;
	wstring totalmark; wstring midtermmark;
	wstring finalmark; wstring orthermark;
	node* pnext;
};


void addnewstudent(wstring classx, node* phead);
void inputstudentscore(wstring classx, node*& phead);
void liststudent(node* phead);
void liststudentwithscore(node* phead);
void importscoreboard(wstring classx, node*& phead);
void deletelist(node*& phead);
void addscoreofnewstudet(wstring classx, node* phead);