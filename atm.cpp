/*
 * Copyright (c) 2015 Barchampas Gerasimos </makindosx@gmail.com>
 * pseudo-atm is a programm which helps to understand atm.
 *
 * pseudo-atm is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 *
 * pseudo-atm is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License, version 3,
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */
 
 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <string>
#include <windows.h>
#define KRED  "\x1B[31m"





using namespace std;

int main()
{
string pin ="";
char ci;	
int epilogi; 
int epil2;
int k;
char boolean ='y';      
unsigned long  poso=4200, katathesh, analhpsh;
FILE *newpin;
FILE *apodeiksh;
char ch;
int j;	 
int n;
int c;	
	
              
                system("COLOR 09");
                
            printf ("  |                                                                                   |   \n"); 
	        printf ("  |                                   MAK BANK ATM MENU                               |   \n");
	        printf ("  |___________________________________________________________________________________|   \n");
	        printf ("  |                                       I BANK                                      |   \n");
	        printf ("  |___________________________________________________________________________________|   \n");
	        printf ("  |1|> ANALHPSH                             |                            KATATHESH <|2|   \n");
	        printf ("  |_|_______________________________________|_______________________________________|_|   \n");
	        printf ("  |3|> ERWTHSH YPOLOIPOY ME APODEIKSH       |    ERWTHSH YPOLOIPOY XWRIS APODEIKSH <|4|   \n"); 
	        printf ("  |_|_______________________________________|_______________________________________|_|   \n");
	        printf ("  |5|> RITHMISEIS LOGARIASMOY               |                   TIMH SYNALLAGMATOS <|6|   \n");
         	printf ("  |_|_______________________________________|_______________________________________|_|   \n"); 
         	printf ("  |7|> ALLAGH GLWSSAS                       |                  EKSODOS APO TO MENU <|8|   \n"); 
	        printf ("  |_|_______________________________________|_______________________________________|_|   \n"); 
         	       
         	    printf ("                                                                                    \n");   
         	     
         	    printf ("                         EISAGETE TO PIN THS KARTAS SAS                             \n");   
         	    printf ("                     KRYPSTE ME TA XERIAS SAS TON KWDIKO PIN                        \n"); 
         	                
         	                 
         	               
printf ("\t\t\t\t\t");       ci = _getch();
                           while (ci != 13)
                          {                   
                           pin.push_back(ci);
                             printf ("*");
                            ci = _getch();
                            }
                            
                            
				    
			         system("cls"); 
				    system ("color 4");
			printf ("                                                                           \n");
	        printf ("                                                                           \n");
		    printf ("                                                                           \n");
			printf ("                                                                           \n");
			printf ("                                                                           \n");
	   		printf ("                                                                           \n");
	    	printf ("                                                                           \n");
	        printf ("                                                                           \n");
	        printf ("                                                                           \n");
	        printf ("                                                                           \n");
	   	    printf ("                                                                           \n");
	        printf ("                                                                           \n");
			printf ("            ____________________________________________________________________   \n"); 
			printf ("           |        PARAKALW PERIMENETE EPEKSERGAZOMASTE TA STOIXEIA SAS        |  \n");
			printf ("           |____________________________________________________________________|  \n"); 
				Sleep(5000);   	   	
        		 
        			
				  while (pin=="1238") 
				   {  
				    system ("cls");
				    system("COLOR 09");
				    
         	printf ("|                                                                                   |   \n"); 
	        printf ("|                                 MAK BANK ATM MENU                                 |   \n");
	        printf ("|___________________________________________________________________________________|   \n");
	        printf ("|                                     I-BANK                                        |   \n");
	        printf ("|___________________________________________________________________________________|   \n");
	        printf ("|1|> ANALHPSH                             |                            KATATHESH <|2|   \n");
	        printf ("|_|_______________________________________|_______________________________________|_|   \n");
	        printf ("|3|> ERWTHSH YPOLOIPOY ME APODEIKSH       |    ERWTHSH YPOLOIPOY XWRIS APODEIKSH <|4|   \n"); 
	        printf ("|_|_______________________________________|_______________________________________|_|   \n");
	        printf ("|5|> RITHMISEIS LOGARIASMOY               |                   TIMH SYNALLAGMATOS <|6|   \n");
         	printf ("|_|_______________________________________|_______________________________________|_|   \n"); 
         	printf ("|7|> ALLAGH GLWSSAS                       |                  EKSODOS APO TO MENU <|8|   \n"); 
	        printf ("|_|_______________________________________|_______________________________________|_|   \n"); 
         	       
         	    printf ("                                                                                 \n");        
			    printf ("     _____________________________________________________________________    \n");
	            printf ("    |                     PARAKALW DIALEKSTE MIA EPILOGI                  |   \n");
	            printf ("    |_____________________________________________________________________|   \n");   
				 
				printf ("                                                                          \n");    
				 
					do
					{	
			   printf ("                                                                          \n");
						 scanf ("%d",&epilogi); 
						  switch(epilogi)
         	          {
         	         case 1: 	
         	    printf (" _____________________________________________________________________   \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>>>>>>>ANALHPSH METRHTWN<<<<<<<<<<<<<<<<<<<<<<<<<|  \n");    
                printf ("|__________________________________|__________________________________|  \n");
	            printf ("|1|>20                             |                             50<|2|  \n"); 
	            printf ("|_|________________________________|________________________________|_|  \n");
	            printf ("|3|>100                            |                           ALLO<|4|  \n");
         	    printf ("|_|________________________________|________________________________|_|  \n"); 
         	    
				printf ("                                                                          \n"); 
			    printf (" _____________________________________________________________________    \n");
	            printf ("|                     PARAKALW DIALEKSTE MIA EPILOGI                  |   \n");
	            printf ("|_____________________________________________________________________|   \n"); 
				     
         	    printf ("                                                                          \n");
         	    
				             scanf ("%d",&epil2);
         	                 if (epil2==1)
         	                   {
         	   printf ("                       PARAKALW SYLEKSTE TO POSO TWN 20 \80                    \n");	
								poso = poso - 20;
			   printf("                        TO TREXON YPOLOIPO SAS EINAI %lu \80                 \n", poso);
							    }
							    
				     if (epil2==2)
						 {
			   printf ("                       PARAKALW SYLEKSTE TO POSO TWN 50 \80                       \n");
							   	 poso = poso - 50;
			   printf("                        TO TREXON YPOLOIPO SAS EINAI  %lu \80                \n", poso);
							   }  
							    
					 if (epil2==3)
			 		   {
			  printf ("                        PARAKALW SYLEKSTE TO POSO TWN 100 \80                      \n");
			 				   	 poso = poso - 100;
			  printf("                         TO TREXON YPOLOIPO SAS EINAI %lu \80                 \n", poso);
							    }
							    
         	        if (epil2==4)
         	              {
         	          printf ("                  EISAGETE POSO PROS ANALHPSH                            \n");     
         	             scanf ("%lu",&analhpsh);
         	              if (analhpsh < 20)
         	                  {
         	  printf ("                        EISAGETE POSO ANW TWN 20 \80                                \n"); 	
						      }  
						  
         	     else if ( analhpsh > poso)
         	              {
         	  printf("                         ANEPARKES YPOLOIPO                                       \n");
						     }
						     
			       else if ( analhpsh > 1000)
         	              {
         	  printf("             MEGISTO POSO ANALHPSHS  ATM 1000 \80                                    \n");
         	  printf("             GIA ANALHPSH ANW TWN 1000 \80 EPISKEYTHEITE TO KATASTHMA BANK OF MAK    \n");
         	  printf("             THLEFWNO EKSYPHRETHSHS PELATWN       210:1234567                      \n");
						     }
							  
				   else 
                     {
              printf("                        PARAKLW SYLLEKSTE TO POSO TWN %lu \80                     \n",analhpsh);
                     poso = poso - analhpsh;  
              printf("                        TO TREXON YPOLOIPO SAS EINAI  %lu  \80                    \n",poso);
                              }  
						  }  
						  
						  apodeiksh=fopen("apodeiksh.txt","w");
					    if  (apodeiksh==NULL)
						 printf ("DEN MPOROUME NA SAS DWSOUME APODEIKSH ME XARTI \n");
						 
						else
						
						   if (!feof(stdin))
						   {
						    fprintf(apodeiksh,"|____________________________________________________| \n");
						   	fprintf(apodeiksh,"|                   MAK BANK ATM                     |\n");
						   	fprintf(apodeiksh,"|____________________________________________________|\n");
						    fprintf(apodeiksh,"|                     I-BANK                         |\n");
						   	fprintf(apodeiksh,"|____________________________________________________|\n");
						   	fprintf (apodeiksh,"                                                     \n");
						   	
						   	  for (c = 1; c <= 2; c++) 
								  {
                               n = rand() % 98 + 1;
						   	    }
						
						   	fprintf (apodeiksh,"ARITHMOS SYNALLAGHS:    %d%d                         \n",n,n );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"ARITHMOS KARTAS:        ************%d%d             \n",n,n );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"TREXON YPOLOIPO:        %d \80                         \n",poso);
						   	fprintf (apodeiksh,"                                                     \n"     );
						    fprintf (apodeiksh,"EKSYPHRETHSH PELATWN:   2100987690                   \n"     );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"WRES LEITOYRGIAS:       24 WRES TO 24WRO             \n"     );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"EYXARISTOYME POY XRHSIMOLPOIHSATE TIS YPHRESIES MAS  \n"     );
							} 
							
                         fclose(apodeiksh);
         	    
					  break;	 	
						
						 
				  case 2:
				printf (" _____________________________________________________________________   \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>KATATHESH<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<|  \n");    
                printf ("|_____________________________________________________________________|  \n");
	            printf ("|                            EISAGETE POSO                            |  \n"); 
	            printf ("|_____________________________________________________________________|  \n");
	            
	            printf("                       EISAFETE POSO PROS KATATHESH                       \n");
                    	scanf("%lu", &katathesh);
                    	   if (katathesh<20)
                printf ("                      ELAXSTO POSO KATATHESHS 20 \80                        \n");
                    	     else if (katathesh>1000)
                printf ("                      ANWTATO POSO KATATHESHS 1000 \80                      \n");
                    	     else
                        poso = poso + katathesh;
			    printf("                      TO TREXON YPOLOIPO SAS EINAI  %lu  \80            \n", poso);
				  break; 
		          	   
		          	 
		          	
		          case 3:
		        printf (" _____________________________________________________________________   \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>ERWTHSH YPOLOIPOY ME APODEIKSH<<<<<<<<<<<<<<<<<<|  \n");    
                printf ("|__________________________________|__________________________________|  \n");
                
         	          apodeiksh=fopen("apodeiksh.txt","w");
					    if  (apodeiksh==NULL)
						 printf ("DEN MPOROUME NA SAS DWSOUME APODEIKSH ME XARTI \n");
						 
						else
						
						   if (!feof(stdin))
						   {
						    fprintf(apodeiksh,"|____________________________________________________| \n");
						   	fprintf(apodeiksh,"|                   MAK BANK ATM                     |\n");
						   	fprintf(apodeiksh,"|____________________________________________________|\n");
						    fprintf(apodeiksh,"|                     I-BANK                         |\n");
						   	fprintf(apodeiksh,"|____________________________________________________|\n");
						   	fprintf (apodeiksh,"                                                     \n");
						   	
						   	  for (c = 1; c <= 2; c++) 
								  {
                               n = rand() % 98 + 1;
						   	    }
						   	printf ("\n");     
						    printf ("                 PARAKALW PARALAVAITE THN APODEIKSH SAS            \n");
						
						   	fprintf (apodeiksh,"ARITHMOS SYNALLAGHS:    %d %d                        \n",n,n );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"ARITHMOS KARTAS:        ************%d%d             \n",n,n );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"TREXON YPOLOIPO:        %d \80                         \n",poso);
						   	fprintf (apodeiksh,"                                                     \n"     );
						    fprintf (apodeiksh,"EKSYPHRETHSH PELATWN:   2100987690                   \n"     );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"WRES LEITOYRGIAS:       24 WRES TO 24WRO             \n"     );
						   	fprintf (apodeiksh,"                                                     \n"     );
						   	fprintf (apodeiksh,"EYXARISTOYME POY XRHSIMOLPOIHSATE TIS YPHRESIES MAS  \n"     );
							} 
							
                         fclose(apodeiksh);
                         
         	       break;
			
			
			      case 4:
				printf (" _____________________________________________________________________   \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>ERWTHSH YPOLOIPOY XWRIS APODEIKSH<<<<<<<<<<<<<<<<<|  \n");    
                printf ("|_____________________________________________________________________|  \n");
                
                printf ("                    TO TREXON YPOLOIPO SAS EINAI %lu \80                   \n",poso);
                     
	               break;
				 
				 
				   case 5:
				printf (" _____________________________________________________________________   \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>>>RITHMISEIS LOGARIASMOY<<<<<<<<<<<<<<<<<<<<<<<<|  \n");    
                printf ("|_____________________________________________________________________|  \n");
                     
                printf ("                          EISAGETE NEO PIN                               \n"); 
				printf ("                O KWDIKOS PIN PREPEI NA EINAI 4 ARITHMOI                 \n");    
						
						   
						   
						   	 ch = _getch();
                           while (ch != 13)
                          {                   
                            pin.push_back(ch);
                             printf ("*");
                            ch = _getch();
						   }
							
                         
                        printf ("\n");
						printf ("\n"); 
                       system ("COLOR 4");
                       printf ("  APOTYXIA ALLAGHS KWDIKOY PIN                                          \n");
                       printf ("  GIA PERISSOTERES PLHROFORIES EPISKEFTEITE TO KATASTHMA BANK OF MAK    \n");
					   printf ("  THLEFWNO EKSYPHRETHSHS PELATWN: 2101234567                            \n");
					   printf ("                                                                        \n");   
					   printf ("         EYXARISTOYME POY XRHSIMOPOIHSATE THS YPHRESIES MAS             \n"); 
					      Sleep(5000);
					      system("cls");
					     (void)system("bank.exe");
					     

	              break; 
				 
				
				    case 6:
				printf (" _____________________________________________________________________  \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>>>>>>TIMH SYNALLAGMATOS<<<<<<<<<<<<<<<<<<<<<<<<<| \n");    
                printf ("|_____________________________________________________________________| \n");
                
                printf ("|                                                                     | \n");  
                printf ("|                      1 EURO IS 1.13  USA DOLLAR                     | \n");
                printf ("|                      1 EURO IS 1.57  AUSTRALIAN DOLLAR              | \n");
                printf ("|                      1 EURO IS 0.73  ENGLAND STERLIN                | \n");
                printf ("|                      1 EURO IS 70.11 RWSSIA ROUBLI                  | \n");
                printf ("|                      1 EURO IS 1.10  SWITCHERLAND FRANG DIRXAM      | \n");
                printf ("|                      1 EURO IS 4.13  ARABIC EMIRATES                | \n");
                printf ("|                      1 EURO IS 73.33 INDIAN ROUPIAN                 | \n");
                printf ("|_____________________________________________________________________| \n");   
	              break; 
				       
				    
				     case 7:
				printf (" _____________________________________________________________________  \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>>>>>>>ALLAGH GLWSSAS<<<<<<<<<<<<<<<<<<<<<<<<<<<<| \n");    
                printf ("|_____________________________________________________________________| \n");
                printf ("|                                                                     | \n");         
                printf ("|                           MENU GLWSSWN                              | \n");
                printf ("|_____________________________________________________________________| \n");
                printf ("|                                                                     | \n");
                printf ("|                           ENGLISH USA                               | \n");
                printf ("|                           ENGLISH BRITAIN                           | \n");
                printf ("|                           FRANCES                                   | \n");
                printf ("|                           ITALIAN                                   | \n");
                printf ("|                           GERMANIAN                                 | \n");
                printf ("|                           SPANISH                                   | \n");
                printf ("|                           NEDERLANDS                                | \n");
                printf ("|                           PORTUGALS                                 | \n");
                printf ("|                           GREEKS                                    | \n");
                printf ("|                           RUSSIAN                                   | \n");
                printf ("|                           INDIAN                                    | \n");
                printf ("|                           CHINESE                                   | \n");
                printf ("|                           JAPANESE                                  | \n");
                printf ("|                           IRAN                                      | \n");
                printf ("|                           CANADIAN                                  | \n");
                printf ("|                           BRAZILIAN                                 | \n");
                printf ("|                           ARGENTINIAN                               | \n");
                printf ("|                           MEXICAN                                   | \n");
                printf ("|_____________________________________________________________________| \n");
	              break; 
				 
				    
				      case 8:
				printf (" _____________________________________________________________________   \n");    
         	    printf ("|>>>>>>>>>>>>>>>>>>>>>>>>EKSODOS APO TO MENU<<<<<<<<<<<<<<<<<<<<<<<<<<|  \n");    
                printf ("|_____________________________________________________________________|  \n");
                
                printf("           EYXARISTOUME POU XRHSIMOPOIHSATE THS YPHRESIES MAS             \n");
                  
	              break; 
				    
				       default:
			   printf ("           EYXARISTOUME POU XRHSIMOPOIHSATE THS YPHRESIES MAS             \n");
				
					  }
					  
				printf ("                                                                         \n");
				printf ("                                                                         \n");
				printf ("               THLETE NA PRAGMATOPOIHSETE ALLH SYNALLAGH ? (y/n):        \n");
                         fflush(stdin);
                         scanf("%c", &boolean);
                        if (boolean == 'n'|| boolean == 'N')
                        {
                          k=1;      
				printf("              EYXARISTOUME POU XRHSIMOPOIHSATE THS YPHRESIES MAS            \n");  
						 Sleep(2000);
                         system("cls");                               
						(void)system("bank.exe");
						system("cls");
                        }
                        
                        
					    
						
				
			        
                  
            
		printf ("|                                                                                       |   \n"); 
	        printf ("|                                  MAK BANK ATM MENU                                |   \n");
	        printf ("|___________________________________________________________________________________|   \n");
	        printf ("|                                      I-BANK                                       |   \n");
	        printf ("|___________________________________________________________________________________|   \n");
	        printf ("|1|> ANALHPSH                             |                            KATATHESH <|2|   \n");
	        printf ("|_|_______________________________________|_______________________________________|_|   \n");
	        printf ("|3|> ERWTHSH YPOLOIPOY ME APODEIKSH       |    ERWTHSH YPOLOIPOY XWRIS APODEIKSH <|4|   \n"); 
	        printf ("|_|_______________________________________|_______________________________________|_|   \n");
	        printf ("|5|> RITHMISEIS LOGARIASMOY               |                   TIMH SYNALLAGMATOS <|6|   \n");
         	printf ("|_|_______________________________________|_______________________________________|_|   \n"); 
         	printf ("|7|> ALLAGH GLWSSAS                       |                  EKSODOS APO TO MENU <|8|   \n"); 
	        printf ("|_|_______________________________________|_______________________________________|_|   \n"); 
         	       
         	    printf ("                                                                                 \n");        
			    printf ("     _____________________________________________________________________       \n");
	            printf ("    |                     PARAKALW DIALEKSTE MIA EPILOGI                  |      \n");
	            printf ("    |_____________________________________________________________________|      \n");   
				 
				printf ("                                                                                 \n");
			     
					
			     }while(!k);
	           }
	      
            
             if (pin!="1238")
			 { 
			  printf ("\n");
			printf ("                            LATHOS PIN PROSPATHEISTE KSANA                         \n"); 
		    Sleep(2000);  	
   	        system ("cls");
         	(void)system("bank.exe");	
		    }
		    
		    
  return 0;     	    
}
