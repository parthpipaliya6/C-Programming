#include<stdio.h>
#include<conio.h>
#define P printf


main()
{
	int n,a,b,c=0;
    
	clrscr();
    
	P("!! WELCOME TO FRIDAY CINEMA!!\n");
	P("\n\n1. for Hollywood\n");
	P("2. for Bollywood\n");
	P("3. for Tollywood\n\n");
	
	P("Enter your choiice :");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for 1920 : horror of the heart\n");
					P("2. for calling sahasra\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: 1920 : horror of the heart\n");
							P("Prize\t\t: 550 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: calling sahasra\n");
							P("Prize\t\t: 300 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;


						default:
							P("Invalid input");
					}
				break;

				case 2:
					P("\n\n1. for game over\n");
					P("2. for chhorii\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: game over\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: " );
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: chhorii\n");
							P("Prize\t\t: 610 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
				    }
				break;

				case 3:
					P("\n\n1. for body double\n");
					P("2. for one ranger\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: body double\n");
							P("Prize\t\t: 550 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: one tanger\n");
							P("Prize\t\t: 650 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
					}
				break;

				default :
					P("\n\nInvalid choice");
			}

		break;

		case 2:

			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);

			switch(n)
			{
				case 1:
					P("\n\n1. for lrui : ghost hotel\n");
					P("2. for Bhoot\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: lrui : ghost hotel\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: Bhoot\n");
							P("Prize\t\t: 410 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
					}
				break;

				case 2:
					P("\n\n1. for Welcome\n");
					P("2. for dhamaal\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: Welcome\n");
							P("Prize\t\t: 350 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: dhamaal\n");
							P("Prize\t\t: 400 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
				    }
				break;

				case 3:
					P("\n\n1. for gudar-2\n");
					P("2. for fighter\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: gudar-2\n");
							P("Prize\t\t: 550 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: fighter\n");
							P("Prize\t\t: 650 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
					}
				break;

				default :
					P("\n\nInvalid choice");
			}

		break;

		case 3:

			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);

			switch(n)
			{
				case 1:
					P("\n\n1. fof cold case \n");
					P("2. for evil returns\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: Cold Case\n");
							P("Prize\t\t: 550 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: evil returns\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
					}
				break;

				case 2:
					P("\n\n1. for bhagam bhag\n");
					P("2. for Phir hera pheri\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: bhagam bhag\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: phir hera pheri\n");
							P("Prize\t\t: 500 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
				    }
				break;

				case 3:
					P("\n\n1. for fast Charlie\n");
					P("2. for The marsh king's daughter\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);

					switch(n)
					{
						case 1:
							P("\n\nMovie\t\t: fast Charlie\n");
							P("Prize\t\t: 350 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						case 2:
							P("\n\nMovie\t\t: The marsh king's daughter\n");
							P("Prize\t\t: 450 Rupees\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n!! THANK YOU FOR VISIT !!");
						break;

						default:
							P("Invalid input");
					}
				break;

				default :
					P("\n\nInvalid choice");
			}

		break;

		default:
			P("\n\n!! Invalid Input,Please Try Again !!");
	}

    getch();

}