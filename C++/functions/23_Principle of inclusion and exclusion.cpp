/*
		ame = harshwardhan tilekar
		roll no = 23
		title = Design ad implement a program for survey information of 
					sports using priciple of inclusion ad exclusion.
*/



#include<iostream>
using namespace std  ;
#define max 100
 
class pie
{
	
	public :
		
		// to get data 
		void getdata_2(int na , int nb , int a[] , int b[]) ;// for 2 sets
		void getdata_3(int na , int nb , int nc , int a[] , int b[] , int c[]) ;// for 3 sets
		void getdata_4(int na , int nb , int nc , int nd , int a[] , int b[] , int c[] , int d[]) ;// for 4 sets
		
		// intersection
		int ints_2(int na , int nb , int a[] , int b[] , int count );// for 2 sets
		int ints_3(int na , int nb , int nc , int a[] , int b[] , int c[] , int count ) ;// for 3 sets
		int ints_4(int na , int nb , int nc , int nd , int a[] , int b[] , int c[] , int d[] , int count ) ;// for 4 sets
		
		//union
		int union_2(int na , int nb , int count ) ;// for 2 sets
		int union_3(int na , int nb , int nc , int AB , int BC , int AC , int ABC ) ;// for 3 sets
		int union_4(int na , int nb , int nc , int nd , int AB , int BC , int AC , int ABC , int AD , int BD , int CD , int ABD , int ACD , int BCD , int ABCD ) ;// for 4 sets
};

void pie :: getdata_2(int na , int nb , int a[] , int b[])
{
	for(int i = 0 ; i< na ; i++)
	{
					
		cout<<"\n roll nos  TT players :" ;
		cin>>a[i] ;
	}
				
	for(int i = 0 ; i< nb ; i++)
	{
					
		cout<<"\n roll nos BADMINTON players :" ;
		cin>>b[i] ;
	}
}

void pie :: getdata_3(int na , int nb , int nc , int a[] , int b[] , int c[])
{
	
	for(int i = 0 ; i< na ; i++)
	{
					
		cout<<"\n roll nos  TT players :" ;
		cin>>a[i] ;
	}
				
	for(int i = 0 ; i< nb ; i++)
	{
					
		cout<<"\n roll nos BADMINTON players :" ;
		cin>>b[i] ;
	}
				
	for(int i = 0 ; i< nc ; i++)
	{
					
		cout<<"\n roll nos CHESS players :" ;
		cin>>c[i] ;
	}
	
}

void pie :: getdata_4(int na , int nb , int nc , int nd , int a[] , int b[] , int c[] , int d[]){
	
	for(int i = 0 ; i< na ; i++)
	{
					
		cout<<"\n roll nos  TT players :" ;
		cin>>a[i] ;
	}
				
	for(int i = 0 ; i< nb ; i++)
	{
					
		cout<<"\n roll nos BADMINTON players :" ;
		cin>>b[i] ;
	}
				
	for(int i = 0 ; i< nc ; i++)
	{
					
		cout<<"\n roll nos CHESS players :" ;
		cin>>c[i] ;
	}
	
	for(int i = 0 ; i< nd ; i++)
	{
					
		cout<<"\n roll nos CARROM players :" ;
		cin>>d[i] ;
	}
	
}

int pie :: ints_2(int na , int nb , int a[] , int b[] , int count)
{
	
	for(int i = 0 ; i<na ; i++)
	{
		
		for(int j=0 ; j<nb ; j++)
		{
			
			if(a[i]==b[j])
				count++ ;
		}
	}
	
	return count ;
}

int pie :: ints_3(int na , int nb , int nc , int a[] , int b[] , int c[] , int count )
{

	for(int i = 0 ; i<na ; i++)
	{
		
		for(int j=0 ; j<nb ; j++)
		{
			
			if(a[i]==b[j])
			{
				for(int k=0 ; k<nc ; k++)
				{
					if(b[j]==c[k])
						count++ ;
				}
			}
				
		}
	}
	
	return count ;
}

int pie :: ints_4(int na , int nb , int nc , int nd , int a[] , int b[] , int c[] , int d[] , int count)
{

	for(int i = 0 ; i<na ; i++)
	{
		for(int j=0 ; j<nb ; j++)
		{
			if(a[i]==b[j])
			{
				for(int k=0 ; k<nc ; k++)
				{
					if(b[j]==c[k])
					{
						for(int l = 0 ; l<nd ; l++)
						{
							if(c[k]==d[l])	
								count++ ;
						}
						 
					}
						
				}
			}
				
		}
	}
	
	return count ;
}


int pie :: union_2(int na , int nb , int count )
{
	
	return (na + nb - count) ;
}

int pie :: union_3(int na , int nb , int nc , int AB , int BC , int AC , int ABC )
{
	
	return (na + nb + nc - AB - AC - BC + ABC) ;
}

int pie :: union_4(int na , int nb , int nc , int nd , int AB , int BC , int AC , int ABC , int AD , int BD , int CD , int ABD , int ACD , int BCD , int ABCD )
{
	
	return (na + nb + nc + nd - AB - AC - AD - BC - BD - CD + ABC + ABD + ACD + BCD - ABCD) ;
}



int main()
{
	
	int a[max],b[max],c[max],d[max] , AB , BC , AC , ABC ,AD , BD , CD ,ABD , ACD , BCD , ABCD ;
	
	pie obj ;
	
	char p = 'y' ;
	
	int na,nb ,nc , nd , total,choice ;
	
	while(p=='y')
	{
		
		AB = 0 , BC = 0 , AC = 0 , ABC = 0 ;
		AD= 0 , BD= 0 , CD= 0 ,ABD= 0 , ACD= 0 , BCD= 0 , ABCD= 0 ;
		
		cout<<"\n------------ SET OPERATIONS ---------------\n";
		cout<<"\n\t\t1. 2 Sets\n\t\t2. 3 Sets\n\t\t2. 4 Sets\n";
		cout<<"--------------------------------------------\n";
		
		cout<<"\nenter your choice : ";
		cin>>choice ;
		
		switch(choice){
			
			case 1 :
				
				cout<<"\nA :total TT players" ;
				cout<<"\nB :total BADMINTON players\n" ;
				
				cout<<"n(A) : " ;
				cin>>na ;
				
				cout<<"n(B) : " ;
				cin>>nb ;
				
				obj.getdata_2(na,nb,a,b) ;
				
				AB = obj.ints_2(na,nb,a,b,AB) ;
				
				cout<<"\n n(A^B) : "<<AB ;
				cout<<"\n(A U B) : "<<obj.union_2(na,nb,AB) ;
				break ;
				
			case 2 :
				
				cout<<"\nA :total TT players" ;
				cout<<"\nB :total BADMINTON players" ;
				cout<<"\nC :total CHESS players\n" ;
				
				cout<<"n(A) : " ;
				cin>>na ;
				
				cout<<"n(B) : " ;
				cin>>nb ;
				
				cout<<"n(C) : " ;
				cin>>nc ;
				
				obj.getdata_3(na,nb,nc,a,b,c) ;
				
				AB = obj.ints_2(na,nb,a,b,AB);
				AC = obj.ints_2(na,nc,a,c,AC);
				BC = obj.ints_2(nb,nc,b,c,BC);
				ABC= obj.ints_3(na,nb,nc,a,b,c,ABC);
				
				cout<<"\n n(A^B) : "<<AB;
				cout<<"\n n(A^C) : "<<AC;
				cout<<"\n n(B^C) : "<<BC;
				cout<<"\n n(A^B^C) : "<<ABC;
				
				cout<<"\n(A U B U C) : "<<obj.union_3(na,nb,nc,AB,BC,AC,ABC) ;
				break ;
				
			
			case 3:
				
				cout<<"\nA :total TT players" ;
				cout<<"\nB :total BADMINTON players" ;
				cout<<"\nC :total CHESS players" ;
				cout<<"\nD :total CARROM players\n" ;
				
				cout<<"n(A) : " ;
				cin>>na ;
				
				cout<<"n(B) : " ;
				cin>>nb ;
				
				cout<<"n(C) : " ;
				cin>>nc ;
				
				cout<<"n(D) : " ;
				cin>>nd ;
				
				obj.getdata_4(na,nb,nc,nd,a,b,c,d) ;
				
				AB = obj.ints_2(na,nb,a,b,AB);
				AC = obj.ints_2(na,nc,a,c,AC);
				AD = obj.ints_2(na,nd,a,d,AD);
				BC = obj.ints_2(nb,nc,b,c,BC);
				BD = obj.ints_2(nb,nd,b,d,BD);
				CD = obj.ints_2(nc,nd,c,d,CD);
				
				
				ABC= obj.ints_3(na,nb,nc,a,b,c,ABC);
				ABD= obj.ints_3(na,nb,nd,a,b,d,ABD);
				ACD= obj.ints_3(na,nc,nd,a,c,d,ACD);
				BCD= obj.ints_3(nb,nc,nd,b,c,d,BCD);
				
				ABCD= obj.ints_4(na,nb,nc,nd,a,b,c,d,ABCD);
				
				cout<<"\n n(A^B) : "<<AB;
				cout<<"\n n(A^C) : "<<AC;
				cout<<"\n n(A^D) : "<<AD;
				cout<<"\n n(B^C) : "<<BC;
				cout<<"\n n(B^D) : "<<BD;
				cout<<"\n n(C^D) : "<<CD;
				
				cout<<"\n n(A^B^C) : "<<ABC;
				cout<<"\n n(A^B^D) : "<<ABD;
				cout<<"\n n(A^C^D) : "<<ACD;
				cout<<"\n n(B^C^D) : "<<BCD;
				
				cout<<"\n n(A^B^C^D) : "<<BCD;
				
				cout<<"\n(A U B U C U D) : "<<obj.union_4(na ,nb ,nc ,nd , AB , BC , AC , ABC , AD , BD , CD , ABD , ACD , BCD , ABCD) ;
				
				break ;
			default :
				cout<<"\ninvalid\n\n" ;
		}
		
		cout<<"\n\npress y to continue\n";
		cin>>p ;
	}

}

/*

 	******************   OUTPUT *********************
 
		------------ SET OPERATIONS ---------------
		
		                1. 2 Sets
		                2. 3 Sets
		                2. 4 Sets
		--------------------------------------------
		
		enter your choice : 1
		
		A :total TT players
		B :total BADMINTON players
		n(A) : 1
		n(B) : 2
		
		 roll nos  TT players :1
		
		 roll nos BADMINTON players :1
		
		 roll nos BADMINTON players :2
		
		 n(A^B) : 1
		(A U B) : 2
		
		press y to continue
		y
		
		------------ SET OPERATIONS ---------------
		
		                1. 2 Sets
		                2. 3 Sets
		                2. 4 Sets
		--------------------------------------------
		
		enter your choice : 2
		
		A :total TT players
		B :total BADMINTON players
		C :total CHESS players
		n(A) : 3
		n(B) :
		4
		n(C) : 5
		
		 roll nos  TT players :1
		
		 roll nos  TT players :2
		
		 roll nos  TT players :3
		
		 roll nos BADMINTON players :4
		
		 roll nos BADMINTON players :5
		
		 roll nos BADMINTON players :1
		
		 roll nos BADMINTON players :6
		
		 roll nos CHESS players :7
		
		 roll nos CHESS players :8
		
		 roll nos CHESS players :9
		
		 roll nos CHESS players :1
		
		 roll nos CHESS players :5
		
		 n(A^B) : 1
		 n(A^C) : 1
		 n(B^C) : 2
		 n(A^B^C) : 1
		(A U B U C) : 9
		
		press y to continue
		y
		
		------------ SET OPERATIONS ---------------
		
		                1. 2 Sets
		                2. 3 Sets
		                2. 4 Sets
		--------------------------------------------
		
		enter your choice : 3
		
		A :total TT players
		B :total BADMINTON players
		C :total CHESS players
		D :total CARROM players
		n(A) : 4
		n(B) : 5
		n(C) : 7
		n(D) : 3
		
		 roll nos  TT players :1
		
		 roll nos  TT players :2
		
		 roll nos  TT players :3
		
		 roll nos  TT players :4
		
		 roll nos BADMINTON players :4
		
		 roll nos BADMINTON players :5
		
		 roll nos BADMINTON players :6
		
		 roll nos BADMINTON players :7
		
		 roll nos BADMINTON players :4
		
		 roll nos CHESS players :1
		
		 roll nos CHESS players :2
		
		 roll nos CHESS players :3
		
		 roll nos CHESS players :4
		
		 roll nos CHESS players :8
		
		 roll nos CHESS players :5
		
		 roll nos CHESS players :0
		
		 roll nos CARROM players :7
		
		 roll nos CARROM players :8
		
		 roll nos CARROM players :52
		
		 n(A^B) : 2
		 n(A^C) : 4
		 n(A^D) : 0
		 n(B^C) : 3
		 n(B^D) : 1
		 n(C^D) : 1
		 n(A^B^C) : 2
		 n(A^B^D) : 0
		 n(A^C^D) : 0
		 n(B^C^D) : 0
		 n(A^B^C^D) : 0
		(A U B U C U D) : 10
		
		press y to continue
		n
		
		--------------------------------
		Process exited after 78.47 seconds with return value 0
		Press any key to continue . . .


 
*/
