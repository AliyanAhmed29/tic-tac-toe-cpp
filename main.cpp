
//
//#include<iostream>
//#include<fstream>
////#include<string>
//
//using namespace std;
//
//// play k ander check call hota h
//
//
//// game will saved in the following file
//ifstream Out("D:/gamedata.txt");
//
////they all global variables
//int rows, columns, k = 0, limit;    // k is used in turnPlayer function
//char theGrid[50][50], player1Name, player2Name;   //theGrid holds the grid
//
//// to load the saved game
//void savegame()
//{
//	ofstream In("D:/gamedata.txt");
//
//	In << rows << "  " << columns << endl;
//	In << player1Name << "  " << player2Name << endl;
//	In << limit << endl;
//
//	for (int i = 1; i <= rows; i++)
//	{
//		for (int j = 1; j <= columns; j++)
//			In << theGrid[i][j] << "   ";
//		In << endl;
//	}
//
//	cout << endl << "Game has been saved to the given file location " << " D:/gamedata.txt" << " to continue load game please " << endl;
//}
//// to save the current game
//void loadgame()
//{
//
//	Out >> rows >> columns;
//	Out >> player1Name >> player2Name;
//	Out >> limit;
//
//	for (int i = 1; i <= rows; i++)
//	{
//		for (int j = 1; j <= columns; j++)
//		{
//			Out >> theGrid[i][j];
//
//		}
//		cout << endl;
//
//	}
//
//}
//  
//// checks if the winning limit has reached or not
//bool check(int spaceCapacity, int userMovement)  // u is space capacity , q is the col number
//{
//	//                                    i(loop iterator)
//	int rowLimit = 1, colLimit1 = 1, colLImit2 = 1, diagonalLimit2 = 1, diagonalLimit1 = 1, i, diagonalLimit3 = 1, diagonalLimit4 = 1, b, j;
//
//	b = limit - 1; // b =limit-1
//	j = b - 1;    //  j=limit-2
//
//	
//	for (i = 1; i <= limit; i++)
//	{ 
//
//		//***limit in a particular row(left to right)***						
//		if (userMovement + j <= columns)  // user move + (limit-2) <= cols   
//		{
//			if (i <= b)   // i <= limit-1
//			{
//				if (theGrid[spaceCapacity][userMovement + i] == theGrid[spaceCapacity][userMovement])  
//					rowLimit = rowLimit + 1;
//			}
//			else
//			{
//				if (theGrid[spaceCapacity][userMovement - 1] == theGrid[spaceCapacity][userMovement])
//					rowLimit = rowLimit + 1;
//			}
//		}
//
//		//***limit in a particular col(bottom to top)***				
//		if (userMovement - j >= 1) // user move + (limit-2) >=1	
//		{
//			if (i <= b)   //i <= (limit-1)
//			{
//				if (theGrid[spaceCapacity][userMovement - i] == theGrid[spaceCapacity][userMovement])
//					colLimit1 = colLimit1 + 1;
//			}
//			else 
//			{
//				if (theGrid[spaceCapacity][userMovement + 1] == theGrid[spaceCapacity][userMovement])
//					colLimit1 = colLimit1 + 1;
//			}
//		}
//
//
//		//***limit in a particular col(top to bottom)***					
//		if (spaceCapacity + j <= rows)  // spaceCap + (limit-2) <=rows   
//		{
//			if (i <= b)  // i<= (limit-1)
//			{
//				if (theGrid[spaceCapacity + i][userMovement] == theGrid[spaceCapacity][userMovement])
//					colLImit2 = colLImit2 + 1;
//			}
//			else
//			{
//				if (theGrid[spaceCapacity - 1][userMovement] == theGrid[spaceCapacity][userMovement])
//					colLImit2 = colLImit2 + 1;
//			}
//		}
//			
//
//		//***limit in diagonal(top left to bottom right)***
//		if (spaceCapacity + j <= rows && userMovement + j <= columns) // spaceCap + (limit-2)<=rows  && choice + (limit-2)<=cols 
//		{
//			if (i <= b)  // i<= (limit-1)
//			{
//				if (theGrid[spaceCapacity + i][userMovement + i] == theGrid[spaceCapacity][userMovement])    
//					diagonalLimit1 = diagonalLimit1 + 1;
//			}
//			else
//			{
//				if (theGrid[spaceCapacity - 1][userMovement - 1] == theGrid[spaceCapacity][userMovement])
//					diagonalLimit1 = diagonalLimit1 + 1;
//			}
//		}
//
//
//		//***limit in diagonal(bottom left to top right)***								   
//		if (spaceCapacity + j <= rows && userMovement - j >= 1)  // spaceCap + (limit-2)<=rows  && choice - (limit-2)<=cols
//		{
//			if (i <= b) 
//			{
//				if (theGrid[spaceCapacity + i][userMovement - i] == theGrid[spaceCapacity][userMovement])     
//					diagonalLimit2 = diagonalLimit2 + 1;
//			}
//			else
//			{
//				if (theGrid[spaceCapacity - 1][userMovement + 1] == theGrid[spaceCapacity][userMovement])
//					diagonalLimit2 = diagonalLimit2 + 1;
//			}
//		}
//
//
//		//***limit in(diagonal top left to bottom right)***
//									   
//		if (spaceCapacity - j >= 1 && userMovement - j >= 1)  // spaceCap - (limit-2)<=rows  && choice - (limit-2)<=cols
//		{
//			if (i <= b)
//			{
//				if (theGrid[spaceCapacity - i][userMovement - i] == theGrid[spaceCapacity][userMovement]) 
//					diagonalLimit3 = diagonalLimit3 + 1;
//			}
//			else
//			{
//				if (theGrid[spaceCapacity + 1][userMovement + 1] == theGrid[spaceCapacity][userMovement])
//					diagonalLimit3 = diagonalLimit3 + 1;
//			}
//
//		}
//
//		//***limit in (diagonal top right to bottom left)***
//		if (spaceCapacity - j >= 1 && userMovement + j <= columns)
//		{
//			if (i <= b)
//			{
//				if (theGrid[spaceCapacity - i][userMovement + i] == theGrid[spaceCapacity][userMovement])     
//					diagonalLimit4 = diagonalLimit4 + 1;
//			}
//			else
//			{
//				if (theGrid[spaceCapacity + 1][userMovement - 1] == theGrid[spaceCapacity][userMovement])
//					diagonalLimit4 = diagonalLimit4 + 1;
//			}
//		}
//
//	}
//
//	i = i - 1; //bcz i was incremented in last itereation which never gets executed
//
//
//	if (i == rowLimit)
//		return true;
//	else if (i == colLimit1)
//		return true;
//	else if (i == colLImit2)
//		return true;
//	else if (i == diagonalLimit2)
//		return true;
//	else if (i == diagonalLimit1)
//		return true;
//	else if (i == diagonalLimit3)
//		return true;
//	else if (i == diagonalLimit4)
//		return true;
//	else
//		return false;
//
//
//}
//
////returns kis player ka turn h
//int turn() 
//{
//	
//	char d;
//	k = k + 1;
//	if (k % 2 != 0)
//		d = player1Name;
//	else
//		d = player2Name;
//
//
//	return d;
//}
//
////asks credentials to establish new game
//void newgame() {
//
//	cout << "Enter max. columns of connect-N: ";
//	cin >> columns;
//
//	cout << "Enter max. rows of connect-N: ";
//	cin >> rows;
//
//	cout << "Enter limit of connect-N: ";
//	cin >> limit;
//
//	cout << "First Player Name? ";
//	cin >> player1Name;
//
//	cout << "Second Player Name? ";
//	cin >> player2Name;
//
//}
//
//// fills dots in table
//void data() 
//{
//	char ch;
//	ch = 46;
//	for (int i = 1; i <= rows; i++)
//	{
//		for (int j = 1; j <= columns; j++)
//			theGrid[i][j] = ch;
//	}
//}
//
//// prints grid on console
//void grid() 
//{
//	system("CLS"); //clears the screen
//	cout << "\n";
//	
//	for (int i = 1; i <= rows; i++) {
//		for (int j = 1; j <= columns; j++)
//		{
//			if (i <= rows)
//			{
//				if (j < 10)
//				{
//					cout << " " << theGrid[i][j] << "    ";  // theGrid is the grid 2d char array
//					/*if (j == columns)  // isko comment krny se koi farq nhi para
//						cout << " ";*/
//
//				}
//				if (j >= 10)
//					cout << "  " << theGrid[i][j] << "    ";
//			}
//		}
//		cout << endl;
//		
//
//	}
//	
//
//}
//
//// the major function
//void play()
//{
//	// userMove stores the user choice of move 
//	//aa is 6 (could be initialized with any except 5  cuz we will equate it to c later)
//	//kk will be temporarily used in place of userMove
//	// int c could be initialized with any int except (1 or 0)cuz it will receive true or false
//	int userMove, capacityArray[100], c = 5, aa = 6, tt, kk;   
//															
//	char playerMark;  //saves the player mark 
//
//	// stores (no.of rows in each col) on each index of capacityArray array
//	for (int j = 1; j <= columns; j++) 
//	{
//		capacityArray[j] = rows;
//	}
//
//	int Z = 1;  // Z is random variable just to monitor the following while loop condition
//
//	while (Z <= rows + 3) 
//	{
//		Z = Z + 1;
//
//		for (int j = 1; j <= columns; j++)
//		{
//
//			cout << endl << "Please enter your move( 1-" << columns << " )" <<endl<<" and (-1) for save game = ";
//			cin >> userMove; // userMove stores the user choice
//
//			//  check move should be in range i.e. doesnt exceed max col 
//			// userMove is the user choice of col.  capacityArray[userMove]>=1 checks if the col has space for entry
//			if (userMove >= 1 && userMove <= columns && capacityArray[userMove] >= 1)
//			{  
//				playerMark = turn();  //asks for turn of player
//
//				// kk is just a duplcate variable of of userMove)
//				//userMove is the user choice of col.  this loop dels space capacity in capacityArray (hold free spaces in each col)
//				for (kk = userMove; userMove <= rows; kk++) 
//				{
//					if (theGrid[capacityArray[userMove]][userMove] == player1Name || theGrid[capacityArray[userMove]][userMove] == player2Name)  // ( a[6][1] 
//						capacityArray[userMove] = capacityArray[userMove] - 1;
//					else
//						break;
//				}
//
//				//puts mark on the particular selected position
//				theGrid[capacityArray[userMove]][userMove] = playerMark; 
//
//				//dels space capacity in p array by 1
//				capacityArray[userMove] = capacityArray[userMove] - 1;
//
//				// tt space capacity before del
//				tt = capacityArray[userMove] + 1;
//				
//
//				//*****************************************************************
//				// 
//				//check funtion called to see if the limit to win is reached or not(it returns 1 or 0)
//			
//				// tt space capacity before del, userMove is the col num
//				// c int var (is initialized with 5(cuz it will receive true or false))**could be initialized with any integer
//				//aa is 6 (could be initialized with any except 5  cuz we will equate it to c later)
//				if (check(tt, userMove))
//					c = aa;    
//				               
//				//*****************************************************************
//
//				grid(); //prints grid after the making the move
//				if (c == aa)
//				{
//					cout << endl << endl << "Game over : Player " << playerMark << " is winner" << endl;
//					break;
//				}
//			}
//
//			// if neither exit nor any valid choice
//			else if (userMove != -1)   
//				cout << endl << "Invalid selection";
//
//
//			// if user enters -1 then  save the game and exit
//			else if (userMove == -1)
//			{  
//				savegame();
//				break;
//
//			}
//
//		}
//
//		// if any player has won 
//		if (c == aa)  
//			break;
//
//		// if user exits the game
//		if (userMove == -1) 
//			break;
//	}
//}
//
//int Menu()
//{
//	int Choice;
//	do {
//		cout << endl << "1. Play" << endl
//			<< "2. Save Game" << endl
//			<< "3. Load Game" << endl
//			<< "4. Exit" << endl
//			<< "Enter You Choice (1 - 4)";
//		cin >> Choice;
//	} while (Choice < 1 || Choice > 4);
//
//	return Choice;
//}
//
//
////just prints a design on console
//void printDesgin(int n)
//{
//	char design = 219;
//	cout << "\t\t\t";
//	for (int i = 0; i < n; i++)
//		cout << design;
//	cout << endl;
//}
//
//int main()
//{
//	
//	printDesgin(40);
//	cout << "\t\t\t\tWelcome to CONNECT-N"<<endl;
//	printDesgin(40);
//
//	int theChoice;
//
//	do
//	{
//		theChoice = Menu();
//
//		if (theChoice == 1)
//		{
//			newgame();
//			data(); //fills with dots
//			grid(); //prints
//			play();
//		}
//		if (theChoice == 3)
//		{
//
//			loadgame();
//			grid();
//			play();
//
//		}
//		if (theChoice == 2) 
//		{
//			savegame();
//		}
//	} while (theChoice != 4);
//
//
//	cout << endl << endl;
//	printDesgin(40);
//	cout << "\t\t\t\t\tTHANKYOU!" << endl;
//	printDesgin(40);
//
//	return 0;
//}
