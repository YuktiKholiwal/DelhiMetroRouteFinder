#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
#define Yellow 1001
#define Blue 1002
#define Violet 1005
#define MAX 200
#define MAXMATCH 15
#define infinity 9999
#define NIL -1
#define TEMP 0
#define PERM 1
int checkJunc;
int adj[MAX][MAX];
int predecessor[MAX];
int pathLength[MAX];
int status[MAX];
int Match3[MAXMATCH];
int top=-1;
void push3(int data);
int pop3();
int station(char Name[30]); //Getting designated number of the source/destination names
void leftSame(int destColor);
void rightSame(int destColor);
void createGraph();
void dijkstra(int sourceNumber);
int min_temp();
void findPath(int sourceNumber,int destNumber,int sourceColor);
int joLeRi(int a,int t);
void numToName(int t);
void headingWhere(int vb);
void headingWhere2(int vb);
int colorDecider(int Number);
int main()
{
int sourceColor,destColor,sourceNumber,destNumber,item=-10,manualcheck;
char sourceName[30];
char destName[30];
/*source station part begins here*/
printf("\nEnter the Source Station Name\n");
gets(sourceName);
sourceNumber = station(sourceName);
//Source Line decider
sourceColor = colorDecider(sourceNumber);
/*Source part ends here*/
/*Destination part begins from here*/
printf("\nEnter the Destination Station Name\n");
scanf(" %30[^\n]%*c",destName);
destNumber = station(destName);
if(destNumber==sourceNumber)
{
printf("\nSource and Destination Stations are the same\n");
exit(1);
} 
