#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <array>
using namespace std;

class mar{
	
	friend int panel();


	private:
	

	array<string,875> floor;
	vector<int>maar={394,395,396};
	int food_home=0;
	int score=0;
	
	
	public:


	mar(){  }
	
int record_m=0;
int record_c=0;
	
void nool(){
	

	floor.fill("");
	for(int n=0;n<25;n++){
	for(int m=0;m<35;m++){
	if(n==0)
	floor[35*n+m]=" *";
	if(n==24)
	floor[35*n+m]=" *";
	if(m==0||m==34)
	floor[35*n+m]="*"; }}
	
	return; }



void floor_set(){
	

	floor.fill("");
	for(int n=0;n<25;n++){
	for(int m=0;m<35;m++){
	if(n==0)
	floor[35*n+m]=" *";
	if(n==24)
	floor[35*n+m]=" *";
	if(m==0||m==34)
	floor[35*n+m]="*"; }}

	for(int m=0;m<maar.size();m++)
	floor.at(maar.at(m))="o";

	floor.at(maar.back())="@";
	floor.at(food_home)="O";
	return; }
	
	void defualt_mar(){
	
	floor[394]="o";
	floor[395]="o";
	floor[396]="@";	}
	
	
void show(bool loss,bool rgb){

HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);	
system("cls");
	cout<<"\n\n\n     Score: "<<score;
	cout<<endl;


	if(loss){



		for(int i=0;i<4;i++){

	cout<<endl<<endl;  Sleep(100);  system("cls");
	cout<<"\n\n\n     Score: "<<score;
	cout<<endl;

		for(int n=0;n<25;n++){
	cout<<endl;
	for(int m=0;m<35;m++){
	int counter=35*n+m;
	

	if(m==0)
	cout<<"    "; 

	if(rgb){
	for(int r=0;r<maar.size()-1;r++){
	if(counter==maar.at(r))
	SetConsoleTextAttribute(col,0xcc);}

	if(counter==maar.back())
	SetConsoleTextAttribute(col,0x44);

	if(m==0||n==0||m==34||n==24)
	SetConsoleTextAttribute(col,0x44);

	if(counter==food_home)
	SetConsoleTextAttribute(col,0x33);}

	else{
	for(int r=0;r<maar.size()-1;r++){
	if(counter==maar.at(r))
	SetConsoleTextAttribute(col,0xfc);}

	if(counter==maar.back())
	SetConsoleTextAttribute(col,0xf4);

	if(m==0||n==0||m==34||n==24)
	SetConsoleTextAttribute(col,0x44);

	if(counter==food_home)
	SetConsoleTextAttribute(col,0xf3);}

	
	if((n==0&&m==0)||(n==24&&m==0)||((n==24||n==0)&&m==34))
	cout<<" "; 
	if(n!=0&&n!=24)
	cout<<setw(2)<<floor[counter];
	else
	cout<<floor[counter];
	
	SetConsoleTextAttribute(col,0xf0);   }}
	cout<<endl<<endl;    Sleep(200);  system("cls");
	
	cout<<"\n\n\n     Score: "<<score;
	cout<<endl;
	
	for(int n=0;n<25;n++){
	cout<<endl;
	for(int m=0;m<35;m++){
	int counter=35*n+m;
	

	if(m==0)
	cout<<"    "; 

	if(rgb){
	for(int r=0;r<maar.size()-1;r++){
	if(counter==maar.at(r))
	SetConsoleTextAttribute(col,0xcc);}

	if(counter==maar.back())
	SetConsoleTextAttribute(col,0x44);

	if(m==0||n==0||m==34||n==24)
	SetConsoleTextAttribute(col,0x88);

	if(counter==food_home)
	SetConsoleTextAttribute(col,0x33);}

	else{
	for(int r=0;r<maar.size()-1;r++){
	if(counter==maar.at(r))
	SetConsoleTextAttribute(col,0xfc);}

	if(counter==maar.back())
	SetConsoleTextAttribute(col,0xf4);

	if(m==0||n==0||m==34||n==24)
	SetConsoleTextAttribute(col,0xf8);

	if(counter==food_home)
	SetConsoleTextAttribute(col,0xf3);}

	
	if((n==0&&m==0)||(n==24&&m==0)||((n==24||n==0)&&m==34))
	cout<<" "; 
	if(n!=0&&n!=24)
	cout<<setw(2)<<floor[counter];
	else
	cout<<floor[counter];
	
	SetConsoleTextAttribute(col,0xf0);   }} }
	SetConsoleTextAttribute(col,0xfc);
	cout<<"\n\n\tYou lost! \n";
	SetConsoleTextAttribute(col,0xf0);
	getch();
	return;}










	for(int n=0;n<25;n++){
	cout<<endl;
	for(int m=0;m<35;m++){
	int counter=35*n+m;
	

	if(m==0)
	cout<<"    "; 

	if(rgb){
	for(int r=0;r<maar.size()-1;r++){
	if(counter==maar.at(r))
	SetConsoleTextAttribute(col,0xcc);}

	if(counter==maar.back())
	SetConsoleTextAttribute(col,0x44);

	if(m==0||n==0||m==34||n==24)
	SetConsoleTextAttribute(col,0x88);

	if(counter==food_home)
	SetConsoleTextAttribute(col,0x33);}

	else{
	for(int r=0;r<maar.size()-1;r++){
	if(counter==maar.at(r))
	SetConsoleTextAttribute(col,0xfc);}

	if(counter==maar.back())
	SetConsoleTextAttribute(col,0xf4);

	if(m==0||n==0||m==34||n==24)
	SetConsoleTextAttribute(col,0xf8);

	if(counter==food_home)
	SetConsoleTextAttribute(col,0xf3);}

	
	if((n==0&&m==0)||(n==24&&m==0)||((n==24||n==0)&&m==34))
	cout<<" "; 
	if(n!=0&&n!=24)
	cout<<setw(2)<<floor[counter];
	else
	cout<<floor[counter];
	
	SetConsoleTextAttribute(col,0xf0);   }}
	cout<<endl<<endl;
	
	
	return;}
	
	
void right(){

		floor[maar.back()]="o";
		floor[maar.back()+1]="@";
		floor[maar.front()]="";
		maar.push_back(maar.back()+1);
		maar.erase(maar.begin());  }



void left(){

		floor[maar.back()]="o";
		floor[maar.back()-1]="@";
		floor[maar.front()]="";
		maar.push_back(maar.back()-1);
		maar.erase(maar.begin());  }


void down(){

		floor[maar.back()]="o";
		floor[maar.back()+35]="@";
		floor[maar.front()]="";
		maar.push_back(maar.back()+35);
		maar.erase(maar.begin());  }



void up(){

		floor[maar.back()]="o";
		floor[maar.back()-35]="@";
		floor[maar.front()]="";
		maar.push_back(maar.back()-35);
		maar.erase(maar.begin());  }
	
void grow(){

		//right
		if(maar[0]-maar[1]==1){
			floor[maar.front()+1]="o";

			maar.push_back(maar.back());
			for(int n=maar.size()-1;n>0; n--)
			maar[n]=maar[n-1];
			maar[0]=maar.front()+1; }

		//left
		if(maar[1]-maar[0]==1){
			floor[maar.front()-1]="o";

			maar.push_back(maar.back());
			for(int n=maar.size()-1;n>0; n--)
			maar[n]=maar[n-1];
			maar[0]=maar.front()-1; }


		//up
		if(maar[1]-maar[0]==35){
			floor[maar.front()-35]="o";

			maar.push_back(maar.back());
			for(int n=maar.size()-1;n>0; n--)
			maar[n]=maar[n-1];
			maar[0]=maar.front()-35; }



		//down
		if(maar[0]-maar[1]==35){
			floor[maar.front()+35]="o";

			maar.push_back(maar.back());
			for(int n=maar.size()-1;n>0; n--)
			maar[n]=maar[n-1];
			maar[0]=maar.front()+35; }
			
			return;	}



	void food(){

		srand(time(0));

		food_home=rand()%832+37;
		while (!floor[food_home].empty())
		food_home=rand()%832+37;


		floor[food_home]="O"; }

	bool food_check(){

		if(floor[food_home]==floor[maar.back()])
		{score++;  return 1;  }
		return 0; }


	bool modern_loss(){

	if(maar.back()<36||maar.back()>838||floor[maar.back()]=="*")
	return 1;

	for(int n=0;n<875;n+=35){
	if(maar.back()==n){ return 1; break; }
	if(maar.back()==n+34){ return 1; break; }}

	for(int n=0;n<maar.size()-1;n++)
	{if(maar.back()==maar.at(n)) {  return 1; break;    }}


	return 0; }


	bool classic_loss(){


	for(int n=0;n<875;n+=35){
	for(int m=0;m<maar.size();m++){
	if(maar.at(m)==n+34){ floor[maar.at(m)]="*"; maar.at(m)-=33;   break; }
	else if(maar.at(m)==n){ floor[maar.at(m)]="*";  maar.at(m)+=33;  break; } }}

	for(int m=0;m<maar.size();m++){
	if(maar.at(m)<35){ floor[maar.at(m)]=" *"; maar.at(m)+=805;   break;}
	else if(maar.at(m)>840){ floor[maar.at(m)]=" *"; maar.at(m)-=805;  break;}}

	for(int n=0;n<maar.size()-1;n++)
	{if(maar.back()==maar.at(n)) {  return 1; break;    }}
	
	return 0;}


	void last_record(int type_game){


		ifstream irec("C:\\Games\\Mar\\record.txt", ios::in);
		irec>>record_m>>record_c;  
		irec.close();

		if(score>record_c&&type_game==1)
		record_c=score;
		else if(score>record_m&&type_game==2)
		record_m=score;

		
		ofstream orec("C:\\Games\\Mar\\record.txt", ios::out);
		orec<<record_m<<endl<<record_c;  
		orec.close(); }



	int check_direc(){
		

		//right
		if(maar.back()-maar.at(maar.size()-2)==1)
		return 1;
			

		//left
		else if(maar.at(maar.size()-2)-maar.back()==1)
		return 2;

		//up
		else if(maar.at(maar.size()-2)-maar.back()==35)
		return 3;


		//down
		else if(maar.back()-maar.at(maar.size()-2)==35)
		return 4;	}
	
	
	
	int loade(int& type_game){
	HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);


		int NUM=0;
	{ifstream ciin("C:\\Games\\Mar\\mar.txt", ios::in); 	
	
	for(int n=0;n<8750;n++){

		string test;
		getline(ciin,test);
		if(test.empty()){
		NUM=n; break; }  }
		ciin.close(); }



		int count =0;
		int size=0;
		bool nametrue=false;

		system("cls");
		cout<<"\n\n\tChoose a game : \n";
		string gamename;
		
		
		//open file
		
		ifstream load_ls("C:\\Games\\Mar\\mar.txt",ios::in);
		
		for(int n=0;n<NUM;n++){
			if(count>10) break;
			string test;
			getline(load_ls,test);
			if(test.empty()) break;
			if(test[0]=='|'){
			count++;
			test[0]=0;
			cout<<"\n\t"<<test;	 }}
			cout<<"\n\t";

			cout<<"\n\n\t";
			cin>>gamename;
			



	


			ifstream load("C:\\Games\\Mar\\mar.txt",ios::in);
			
			for(int n=0;n<NUM;n++){
		
			string test;
			getline(load,test);
			
				
			
				if(test==("|"+gamename)){


					load>>food_home;
					load>>size;
					maar.clear();
					for(int m=0;m<size;m++) {int test=0; load>>test; maar.push_back(test); }
					
				
					load>>type_game;
					load>>score;
					nametrue=true; 
					break;  }}

					if(nametrue==false){
					SetConsoleTextAttribute(col,0xfc);
					cout<<"\n\n\tPlease choose one of the names ! \n\n";
					SetConsoleTextAttribute(col,0xf0);
					getch();
					system("cls");
					return(0); }



					cout<<"  \n";
					system("cls");
	char LOAD[19];
for(int n=0;n<19;n++)
LOAD[n]='=';
	
	
	for(int m=0;m<19;m++){
			SetConsoleTextAttribute(col,0xf3);
	cout<<"\n\n       L  O  A  D  I  N  G  ";
		SetConsoleTextAttribute(col,0xf1);
	cout<<    "\n       "<<LOAD<<endl;
	Sleep(70);
	LOAD[m]='*';
	system("cls");	}   
		SetConsoleTextAttribute(col,0xf0);





					load.close();
					load_ls.close();	return 0;} 





	void default_loade(int& type_game){



		ifstream load("C:\\Games\\Mar\\default_mar.txt",ios::in);
			

					int size=0;

					load>>food_home;
					load>>size;
					
					maar.clear();
					for(int m=0;m<size;m++) {int test=0; load>>test; maar.push_back(test); }
					
					load>>type_game;
					load>>score;
					
					return;}


	
	
	void save(int type_game){
	HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);

	int counter=0;
	int NUM=0;
	int flag=0;
	{ifstream ciin("C:\\Games\\Mar\\mar.txt", ios::in); 	
	
	for(int n=0;n<8750;n++){

		string test;
		getline(ciin,test);
		if(test.empty()){
		NUM=n; break; }  }
		ciin.close(); }



	ifstream number("C:\\Games\\Mar\\mar.txt",ios::in);


	for(int n=0;n<NUM;n++){
		if(counter>10) break;

		string test;
		getline(number,test);
		if(test[0]=='|'){
		counter++;
		if(counter==7)
		flag=n;  } }
		number.close();



	if(counter>10){

		ifstream clear("C:\\Games\\Mar\\mar.txt",ios::in);

		string test;
		for(int n=0;n<flag;n++)
		getline(clear,test);

		string str_t;
		string str="";
		for(int n=0; n<NUM-flag;n++){
		getline(clear,str_t);
		str+=(str_t+"\n"); }

		clear.close();


		ofstream new_ls("C:\\Games\\Mar\\mar.txt",ios::out);
		new_ls<<str;

		new_ls.close();		}





//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



	system("cls");
	string gamename;
	cout<<"\n\n\tEnter a name for the game : \n\n\t";
	cin>>gamename;
	

	ofstream save("C:\\Games\\Mar\\mar.txt", ios::out|ios::app);
		save<<"|"<<gamename<<endl;
	

		save<<food_home<<endl;

		save<<maar.size()<<endl;		

	for(int n=0;n<maar.size();n++)
		save<<maar.at(n)<<endl;

		save<<type_game<<endl;
 		save<<score<<endl;
					
	save.close();
	
	
	cout<<endl;
	system("cls");
	char SAVE[16];
for(int n=0;n<16;n++)
SAVE[n]='=';
	
	
	for(int m=0;m<16;m++){
	SetConsoleTextAttribute(col,0xf3);
	cout<<"\n\n       S  A  V  I  N  G  ";
	SetConsoleTextAttribute(col,0xf1);
	cout<<    "\n       "<<SAVE<<endl;
	Sleep(70);
	SAVE[m]='*';
	system("cls");	}  
	SetConsoleTextAttribute(col,0xf0); }
	 	
	
	void save_default(int type_game){



		ofstream save("C:\\Games\\Mar\\default_mar.txt", ios::out);
	
	
	
		save<<food_home<<endl;

		save<<maar.size()<<endl;		

	for(int n=0;n<maar.size();n++)
		save<<maar.at(n)<<endl;

		save<<type_game<<endl;
 		save<<score<<endl;
					
	save.close(); 	}	
	
	void loade_default(){








	}};







	int panel(mar& m,int& speed,int& game_type,bool& rgb,int& rgb_n){
	HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);
	int z=0;
	int speed_n=0;

	
		
	ii:
	system("cls");
	SetConsoleTextAttribute(col,0xf1);
	cout<<"\n\n\n\t1.Continue game\n\n\t2.New game \n\n\t3.Load game\n\n\t4.Save game\n\n\t5.Speed";
	if(rgb)
	cout<<"\n\n\t6.RGB [ON]\n\n\t7.Last record\n\n\t8.Exit\n\n\t";
	if(!rgb)
	cout<<"\n\n\t6.RGB [OFF]\n\n\t7.Last record\n\n\t8.Exit\n\n\t";
	SetConsoleTextAttribute(col,0xf0);
	SetConsoleTextAttribute(col,0xf0);
	i:   cin>>z;


	switch(z){

		case 1:
		system("cls");
		return 1;

		break;


		case 2:
		system("cls");
		return 2;

		break;


		case 3:

		system("cls");
		m.loade(game_type);
		m.floor_set();
		m.show(0,rgb);
		return 3;

		break;

		case 4:

		system("cls");
		m.save(game_type);
		return 1;
			
		break;


		case 5:



		x2:
		  	system("cls");
		  	  SetConsoleTextAttribute(col,0xf3);
		  if(speed_n==1)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"\n\n\t1.Slow\n\n\t";
		  SetConsoleTextAttribute(col,0xf3);
		  if (speed_n==2)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"2.Normal\n\n\t";
		  SetConsoleTextAttribute(col,0xf3);
		  if (speed_n==3)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"3.Fast\n\n\t";
		  SetConsoleTextAttribute(col,0xf0);
		 
		  cin>>speed_n;
		  if(speed_n!=1&&speed_n!=2&&speed_n!=3)
		  goto x2;

			if(speed_n==1)
			speed=600;
			else if(speed_n==2)
			speed=300;
			else if(speed_n==3)
			speed=100;


		  goto ii;  


		break;


		case 6:

		rgb_n++;
		if(rgb_n%2==0)
		rgb=1;
		else
		rgb=0;

		system("cls");

		goto ii;


		break;



		case 7:


		system("cls");
		SetConsoleTextAttribute(col,0xf5);
	cout<<"\n\n\tModern game record : "<<m.record_m;
	cout<<"\n\n\tClassic game record : "<<m.record_c<<endl;
	SetConsoleTextAttribute(col,0xf0);
	getch ();	
	system("cls");
	goto ii;



		break;



		case 8:

		
		SetConsoleTextAttribute(col,0xf1);
		cout<<"\n\n\n\tThanks for your use.\n\n\tDeveloper: Mohammad Karimi.\n";
		  SetConsoleTextAttribute(col,0xf0);
		  getch();
		  return 0;		


		  break;


		default:

		SetConsoleTextAttribute(col,0xfc);
    cout<<"\n\n\tPlease select one of the options : ";
    	SetConsoleTextAttribute(col,0xf0); 
		goto i;    }  }

int main(){
	HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color f0");
	start :

	bool rgb=true;
	int rgb_n=0;
	int x=0,z=0;
	int last_x=0;
	int speed=300;
	int game_type=2;
	int speed_n=2;
	bool right=false;
	bool left=false;
	bool up=false;
	bool down=false;
	int pan=0;
	bool time1=true;
	mar m;
	m.nool();
	m.defualt_mar();
	m.last_record(game_type);
	system("cls");

	cout<<"\n\tHi, welcome to Mar\n";

	ii:
	SetConsoleTextAttribute(col,0xf1);
	cout<<"\n\n\n\t1.Start game\n\n\t2.Continue game\n\n\t3.Load game\n\n\t4.Game type\n\n\t5.Speed";
	if(rgb)
	cout<<"\n\n\t6.RGB [ON]\n\n\t7.Last record\n\n\t8.Exit\n\n\t";
	if(!rgb)
	cout<<"\n\n\t6.RGB [OFF]\n\n\t7.Last record\n\n\t8.Exit\n\n\t";
	SetConsoleTextAttribute(col,0xf0);
	i:   cin>>z;


	switch(z){


		case 2:

		m.default_loade(game_type);
		m.floor_set();
		system("cls");
		m.show(0,rgb);
		time1=false;
		goto contin;

		break;

		case 1:
		break;

		case 3:

		m.loade(game_type);
		m.floor_set();
		system("cls");
		m.show(0,rgb);
		goto contin;

		break;

		case 4:

				x1:
		  	system("cls");
		  	  SetConsoleTextAttribute(col,0xf3);
		  if(game_type==1)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"\n\n\t1.Classic\n\n\t";
		  SetConsoleTextAttribute(col,0xf3);
		  if(game_type==2)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"2.Modern\n\n\t";
		  SetConsoleTextAttribute(col,0xf0);
		 
		  cin>>game_type;
		  if(game_type!=1&&game_type!=2)
		  goto x1;
				system("cls");
				goto ii;  

		break;


		case 5:


			x2:
		  	system("cls");
		  	  SetConsoleTextAttribute(col,0xf3);
		  if(speed_n==1)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"\n\n\t1.Slow\n\n\t";
		  SetConsoleTextAttribute(col,0xf3);
		  if (speed_n==2)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"2.Normal\n\n\t";
		  SetConsoleTextAttribute(col,0xf3);
		  if (speed_n==3)
		  SetConsoleTextAttribute(col,0xfb);
		  cout<<"3.Fast\n\n\t";
		  SetConsoleTextAttribute(col,0xf0);
		 
		  cin>>speed_n;
		  if(speed_n!=1&&speed_n!=2&&speed_n!=3)
		  goto x2;

			if(speed_n==1)
			speed=600;
			else if(speed_n==2)
			speed=300;
			else if(speed_n==3)
			speed=100;


				system("cls");
		  goto ii;  

		break;


		case 6:

		rgb_n++;
		if(rgb_n%2==0)
		rgb=1;
		else
		rgb=0;


		system("cls");

		goto ii;


		break;


		case 7:

		system("cls");
		SetConsoleTextAttribute(col,0xf5);
	cout<<"\n\n\tModern game record : "<<m.record_m;
	cout<<"\n\n\tClassic game record : "<<m.record_c<<endl;
	SetConsoleTextAttribute(col,0xf0);
	getch ();	
	system("cls");
	goto ii;
		break;


		case 8:
		SetConsoleTextAttribute(col,0xf1);
		cout<<"\n\n\n\tThanks for your use.\n\n\tDeveloper: Mohammad Karimi.\n";
		  SetConsoleTextAttribute(col,0xf0);
		  getch();
		  return 0;		

		break;



		default:

		SetConsoleTextAttribute(col,0xfc);
    cout<<"\n\n\tPlease select one of the options : ";
    	SetConsoleTextAttribute(col,0xf0); 
		goto i;    }



	SetConsoleTextAttribute(col,0xf5);
	cout<<"\n\n\tWherever you are in the game,\n\tEnter the < P > to display the panel.\n";
	SetConsoleTextAttribute(col,0xf0);
	getch ();	




	//PART 1
	
char START[28];
for(int n=0;n<28;n++)
START[n]='=';
	
		
	for(int m=0;m<28;m++){
		SetConsoleTextAttribute(col,0xf3);
	cout<<"\n\n       S  T  A  R  T     G  A  M  E ";
		SetConsoleTextAttribute(col,0xf1);
	cout<<    "\n       "<<START<<endl;
	Sleep(37);
	START[m]='*';
	system("cls");	}
	
		SetConsoleTextAttribute(col,0xf0);

	m.show(0,rgb);
	contin:


		k:
		x=getch();
		if(x==224)
		x=getch();

		
		if((x==54||x==100||x==77)&&m.check_direc()!=2)
		right=true;
		else if((x==52||x==97||x==75)&&m.check_direc()!=1)
		left=true;
		else if((x==56||x==119||x==72)&&m.check_direc()!=4)
		up=true;  
		else if((x==50||x==115||x==80)&&m.check_direc()!=3)
		down=true; 
		else if(x==112){

			pan=panel(m,speed,game_type,rgb,rgb_n);

			switch (pan){


			case 0:
			return 0;
			break;


			case 1:
			system("cls");
			m.show(0,rgb);
			goto k;
			break;
			
			case 2:
			goto start;
			break;
			
			
			case 3:
			time1=false;
			goto contin;
			break;	}	}

		else{
			SetConsoleTextAttribute(col,0xfc);
    cout<<"\n\n\tPlease press the correct key! ";
    		SetConsoleTextAttribute(col,0xf0);
			goto k; }


	 if((x==54||x==100||x==77)&&(last_x==52||last_x==97||last_x==75))
		{right=0; left=1; x=last_x;}
		else if((last_x==54||last_x==100||last_x==77)&&(x==52||x==97||x==75))
		{right=1; left=0; x=last_x;}
		else if((x==56||x==119||x==72)&&(last_x==50||last_x==115||last_x==80))
		{down=1;   up=0; x=last_x;}
		else if((last_x==56||last_x==119||last_x==72)&&(x==50||x==115||x==80))
		{down=0;   up=1; x=last_x;}


		last_x=x;



	if(time1)
	m.food();
	time1=0;
	system("cls");


//************************WHILE*****************************


	while (1)
	{	m.show(0,rgb);



		m.last_record(game_type);
		m.save_default(game_type);

		if(game_type==2)
		{if(m.modern_loss()){
		m.show(1,rgb);
		int z=0;
		SetConsoleTextAttribute(col,0xf1);
		cout<<"\n\n\t1.New game\n\n\t..Exit\n\n\t";
		SetConsoleTextAttribute(col,0xf0); cin>>z; if(z==1) goto start; return 0; }}

		else if(game_type==1)
		{if(m.classic_loss()){
		m.show(1,rgb);
		int z=0;
		SetConsoleTextAttribute(col,0xf1);
		cout<<"\n\n\t1.New game\n\n\t..Exit\n\n\t";
		SetConsoleTextAttribute(col,0xf0); cin>>z; if(z==1) goto start; return 0; }}
		


		if(right)
		m.right();
		else if(left)
		m.left();
		else if(up)
		m.up();
		else if(down)
		m.down();

		if(m.food_check()){ m.grow();  m.food(); }


		Sleep(speed);
		system("cls");



		if(kbhit()){
		right=false;
		 left=false;
		 up=false;
		 down=false;

		x=getch();
		if(x==224)
		x=getch();



		L:
		if(x==54||x==100||x==77)
		right=true;
		else if(x==52||x==97||x==75)
		left=true;
		else if(x==56||x==119||x==72)
		up=true;
		else if(x==50||x==115||x==80)
		down=true;
		else if(x==112){

			pan=panel(m,speed,game_type,rgb,rgb_n);

			switch (pan){


			case 0:
			return 0;
			break;

			case 1:
			system("cls");
			m.show(0,rgb);
			goto k;
			break;
			
			case 2:
			goto start;
			break;
			
			case 3:
			time1=false;
			goto contin;
			
			break;	}	}

		else{
		x=last_x;
		goto L;}



		 if((x==54||x==100||x==77)&&(last_x==52||last_x==97||last_x==75))
		{right=0; left=1; x=last_x;}
		else if((last_x==54||last_x==100||last_x==77)&&(x==52||x==97||x==75))
		{right=1; left=0; x=last_x;}
		else if((x==56||x==119||x==72)&&(last_x==50||last_x==115||last_x==80))
		{down=1;   up=0; x=last_x;}
		else if((last_x==56||last_x==119||last_x==72)&&(x==50||x==115||x==80))
		{down=0;   up=1; x=last_x;}


	   

		last_x=x;
		 }	}
	
	
	
	
return 0 ; }