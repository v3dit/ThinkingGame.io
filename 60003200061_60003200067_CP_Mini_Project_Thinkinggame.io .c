/*RUN THIS PROGRAM IN CODEBLOCKS OR VSCODE FOR OPTIMUM RESULTS.
  THIS PROJECT IS MADE BY MAYANK PATEL - 60003200061 & VEDIT BELADIA - 60003200067*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//MAIN PROGRAM

int main()
{
    int logic();
    int ttc();
    int hgm();
    //SWITCH CASE MENU FOR GAME SELECTION
    int z;
    printf("\n\n");
    printf("                           CP PROJECT ON VARIOUS GAMES \n");
    printf("                       ___________________________________ \n\n");
    printf("                          By Mayank Patel - 60003200061 \n");
    printf("                         And Vedit Beladia - 60003200067 \n\n");
    printf("            ********************************************************************\n\n");
    printf("                           Games available to play: \n\n");
    printf("                           1. Tic-Tac-Toe\n");
    printf("                           2. Quiz\n");
    printf("                           3. Hangman\n\n");
    printf("                           Enter your choice: ");
    scanf("%d", &z);

    switch(z)
    {
        case 1: ttc(); break;
        case 2: logic(); break;
        case 3: hgm(); break;
    }
}

/*  *****QUIZ GAME*****

    CODE FOR QUIZ GAME   */

int logic()
     {  int hgm();
     int counter,r,r1,count,i;
     float score;
     char choice;

	 homescreen:
     system("cls"); printf("\n\n");
     printf("              		   	 QUIZ GAME                            \n\n");
     printf("     ********************************************************************\n\n");
     printf("               		   	  WELCOME                                      \n");
     printf("                  		    to                                        \n");
     printf("              		   	 THE GAME                                      \n\n");
     printf("     ********************************************************************\n\n");
	 printf("     ********************************************************************\n\n");
     printf("     		  	BECOME A MILLIONAIRE!!!!!!!!!!!                           \n\n") ;
	 printf("     ********************************************************************\n\n");
     printf(" 		    > Press S to start the game                                   \n");
     printf(" 		    > press H for help                                            \n");
     printf(" 		    > press Q to quit                                             \n");
     printf(" 		    > press M to return to game selection menu                    \n\n");
     printf("     ********************************************************************\n\n     ");

	choice=toupper(getch());
    if(choice=='H')
	{
	goto help;
	goto homescreen;
	}

    else if (choice=='S')
        goto start;

	else if (choice=='Q')
        exit(1);

    else if (choice=='M')
    {   system("cls");
        main(); }

    else
    {   printf("Enter Valid Input!");
        getch();
        logic();}

	//WELCOME WINDOW

    start:

    system("cls");

    printf("\n\t\t 			Welcome to the Quiz Game");
    printf("\n\n\t\t 	Here are some tips you might wanna know before playing:");
    printf("\n\t\t ");
    printf("\n\t\t >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND.\n");
    printf("\n\t\t >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n\t\t    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n\t\t    right answers, otherwise you can't proceed further to the Challenge Round.\n");
    printf("\n\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n\t\t    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n\t\t    By this way you can win upto ONE MILLION cash prize!!!!!..........\n");
    printf("\n\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n\t\t    right option.\n");
    printf("\n\t\t >> You will be asked questions continuously, till right answers are given.\n");
    printf("\n\t\t >> No negative marking for wrong answers!\n");
    printf("\n\n\t			!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n\t\t Press Y to start the game!\n");
    printf("\n\t\t Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        	goto homescreen;
        	system("cls");
        }

	//INITIAL 3 QUESTION CHECK / ELIGIBILITY CHECK

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    	system("cls");
     	r1=i;

	 switch(r1)
		{
		case 1:
		printf("\n\n\t\tWhat's the biggest animal in the world ?");
		printf("\n\n\t\tA.Shark\t\t\t\t\tB.The Blue Whale\n\n\t\tC.Elephant\t\t\t\tD.Giraffe\n\t\t");
		if (toupper(getch())=='B')
			{
			    printf("\n\n\t\tCorrect!!!");count++;
			    getch();
			    break;
            }
		else
		       {
		           printf("\n\n\t\tWrong!!! The correct answer is B.The Blue Whale");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\t\tWhich country has the highest environmental performance index ?");
		printf("\n\n\t\tA.France\t\t\t\tB.Denmark\n\n\t\tC.Switzerland\t\t\t\tD.Finland\n\t\t");
		if (toupper(getch())=='C')
			{printf("\n\n\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\n\t\tWho was awarded the youngest player award in Fifa World Cup 2006 ?");
		printf("\n\n\t\tA.Wayne Rooney\t\t\t\tB.Lucas Podolski\n\n\t\tC.Lionel Messi\t\t\t\tD.Christiano Ronaldo\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Lucas Podolski");
		       getch();
		       break;}

        case 4:
		printf("\n\n\t\tWhich country is brie cheese originally from ?");
		printf("\n\n\t\tA.England\t\t\t\tB.France\n\n\t\tC.Italy\t\t\t\tD.Germany\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.France");
		       getch();
		       break;}

        case 5:
        printf("\n\n\t\tWhich is the highest mountain in the world ?");
        printf("\n\n\t\tA.Mt. K2\t\t\t\tB.Mt. Kanchanjungha\n\n\t\tC.Mt. Everest\t\t\t\tD.Mt. Kilimanjaro\n\t\t");
        if (toupper(getch())=='C')
               {printf("\n\n\t\tCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\n\t\tWrong!!! The correct answer is C.Mt. Everest");
		       getch();
		       break;}

        case 6:
		printf("\n\n\t\tThe metal whose salts are sensitive to light is ?");
		printf("\n\n\t\tA.Zinc\t\t\t\tB.Silver\n\n\t\tC.Copper\t\t\t\tD.Aluminium\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Silver");
		       getch();
		       break;}}
               getch();
		       }

    // ELIGIBILITY MESSAGE

    if(count>=2)
	{ goto test; }
	else
	{
	system("cls");
	printf("\n\n\t\t\tSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME!");
	getch();
	goto homescreen;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION YOU ARE ELIGIBLE TO PLAY THIS GAME ***");
     printf("\n\n\n\n\t\tPress any key to Start the Game!");
     getch();
     if(toupper(getch())=='P')
		{goto game;}

// QUIZ GAME

game:
     counter=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\n\t\tWhat is the National Game of England ?");
		printf("\n\n\t\tA.Football\t\t\t\tB.Basketball\n\n\t\tC.Cricket\t\t\t\tD.Baseball\n\t\t");
		if (toupper(getch())=='C')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;getch();}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\t\tIn which ocean 'Bermuda Triangle' region is located ?");
		printf("\n\n\t\tA.Atlantic\t\t\t\tB.Indian\n\n\t\tC.Pacific\t\t\t\tD.Arctic\n\t\t");
		if (toupper(getch())=='A')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is A.Atlantic");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\t\tAmong the top 10 highest peaks in the world, how many lie in Nepal ? ");
		printf("\n\n\t\tA.6\t\t\t\tB.7\n\n\t\tC.8\t\t\t\tD.9\n\t\t");
		if (toupper(getch())=='C')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is C.8");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\t\tThe Laws of Electromagnetic Induction were given by ?");
		printf("\n\n\t\tA.Faraday\t\t\t\tB.Tesla\n\n\t\tC.Maxwell\t\t\t\tD.Coulomb\n\t\t");
		if (toupper(getch())=='A')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {
                printf("\n\n\t\tWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\t\tIn what unit is force measured ?");
		printf("\n\n\t\tA.Coulomb\t\t\t\tB.Watt\n\n\t\tC.Newton\t\t\t\tD.Pascal\n\t\t");
		if (toupper(getch())=='C')
			{printf("\n\n\t\tCorrect!!!");counter++;getch(); break;}
		else
		       {
		           printf("\n\n\t\tWrong!!! The correct answer is C.Newton");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\t\tWhich element is found in Vitamin B12 ?");
		printf("\n\n\t\tA.Zinc\t\t\t\tB.Cobalt\n\n\t\tC.Calcium\t\t\t\tD.Iron\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\t\tWhat is the National Name of Japan ?");
		printf("\n\n\t\tA.Polska\t\t\t\tB.Hellas\n\n\t\tC.Drukyul\t\t\t\tD.Nippon\n\t\t");
		if (toupper(getch())=='D')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\t\tHow many times a piece of paper can be folded at the most ?");
		printf("\n\n\t\tA.6\t\t\t\tB.7\n\n\t\tC.8\t\t\t\tD.Depends on the size of paper\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");counter++;getch(); break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\t\tWhat is the capital of Sweden ?");
		printf("\n\n\t\tA.Stockholm\t\t\t\tB.Helsinki\n\n\t\tC.Ajax\t\t\t\tD.Paris\n\t\t");
		if (toupper(getch())=='A')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is A.Stockholm");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\t\tWhich is the longest River in the world ?");
		printf("\n\n\t\tA.Nile\t\t\t\tB.Koshi\n\n\t\tC.Ganga\t\t\t\tD.Amazon\n\t\t");
		if (toupper(getch())=='A')
			{printf("\n\n\t\tCorrect!!!");counter++;getch(); break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\t\tWhat is the color of the Black Box in aeroplanes ?");
		printf("\n\n\t\tA.White\t\t\t\tB.Black\n\n\t\tC.Orange\t\t\t\tD.Red\n\t\t");
		if (toupper(getch())=='C')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
              {printf("\n\n\t\tWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
		printf("\n\n\t\tWhich city is known at 'The City of Seven Hills' ?");
		printf("\n\n\t\tA.Rome\t\t\t\tB.Vatican City\n\n\t\tC.Madrid\t\t\t\tD.Berlin\n\t\t");
		if (toupper(getch())=='A')
			  {printf("\n\n\t\tCorrect!!!");counter++;getch();
			   break;}
		else
              {printf("\n\n\t\tWrong!!! The correct answer is A.Rome");getch();
              break;goto score;}

		case 13:
		printf("\n\n\t\tDeficiency of Iron leads to ?");
		printf("\n\n\t\tA.Rickets\t\t\t\tB.Malaria\n\n\t\tC.Dental Cavity\t\t\t\tD.Anaemia\n\t\t");
		if (toupper(getch())=='D')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is D.Anaemia");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\t\tWho is the author of 'Pulpasa Cafe' ?");
		printf("\n\n\t\tA.Narayan Wagle\t\t\t\tB.Lal Gopal Subedi\n\n\t\tC.B.P. Koirala\t\t\t\tD.Khagendra Sangraula\n\t\t");
		if (toupper(getch())=='A')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is A.Narayan Wagle");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\t\tWhich Blood Group is known as the Universal Donor ?");
		printf("\n\n\t\tA.A\t\t\t\tB.AB\n\n\t\tC.B\t\t\t\tD.O\n\t\t");
		if (toupper(getch())=='D')
			{printf("\n\n\t\tCorrect!!!");counter++;getch();
			 break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is D.O");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\t\tWhat is the unit of measurement of distance between Stars ?");
		printf("\n\n\t\tA.Light Year\t\t\t\tB.Coulomb\n\n\t\tC.Nautical Mile\t\t\t\tD.Kilometer\n\t\t");
		if (toupper(getch())=='A')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;
			}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\t\tThe hottest planet in the solar system ?");
		printf("\n\n\t\tA.Earth\t\t\t\tB.Venus\n\n\t\tC.Mars\t\t\t\tD.Jupiter\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Venus");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\t\tWhat is used to measure Wind Speed ?");
		printf("\n\n\t\tA.Lysimeter\t\t\t\tB.Air vane\n\n\t\tC.Hydrometer\t\t\t\tD.Anemometer\n\t\t");
		if (toupper(getch())=='D')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\t\tWhich gas is used for the preparation of Soda water ?");
		printf("\n\n\t\tA.Oxygen\t\t\t\tB.Carbon Dioxide\n\n\t\tC.Ammonia\t\t\t\tD.Hydrogen\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Carbon Dioxide");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\t\tWhich hardware was used in the First Generation Computer ?");
		printf("\n\n\t\tA.Transistor\t\t\t\tB.Valves\n\n\t\tC.I.C\t\t\t\tD.S.S.I\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Valves");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\t\tWho among the following has won the Nobel Prize 2017 in Literature ?");
		printf("\n\n\t\tA.Richard Thaler\t\t\t\tB.Kazuo Ishiguro\n\n\t\tC.Barry Barish\t\t\t\tD.Kip Thorne\n\t\t");
		if (toupper(getch())=='B')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is B.Kazuo Ishiguro");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\t\tWho won the Women's Australian Open Tennis in 2007 ?");
		printf("\n\n\t\tA.Martina Hingis\t\t\t\tB.Maria Sarapova\n\n\t\tC.Kim Clijster\t\t\t\tD.Serena Williams\n\t\t");
		if (toupper(getch())=='D')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is D.Serena Williams");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\t\tWhich film was awarded the Best Motion Picture at Oscar in 2010 ?");
		printf("\n\n\t\tA.The Secret in their Eyes\t\t\t\tB.Shutter Island\n\n\t\tC.The King's Speech\t\t\t\tD.The Reader\n\t\t");
		if (toupper(getch())=='C')
			{printf("\n\n\t\tCorrect!!!");counter++; getch();
			break;}
		else
		       {printf("\n\n\t\tWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		       break;
			   }}}

    // CALCULATION OF SCORE

	score:
    system("cls");
	score=(float)counter*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t\t**************** CONGRATULATION *****************");
	     printf("\n\t\t\t                You won $%.2f",score);goto go;
	}

	else if(score==1000000.00)
	{
	    printf("\n\n\n\t\t\t\t**************** CONGRATULATION! ****************");
	    printf("\n\t\t\t\t\t\t	  !!!!!!!!!YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t\t\t You won $%.2f",score);
	    printf("\t\t\t\t Thank You!!");
	}
	else
	{
	 printf("\n\n\t\t\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t\t\t Thanks for your participation");
	    printf("\n\t\t\t\t TRY AGAIN");goto go;}

        printf("\n\n\n\t\t\t>> Press m to go back to game selection menu.\n");
        printf("\t\t\t>> Press q to quit.\n");
        printf("\t\t\t>> Press p to play again.\n");
        printf("\t\t\t");
        char z=toupper(getch());
        if((z=='M'))
        {
            system("cls");
            main();
        }
        else if((z=='Q'))
        {
            system("cls");
            exit(1);
        }
        else if((z=='P'))
        {
            system("cls");
            hgm();
        }

	go:
	puts("\n\n\t\t\t  Press Y if you want to play next game");
	puts("\t\t\t  Press M to return to game selection menu");
    getch();
	if (toupper(getch())=='Y')
	{ goto home; }
    else if (toupper(getch())=='M')
    { system("cls"); main(); }
	else
	{ goto homescreen; }

	// HELP LABEL

    help:
    system("cls");
    printf("\n\n                                  HELP");
    printf("\n  -------------------------------------------------------------------------");
    printf("\n    ............................Quiz Game............................");
    printf("\n\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND.\n");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general\n");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    correct answers otherwise you can't play the Game...........\n");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD.\n");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.\n");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.\n");
    printf("\n >> No negative marking for wrong answers.\n");

	printf("\n\n\t*********************BEST OF LUCK*********************");
    printf("\n\n\tPress any key to continue");
    getch();
    goto homescreen;
}


/*  *****TIC-TAC-TOE GAME*****

    CODE FOR TIC-TAC-TOE GAME   */


char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkwin();
void board();

// LOGIC FOR TIC-TAC-TOE

int ttc()
{
    int hgm();
	system("cls");
    int player = 1, i, choice;

    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;

        printf("\t\t  Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else
        {
            printf("\n\t\tInvalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i == -1);

    board();

    if (i == 1)
        {printf("\n\a\t\tPlayer %d won!!\n", --player);}
    else
        {printf("\n\a\t\tGame draw\n");}

    printf("\n\n\t\t>> Press M to go back to game selection menu.\n");
    printf("\t\t>> Press Q to quit.\n");
    printf("\t\t>> Press P to play again.\n");
    printf("\t\t");
    char z=toupper(getch());
    if((z=='M'))
    {
        system("cls");
        main();
    }
    else if((z=='Q'))
    {
        system("cls");
        exit(1);
    }
    else if((z=='P'))
    {
        system("cls");
        hgm();
    }

    return 0;
}

/* FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    0 FOR GAME IS OVER AND NO RESULT */

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

// BOARD FUNCTION

void board()
{
    printf("\n\n\t\t\t  Tic-Tac-Toe\n\n");

	printf("\t\t*********************************\n\n");

    printf("\t\t  Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("\t\t\t_____|_____|_____\n");
    printf("\t\t\t     |     |     \n");

    printf("\t\t\t  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("\t\t\t_____|_____|_____\n");
    printf("\t\t\t     |     |     \n");

    printf("\t\t\t  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("\t\t\t     |     |     \n\n");
}

/*  *****HANGMAN GAME*****

    CODE FOR HANGMAN GAME   */

int hgm()
{
    system("cls");
    printf("\n\t\t\t                    <<<Welcome to Hangman!>>>");

    int i;

    char words[][6]={"eye","dog","run","fox","kit","code","sing","hurt","grow","text","break","xerox","share","login","dance","fence","zipper","tiring","castle","yellow","resort"};


    printf("\n\n\t************************************************************************************************************\n\t************************************************************************************************************\t\t\t");

    printf("\n\n\t\t\t                   <For instructions enter 111>");
    printf("\n\n\t\t\tEnter the number of letters in the word you want to guess.: ");
    scanf("%d",&i);
    if(i==111){
        printf("\n\n\n\n\t\t\t\t\t\t  <Instructions>\n\n\t >> You will get a total of 6 chances to guess the word chosen by the computer correctly.\n\n\t >> You are given choice to chose the size of word, it can be from 2 to 6 letters wrong");
        printf("\n\n\t >> You have to enter a random word and if it matches the word chosen by computer, it will fill up the blank.\n\n\t >> As you proceed try and find the correct word, with the help of filed up word.");
        printf("\n\n\t >>Remember, find the correct word within 6 attempts.\n\n");
        printf("\n\n\t Enter the number of letter word you want to guess.\n\n\t\tEnter: ");
        scanf("%d",&i);
    }
    if(i<3||i>6){
        printf("\n\t\t\tWord can be 3-6 letters long only.\n\t\t\tPlease enter number form 2 to 6.\n\n");
        printf("\n\t\t\tEnter the number of letter word you want to guess.\n\t\t\tEnter:");
        scanf("%d",&i);
    }

    printf("\n\n\t\t\t             Get ready to guess the %d letter word!!!\t\t\t\n ",i);

    printf("\n\n\t************************************************************************************************************\n\t************************************************************************************************************\t\t\t");

    int lower = 0+(i-3)*5, upper = 4+(i-3)*5;
    srand(time(0));
    int random = (rand() % (upper - lower + 1)) + lower;

    int x=0,chances=0,ans=0;
    char e[50];
	char ca[50];
    char new[10];
    for(int q=0;q<i;q++){
        new[q]=95;}

	for(int n=0;n<i;n++){
		ca[n]=words[random][n];
	}

    while((chances<6)&&(ans!=i)){
        x++,
        printf("\n\t\t\tEnter your guess: ");
        scanf("%s",&e[x]);

        int correct=0;
        int match=0;


        for(int p=0;p<i;p++){
            if((int)e[x]==(int)words[random][p]){
                match=1;
            }

            else{
                correct++;}
        }

        if(match==1){
            for(int y=0;y<i;y++){

                if((int)e[x]==(int)words[random][y]){
                    words[random][y]=new[y];
                    new[y]=e[x];
                    ++ans;
                }
            }
        }

        else if(correct==i){
            chances++;}

        else{
            printf("ERROR! Something went wrong!");}

        int z;
        switch(chances){
            case 0:system("cls");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*             "
                   "\n\t\t\t*             "
                   "\n\t\t\t*             "
                   "\n\t\t\t*             "
                   "\n\t\t\t*****         ");

            printf("\n\n\t\t\t\t==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
            printf("\n\t\t\tNumber of correct guesses: %d",ans);

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n\n");

            break;

            case 1:system("cls");

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         O   "
                   "\n\t\t\t*             "
                   "\n\t\t\t*             "
                   "\n\t\t\t*             "
                   "\n\t\t\t*****         ");

            printf("\n\n\t\t\t\t==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
            printf("\n\t\t\tNumber of correct guesses: %d",ans);

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n\n");
            break;

            case 2:system("cls");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         O   "
                   "\n\t\t\t*         |   "
                   "\n\t\t\t*         |   "
                   "\n\t\t\t*             "
                   "\n\t\t\t*****         ");

            printf("\n\n\t\t\t\t ==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
                printf("\n\t\t\tNumber of correct guesses: %d",ans);

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n");

            break;

            case 3:system("cls");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         O   "
                   "\n\t\t\t*        /|   "
                   "\n\t\t\t*         |   "
                   "\n\t\t\t*             "
                   "\n\t\t\t*****         ");

            printf("\n\n\t\t\t\t==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
            printf("\n\t\t\tNumber of correct guesses: %d",ans);

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n");

            break;

            case 4:system("cls");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         O   "
                   "\n\t\t\t*        /|\\ "
                   "\n\t\t\t*         |   "
                   "\n\t\t\t*             "
                   "\n\t\t\t*****         ");

            printf("\n\n\t\t\t\t==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
            printf("\n\t\t\tNumber of correct guesses: %d",ans);

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n");

            break;

            case 5:system("cls");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         O   "
                   "\n\t\t\t*        /|\\ "
                   "\n\t\t\t*         |   "
                   "\n\t\t\t*        /    "
                   "\n\t\t\t*****         ");

                printf("\n\n\t\t\t\t==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
            printf("\n\t\t\tNumber of correct guesses: %d",ans);

            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n");
            break;

            case 6:system("cls");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n");
            printf("\n\t\t\t***********   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         *   "
                   "\n\t\t\t*         O   "
                   "\n\t\t\t*        /|\\ "
                   "\n\t\t\t*         |   "
                   "\n\t\t\t*        / \\ "
                   "\n\t\t\t*****         ");

            printf("\n\n\t\t\t\t==> ");
            for(z=0;z<i;z++){
                printf("%c",new[z]);}
            printf(" <==");
            printf("\n\t\t\tChances left: %d",6-chances);
            printf("\n\t\t\tNumber of correct guesses: %d",ans);
            printf("\n\n\t\t\tYou lose");
            printf("\n\n\t\t\t***************************************\t\t\t\n\t\t\t***************************************\t\t\t\n\n\n");

            break;
        }

    }
    printf("\n\t\t\t=====> The correct answer is <=====");
    printf("\n\t\t\t=======> ");
    for(int g=0;g<i;g++){
        printf("%c",ca[g]);}
    printf(" <=======\n");


    if(ans==i){
        printf("\n\t\t\tYou win!!!"); goto opt;}

    opt:
        printf("\n\n\n\t\t\t>> Press M to go back to game selection menu.\n");
        printf("\t\t\t>> Press Q to quit.\n");
        printf("\t\t\t>> Press P to play again.\n");
        printf("\t\t\t");
        char z=toupper(getch());
        if((z=='M'))
        {
            system("cls");
            main();
        }
        else if((z=='Q'))
        {
            system("cls");
            exit(1);
        }
        else if((z=='P'))
        {
            system("cls");
            hgm();
        }
    return 0;
}
