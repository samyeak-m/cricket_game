#include<iostream>
#include<ctime>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include<cctype> 
#include<math.h>
#define charToInt(c) (c-'0')

using namespace std;

class start
{
	private:
		
		string choose;
		string team;
		string toss;
		string option;
		string mchoose;
		string mteam;
		string moption;
		string lteam;
		string loption;
	
		char nt [11] [11]= {"Ishan","Paras","Aarif","Dipendra","Binod","Sundeep","Sompal","Karan","Sandeep","Sushan","Abinash"};
		char it [11] [11]= {"Rohit","Rahul","Virat","Shreyas","Manish","Shikhar","Ravindra","Mohammed","Kuldeep","Navdeep","Jasprit"};
		char nb [10] [10]= {"Sompal","Karan","Sompal","Sandeep","Karan","Sushan","Sandeep","Abinash","Sushan","Abinash"};
		char ib [10] [10]= {"Ravindra","Mohammed","Ravindra","Mohammed","Kuldeep","Navdeep","Kuldeep","Jasprit","Navdeep","Jasprit"};
		
		string nepal={"Nepal"};
		string india={"India"};
		string bat={"Bat"};
		string bowl={"Bowl"};
		
		string yes;
		string run;
		string srun;
		
		int bt=0;
		int o=1;
		int br=0;
		int wt=0;
		
		int sbt=0;
		int so=1;
		int sbr=0;
		int swt=0;
		
		int g;
		int sum=0;
		int sums=0;
		int total=0;
		string apple;
		string sapple;
		string fings;
		string sings;
		string alpha,num,temp="";
		
		public:
				
			void match()
			{
				
				cout<<""<<endl;
				
				cout<<"				ICC Word Cup T20"<<endl<<endl;
				
				cout<<"				 Nepal Vs India"<<endl<<endl;
				
				cout<<"	Team Nepal					Team India"<<endl<<endl;
				
				cout<<"	Ishan						Rohit"<<endl;
				cout<<"	Paras						Rahul"<<endl;
				cout<<"	Aarif						Virat"<<endl;
				cout<<"	Dipendra					Shreyas"<<endl;
				cout<<"	Binod						Manish"<<endl;
				cout<<"	Sundeep						Shikhar"<<endl;
				cout<<"	Sompal						Ravindra"<<endl;
				cout<<"	Karan						Mohammed"<<endl;
				cout<<"	Sandeep						Kuldeep"<<endl;
				cout<<"	Sushan						Navdeep"<<endl;
				cout<<"	Abinash						Jasprit"<<endl<<endl;
				
				cout<<"				Coin Toss"<<endl<<endl;
				
			}
			
			void cointoss()
			{
				
				{
					cout<<"Choose a team."<<endl;
					cin>>mteam;
					cout<<endl<<endl;
					lteam=mteam;
				}
				
				srand (time(NULL));	
					const string ht[2]={"Head","Tail"};
					choose= ht[rand()%2];
				
				srand (time(NULL));
					const string in[4]={"Nepal","India","Nepal","India"};
					team= in[rand()%4];
					
				srand (time(NULL));
					const string th[6]={"Tail","Head","Head","Tail","Tail","Head"};
					toss= th[rand()%6];
					
				srand(time(NULL));					
					const string fb[8]={"Bat","Bowl","Bowl","Bat","Bowl","Bowl","Bat","Bat"};	
					option=fb[rand()%8];
						
				if(mteam==team)
				{
					{
						cout<<"Choose Head  or Tail."<<endl;
						cin>>mchoose;
						cout<<endl<<endl;
					}
					
				cout<<"Coint Toss: "<<toss<<endl<<endl;
				
					if(mchoose==toss)
					{
						cout<<"You have won the toss."<<endl<<endl<<"What do you want to do first ?"<<endl<<"\t[Bat or Bowl]"<<endl;
						cin>>moption;
						cout<<endl<<endl;
						loption=moption;
					}
				
					if(mchoose!=toss)
					{
						cout<<"Team "<<team<<" has loss the toss."<<endl<<"Team "<<team<<" is going to "<<option<<" first."<<endl<<endl;
						lteam=team;
						loption=option;
					}
				}
				
				if(mteam!=team)
				{
					{
						cout<<"Team "<<team<<" has choose "<<choose<<endl<<endl;
					}
					
				cout<<"Coint Toss: "<<toss<<endl<<endl;
				
					if(choose!=toss)
					{
						cout<<"You have won the toss."<<endl<<endl<<"What do you want to do first ?"<<endl<<"\t[Bat or Bowl]"<<endl;
						cin>>moption;
						cout<<endl<<endl;
						loption=moption;
					}
				
					if(choose==toss)
					{
						cout<<"Team "<<team<<" has loss the toss."<<endl<<"Team "<<team<<" is going to "<<option<<" first."<<endl<<endl;
						lteam=team;
						loption=option;
					}
				
				}
					
			}
			
			void fing()
			{
				{
				
					if(loption==bat)
					{
						if(lteam==nepal)
						{
							goto nep;
						}
						
						if(lteam==india)
						{
							goto ind;
						}
					}
					
					if(loption==bowl)
					{
						if(lteam==nepal)
						{
							goto ind;
						}
						
						if(lteam==india)
						{
							goto nep;
						}
					}
				}
				
				{
				
					{
						nep:
						{
							cout<<"\t\t\t\t    1st ings"<<endl<<endl;
							cout<<"\t\t\t\tStart the match?"<<endl;
							cin>>yes;
							if(yes=="Yes")
							{
								goto fnep;
							}
							if(yes!="Yes")
							{
								goto nep;
							}
						}
					}
					
					{	
						ind:
						{
							cout<<"\t\t\t\t    1st ings"<<endl<<endl;
							cout<<"\t\t\t\tStart the match?"<<endl;
							cin>>yes;
							if(yes=="Yes")
							{
								goto find;
							}
							if(yes!="Yes")
							{
								goto ind;
							}
						}
					}
				}
				
				{
					fnep:
					{
						fings="Nepal";
					 do{
						cout<<"Batsman\t:\t"<<nt[bt]<<endl;
						cout<<"Bowler\t:\t"<<ib[br]<<endl<<endl;
						
					const string r[7]={"0","1","2","3","4","W","6"};
						cout<<"Runs\t:\t";
						for(int i=1;i<=6;i++)
						{
							run = r[rand()%7];
							apple+=run;
							cout<<run<<' ';
							
							
							if(run=="W")
							{
								bt++;
								cout<<endl<<"\n\t[ Next batsman\t:\t"<<nt[bt]<<" ]"<<endl<<endl<<"Batsman\t:\t"<<nt[bt]<<endl;
								cout<<"Bowler\t:\t"<<ib[br]<<endl<<endl;
								wt++;
								
								
								{
									if(wt>=10)
									{
										cout<<endl<<endl;
										cout<<"\t\t\tover : "<<o<<"\tWicket : "<<wt<<endl<<endl;
										goto target;
									}	
								}
							}
						}
						cout<<endl<<endl;
						cout<<"\t\t\tover : "<<o<<"\tWicket : "<<wt<<endl<<endl;
						o++;
						br++;
					
						}while(o<=10);
						
						{
							if(o>=10)
							{
								goto target;
							}
						}
						target:
						{	
							for(g=0;g<apple.length();g++)
							if(isdigit(apple[g]))
							{	
								int a=charToInt(apple[g]);
								sum+=a;
							}
	
							total=sum+1;
							cout<<"\n\nTotal : "<<sum<<endl<<endl;
							cout<<"Target : "<<total<<endl<<endl;
							goto sind;	
						}
					}
				
				}
				
				{
					find:
					{
						fings="India";
					 do{
						cout<<"Batsman\t:\t"<<it[bt]<<endl;
						cout<<"Bowler\t:\t"<<nb[br]<<endl<<endl;
						
					const string r[7]={"0","1","2","3","4","W","6"};
						cout<<"Runs\t:\t";
						for(int i=1;i<=6;i++)
						{
							run= r[rand()%7];
							cout<<run<<' ';
							apple+=run;
							
							
							if(run=="W")
							{
								bt++;
								cout<<endl<<"\n\t[ Next batsman\t:\t"<<it[bt]<<" ]"<<endl<<endl<<"Batsman\t:\t"<<it[bt]<<endl;
								cout<<"Bowler\t:\t"<<nb[br]<<endl<<endl;
								wt++;
								
								{
									if(wt>=10)
									{
										cout<<endl<<endl;
										cout<<"\t\t\tover : "<<o<<"\tWicket : "<<wt<<endl<<endl;
										goto traget;
									}
								}
							}
						}
						cout<<endl<<endl;
						cout<<"\t\t\tover : "<<o<<"\tWicket : "<<wt<<endl<<endl;
						o++;
						br++;
						
						}while(o<=10);
						
						{
							if(o>=10)
							{
								goto traget;
							}
						}
							
						traget:
						{
							for(g=0;g<apple.length();g++)
							if(isdigit(apple[g]))
							{	
								int a=charToInt(apple[g]);
								sum+=a;
							}
							
							total=sum+1;
							cout<<"\n\nTotal : "<<sum<<endl<<endl;
							cout<<"Target : "<<total<<endl<<endl;
							goto snep;
						}
					}
						
				}
				
				
				
				{
				
					{
						snep:
						{
							cout<<"\t\t\t\t    2nd ings"<<endl<<endl;
							cout<<"\t\t\t\tStart the match?"<<endl;
							cin>>yes;
							if(yes=="Yes")
							{
								goto lnep;
							}
							if(yes!="Yes")
							{
								goto snep;
							}
						}
					}
					
					{	
						sind:
						{
							cout<<"\t\t\t\t    2nd ings"<<endl<<endl;
							cout<<"\t\t\t\tStart the match?"<<endl;
							cin>>yes;
							if(yes=="Yes")
							{
								goto lind;
							}
							if(yes!="Yes")
							{
								goto sind;
							}
						}
					}
				}
				
				{
					lnep:
					{
						sings="Nepal";
						cout<<endl<<endl<<"\tTeam "<<sings<<" is going to bat."<<endl<<endl;
					 do{
						cout<<"Batsman\t:\t"<<nt[sbt]<<endl;
						cout<<"Bowler\t:\t"<<ib[sbr]<<endl<<endl;
						
					const string r[7]={"0","1","2","3","4","W","6"};
						cout<<"Runs\t:\t";
						for(int i=0;i<=5;i++)
						{
							srun= r[rand()%7];
							cout<<srun<<' ';
							sapple+=srun;
							
							int ssum=0;
							string salpha,snum,stemp="";
							for(int s=0;s<sapple.length();s++)
							if(isdigit(sapple[s]))
							{	
								int b=charToInt(sapple[s]);
								ssum+=b;
								sums=ssum;
								
								if (ssum>=total)
								{	
									cout<<endl<<endl;
									cout<<"\t\t\tover : "<<so<<"\tWicket : "<<swt<<endl<<endl;
									goto final;
								}
								
							}
							
							if(srun=="W")
							{
								sbt++;
								cout<<endl<<"\n\t[ Next batsman\t:\t"<<nt[sbt]<<" ]"<<endl<<endl<<"Batsman\t:\t"<<nt[sbt]<<endl;
								cout<<"Bowler\t:\t"<<ib[sbr]<<endl<<endl;
								swt++;
								
								{
							
									if(swt>=10)
									{
										cout<<endl<<endl;
										cout<<"\t\t\tover : "<<so<<"\tWicket : "<<swt<<endl<<endl;
										goto final;
									}
									
								}
							}
						}
						cout<<endl<<endl;
						cout<<"\t\t\tover : "<<so<<"\tWicket : "<<swt<<endl<<endl;
						so++;
						sbr++;
						
						}while(so<=10);
						
						{
							if(so>=10)
							{
								goto final;
							}
						}
							
					}
				
				}
				
				{
					lind:
					{
						sings="India";
						cout<<endl<<endl<<"\tTeam "<<sings<<" is going to bat."<<endl<<endl;
					 do{
						cout<<"Batsman\t:\t"<<it[sbt]<<endl;
						cout<<"Bowler\t:\t"<<nb[sbr]<<endl<<endl;
						
					const string r[7]={"0","1","2","3","4","W","6"};
						cout<<"Runs\t:\t";
						for(int i=0;i<=5;i++)
						{
							srun= r[rand()%7];
							cout<<srun<<' ';
							sapple+=srun;
							
							int ssum=0;
							string salpha,snum,stemp="";
							for(int s=0;s<sapple.length();s++)
							if(isdigit(sapple[s]))
							{	
								int b=charToInt(sapple[s]);
								ssum+=b;
								sums=ssum;
								
								if (ssum>=total)
								{
									cout<<endl<<endl;
									cout<<"\t\t\tover : "<<so<<"\tWicket : "<<swt<<endl<<endl;
									goto final;
								}
							}
														
							if(srun=="W")
							{
								sbt++;
								cout<<endl<<"\n\t[ Next batsman\t:\t"<<it[sbt]<<" ]"<<endl<<endl<<"Batsman\t:\t"<<it[sbt]<<endl;
								cout<<"Bowler\t:\t"<<nb[sbr]<<endl<<endl;
								swt++;
								
								{
									if(swt>=10)
									{
										cout<<endl<<endl;
										cout<<"\t\t\tover : "<<so<<"\tWicket : "<<swt<<endl<<endl;
										goto final;
									}
								}
							}
						}
						cout<<endl<<endl;
						cout<<"\t\t\tover : "<<so<<"\tWicket : "<<swt<<endl<<endl;
						so++;
						sbr++;	
						
						}while(so<=10);	
						
						if(so>=10)
						{
							goto final;
						}
					}
						
				}
				
				{
					final:
					{
						cout<<endl<<endl<<"Total Runs : "<<sums<<endl;
						cout<<"Target : "<<total<<endl<<endl;
						goto result;
					}
						
					result:
					{
						if(sum>sums)
						{
							int by=sum-sums;
								cout<<"Team "<<fings<<" has won the match by "<<by<<" runs."<<endl<<endl<<"\t\t\t\tThank you";
						}
							
						if(sums>sum)
						{
							int wk=10-swt;
								cout<<"Team "<<sings<<" has won the match by "<<wk<<" wickets."<<endl<<endl<<"\t\t\t\tThank you";
						}
					}
				}
			}		
};

int main()
{
	
	start s1;
	
	s1.match();
	s1.cointoss();
	s1.fing();

}
