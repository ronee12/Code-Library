#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include <iostream>
#include<string.h>
#include <vector>
#include <deque>
#include<list>
#include<set>
#include <algorithm>
#include<stdlib.h>
#define siz 20000
#define sez 2000
using namespace std;

void vector1()
{
	vector<int> coll;
	int i,p=3;
	for(i=1;i<=6;i++)
	{
		//coll.insert(coll.begin() + i-1,i);
		coll.push_back(i);
	}
	for(i=0;i<coll.size();i++)
	{
		printf("%d ",coll[i]);
	coll.erase (coll.begin()+p);
	}
	/*coll.insert(coll.begin() + p,2);
	printf("\n");
	for(i=1;i<coll.size();i++)
		printf("%d ",coll[i]);*/
	//sort (v.begin(), v.begin()+siz);
}
void deque1()
{
	deque<float> coll;
	int i;
	for(i=1;i<=6;i++)
		coll.push_front(i*1.1);
	for(i=0;i<coll.size();i++)
		printf("%f ",coll[i]);
}
void deque_arrary()
{
	deque<int> coll;
	int i;
	for(i=1;i<=6;i++)
		coll.push_front(i);
	for(i=0;i<coll.size();i++)
		printf("%d ",coll[i]);
}

void list1()
{
	list<char> coll;
	int i;
	for(i=0;i<=6;i++)
		coll.push_back(i+'a');
	/*while(!coll.empty())
	{
		printf("%c ",coll.front());
		coll.pop_front();
	}*/
	list<char>::const_iterator pos;
	for(pos=coll.begin();pos!=coll.end();++pos)
		printf("%c ",*pos);
}
void set1()
{
	int i;
	typedef std::set<int> Intset;
	Intset coll;
	//for(i=0;i<10;i++)
		coll.insert(i);
	Intset::const_iterator pos;
	for(pos=coll.begin();pos!=coll.end();++pos)
		printf("%d ",*pos);
}
int main()
{
	//freopen("input.txt","r",stdin);
	/*char (*mx)[sez];
	int (*ab)[sez];
	
		mx = (char (*)[sez]) malloc(sizeof(char) * siz * sez);
		if (mx == NULL)
		{
			printf("Not enough memory!\n");
			return 0;
		}
		ab = (int (*)[sez]) malloc(sizeof(int) * siz * sez);*/
	vector1();
	//deque1();
	//deque_arrary();
	
	return 0;
}