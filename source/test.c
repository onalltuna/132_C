/* *********** Pledge of Honor ***************************************************************************
* I hereby certify that I have completed this programming assignment on my own
* without any help from anyone else. The effort in the assignment thus belongs
* completely to me. I did not search for a solution, or I did not consult to any program
* written by other students or did not copy any program from other sources. I read and
* followed the guidelines provided in the programming assignment.
*
* READ AND SIGN BY WRITING YOUR NAME SURNAME AND STUDENT ID
* SIGNATURE: <Tuna Onal, 72024>
*
************************************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

// 2 function prototypes
char *decrypt(char* mes, int code);
int stringcalculate(char* a);

//some global variables used throughout the program
int n1,n2,n3,n4,n5,times,encode,k, who;

int m1 = 3;
int m2 = 2;
int m3 = 1;
int m4,m5;

char keyword[50];

// Mail structure which contains 8 strings and a int
// Strings hold information about mail: sender, subject, message etc.
typedef struct {

	char sender[25];
	char subject[50];
	char date[30];
	char realmessage[150];
	char saddress[50];
	char message[150];
	char readress[50];
	char header[500];
	int code;
} Mail;



// User structure which contains a string(mail address of the user) and a array of mails(mailbox of the user)
typedef struct {

	char address[50];
	Mail inbox[15];
} User;


// Server structure which contains a string(name of the server) and a User array(users of that server)
typedef struct {

	char name[40];
	User users[20];

} Server;


//Mail addresses of the users are decided here
User user1 = {"hotmail1"};
User user2 = {"gmail2"};
User user3 = {"hotmail3"};
User user4 = {"kumail4"};
User user5 = {"kumail5"};

// There are three different types of servers and users are signed up for different servers
Server server1 = {"hotmail"};
Server server2 = {"gmail"};
Server server3 = {"kumail"};




// this fucntion displays the mails of the selected user if they include the keyword in the header
//it takes int user as call by value and char *keyword as call by reference
// this function finds needen information by going to related server and related user and fianlly related mail

void displayKeywordMails(int user, char *keyword) {

	if (user == 1) {

		for(int i = 0; i < m1; i++) {

			char *ptr = strstr(server1.users[0].inbox[i].header, keyword);

			if (ptr != NULL) {

				int subjectres =  stringcalculate(server1.users[0].inbox[i].subject);

							printf("-------------------------------------\n");
							printf("Sender name: %s\n",server1.users[0].inbox[i].sender);
							printf("Sender address: %s\n",server1.users[0].inbox[i].saddress);

							if (subjectres > 0) {
								printf("Subject: %s: %d\n",server1.users[0].inbox[i].subject,subjectres);
							} else {
								printf("Subject: %s: %s \n",server1.users[0].inbox[i].subject,"“Invalid expression!");
							}

							printf("Date: %s\n", server1.users[0].inbox[i].date);
							printf("Message: %s\n", server1.users[0].inbox[i].realmessage);

							subjectres = 0;

			}

		}

	} else if (user == 2) {
		for(int i = 0; i < m2; i++) {

			char *ptr2 = strstr(server2.users[0].inbox[i].header, keyword);

			if (ptr2 != NULL) {

				int subjectres =  stringcalculate(server2.users[0].inbox[i].subject);

							printf("-------------------------------------\n");
							printf("Sender name: %s\n",server2.users[0].inbox[i].sender);
							printf("Sender address: %s\n",server2.users[0].inbox[i].saddress);

							if (subjectres > 0) {
								printf("Subject: %s: %d\n",server2.users[0].inbox[i].subject,subjectres);
							} else {
								printf("Subject: %s: %s \n",server2.users[0].inbox[i].subject,"“Invalid expression!");
							}

							printf("Date: %s\n", server2.users[0].inbox[i].date);
							printf("Message: %s\n", server2.users[0].inbox[i].realmessage);

							subjectres = 0;
			}

		}

	}  else if (user == 3) {
		for(int i = 0; i < m3; i++) {

			char *ptr3 = strstr(server1.users[1].inbox[i].header, keyword);

			if (ptr3 != NULL) {

				int subjectres =  stringcalculate(server1.users[1].inbox[i].subject);

							printf("-------------------------------------\n");
							printf("Sender name: %s\n",server1.users[1].inbox[i].sender);
							printf("Sender address: %s\n",server1.users[1].inbox[i].saddress);

							if (subjectres > 0) {
								printf("Subject: %s: %d\n",server1.users[1].inbox[i].subject,subjectres);
							} else {
								printf("Subject: %s: %s \n",server1.users[1].inbox[i].subject,"“Invalid expression!");
							}

							printf("Date: %s\n", server1.users[1].inbox[i].date);
							printf("Message: %s\n", server1.users[1].inbox[i].realmessage);

							subjectres = 0;
			}

		}
} else if (user == 4) {
	for(int i = 0; i < m4; i++) {

		char *ptr2 = strstr(server3.users[0].inbox[i].header, keyword);

		if (ptr2 != NULL) {

			int subjectres =  stringcalculate(server3.users[0].inbox[i].subject);

						printf("-------------------------------------\n");
						printf("Sender name: %s\n",server3.users[0].inbox[i].sender);
						printf("Sender address: %s\n",server3.users[0].inbox[i].saddress);

						if (subjectres > 0) {
							printf("Subject: %s: %d\n",server3.users[0].inbox[i].subject,subjectres);
						} else {
							printf("Subject: %s: %s \n",server3.users[0].inbox[i].subject,"“Invalid expression!");
						}

						printf("Date: %s\n", server3.users[0].inbox[i].date);
						printf("Message: %s\n", server3.users[0].inbox[i].realmessage);

						subjectres = 0;
		}

	}

} else if (user == 5) {
	for(int i = 0; i < m5; i++) {

		char *ptr2 = strstr(server3.users[1].inbox[i].header, keyword);

		if (ptr2 != NULL) {

			int subjectres =  stringcalculate(server3.users[1].inbox[i].subject);

						printf("-------------------------------------\n");
						printf("Sender name: %s\n",server3.users[1].inbox[i].sender);
						printf("Sender address: %s\n",server3.users[1].inbox[i].saddress);

						if (subjectres > 0) {
							printf("Subject: %s: %d\n",server3.users[1].inbox[i].subject,subjectres);
						} else {
							printf("Subject: %s: %s \n",server3.users[1].inbox[i].subject,"“Invalid expression!");
						}

						printf("Date: %s\n", server3.users[1].inbox[i].date);
						printf("Message: %s\n", server3.users[1].inbox[i].realmessage);

						subjectres = 0;
		}

	}

}
}

// this function displays the last five mails of the given user
//it takes int k as call by value
// if given user does not have five mails then last mails of the given user will be displayed

void display5Mails(int k) {

//in this functions users are assigned to servers
	server1.users[0] = user1;
	server1.users[1] = user3;
	server2.users[0] = user2;
	server3.users[0] = user4;
	server3.users[1] = user5;


	if (k == 1) {
		for(int i = m1-5; i < m1; i++ ) {

			if(i < 0) { i = 0; }

			int subjectres =  stringcalculate(server1.users[0].inbox[i].subject);

			printf("-------------------------------------\n");
			printf("Mail number %d\n", i + 1);
			printf("Sender name: %s\n",server1.users[0].inbox[i].sender);
			printf("Sender address: %s\n",server1.users[0].inbox[i].saddress);

			if (subjectres > 0) {
				printf("Subject: %s: %d\n",server1.users[0].inbox[i].subject,subjectres);
			} else {
				printf("Subject: %s: %s \n",server1.users[0].inbox[i].subject,"“Invalid expression!");
			}

			printf("Date: %s\n", server1.users[0].inbox[i].date);
			printf("Message: %s\n", server1.users[0].inbox[i].realmessage);

			subjectres = 0;




		}
	} else if (k == 2) {
		for(int i = m2-5; i < m2; i++) {
			if(i < 0) { i = 0; }

			int subjectres =  stringcalculate(server2.users[0].inbox[i].subject);




			printf("-------------------------------------\n");
			printf("Mail number %d\n", i + 1);
			printf("Sender name: %s\n",server2.users[0].inbox[i].sender);
			printf("Sender address: %s\n",server2.users[0].inbox[i].saddress);


			if (subjectres > 0) {
				printf("Subject: %s: %d\n",server2.users[0].inbox[i].subject,subjectres);
			} else {
				printf("Subject: %s: %s \n",server2.users[0].inbox[i].subject,"“Invalid expression!");
			}


			printf("Date: %s\n", server2.users[0].inbox[i].date);
			printf("Message: %s\n", server2.users[0].inbox[i].realmessage);

			subjectres = 0;

		}
	} else if (k == 3) {
		for(int i = m3-5; i < m3; i++) {
			if(i < 0) { i = 0; }

			int subjectres =  stringcalculate(server1.users[i].inbox[i].subject);

			printf("-------------------------------------\n");
			printf("Mail number %d\n", i + 1);
			printf("Sender name: %s\n",server1.users[1].inbox[i].sender);
			printf("Sender address: %s\n",server1.users[1].inbox[i].saddress);


			if (subjectres > 0) {
				printf("Subject: %s: %d\n",server1.users[1].inbox[i].subject,subjectres);
			} else {
				printf("Subject: %s: %s \n",server1.users[1].inbox[i].subject,"“Invalid expression!");
			}


			printf("Date: %s\n", server1.users[1].inbox[i].date);
			printf("Message: %s\n", server1.users[1].inbox[i].realmessage);

			subjectres = 0;

		}
	}  else if (k == 4) {
		for(int i = m4-5; i < m4; i++) {

			if(i < 0) { i = 0; }

			int subjectres =  stringcalculate(server3.users[0].inbox[i].subject);

			printf("-------------------------------------\n");
			printf("Mail number %d\n", i + 1);
			printf("Sender name: %s\n",server3.users[0].inbox[i].sender);
			printf("Sender address: %s\n",server3.users[0].inbox[i].saddress);


			if (subjectres > 0) {
				printf("Subject: %s: %d\n",server3.users[0].inbox[i].subject,subjectres);
			} else {
				printf("Subject: %s: %s \n",server3.users[0].inbox[i].subject,"“Invalid expression!");
			}


			printf("Date: %s\n", server3.users[0].inbox[i].date);
			printf("Message: %s\n", server3.users[0].inbox[i].realmessage);

			subjectres = 0;

		}
	}  else if (k == 5) {
		for(int i = m5-5; i < m5; i++) {

			if(i < 0) { i = 0; }

			int subjectres =  stringcalculate(server3.users[1].inbox[i].subject);

			printf("-------------------------------------\n");
			printf("Mail number %d\n", i + 1);
			printf("Sender name: %s\n",server3.users[1].inbox[i].sender);
			printf("Sender address: %s\n",server3.users[1].inbox[i].saddress);


			if (subjectres > 0) {
				printf("Subject: %s: %d\n",server3.users[1].inbox[i].subject,subjectres);
			} else {
				printf("Subject: %s: %s \n",server3.users[1].inbox[i].subject,"“Invalid expression!");
			}


			printf("Date: %s\n", server3.users[1].inbox[i].date);
			printf("Message: %s\n", server3.users[1].inbox[i].realmessage);

			subjectres = 0;

		}
	}
}

// calculte function is used to get the real values of the numbers from their ASCII codes
// it takes int *t as call by reference and returns the numeric value from the ASCII codes
// this function will be used in stringcalculate function
int calculate(int *t) {

	int result = 0;
	int k = 0;

	while(t[k] != 0) {

		result = 10*(result) + (t[k]-48);
		k++;


	}
		return result;
}

//this function takes a char *mes as call by reference and int code as call by value
//in encrypts the given string acording to code by using Ceaser Cipher
//then it returns the encrypted string
char *encrypt(char* mes,int code) {

	static char messageen[150];
	 char c;

	 for(int i = 0; messageen[i] != '\0';i++) {
	 		messageen[i] = '\0';
	 	}

	 for(int i = 0; mes[i] != '\0'; i++) {
		 c = mes[i];


			 c += code;



		 messageen[i] = c;
	 }

	 return messageen;
}

//this function works in an opposite way with the encryp function
//in takes a string as call by reference and a code as call by value
//the decrypts the given string according to given code
char *decrypt(char* mes, int code) {

	static char messagede[150];
	char c;

	for(int i = 0; messagede[i] != '\0';i++) {
		messagede[i] = '\0';
	}


	for(int i = 0; mes[i] != '\0'; i++) {
		c = mes[i];


			c -= code;



		messagede[i] = c;
	}
	return messagede;
}

//this function is used to calculate arithmetic operations given in string format
//it takes a string as call by reference
//then if the string is in a valid format function performs the arithmetic expression
//and returns the result of the expression
int stringcalculate(char* a) {

	int b = 0;
	int res = 0;

	for(int i = 0; i < strlen(a); i++) {
		if(isalpha(a[i])) {
			b -= 10000;
		} else if(!isalpha(a[i])) {
			b++;
		}
	}

	if(b < 0) {

		 return res;

	} else if (b > 0) {


		char c2 = '+';
		int t[50];
		for(int l = 0; l < 50; l++) {
			t[l] = 0;
		}

		for(int i = 0; a[i] != '\0'; i++) {

			if(a[i] != ' ' && a[i] != '+' && a[i] != '-') {
				t[k] = a[i];


				k++;

			} else if (a[i] == ' ' && a[i-1] != '+' && a[i-1] != '-') {


				if (c2 == '+') {
					res += calculate(t);

				} else if (c2 == '-') {

					res -= calculate(t);
				}


				for(int l = 0; l < 50; l++) {
							t[l] = 0;
						}
				k = 0;

			} else if (a[i] == '+' || a[i] == '-') {
				c2 = a[i];

			}
		}
	}

	return res;
}

//this function is used the send mails
//it takes an integer as call by value and it determines how many mails the user will send
//it asks user to enter some needed information about mail
//if needed information is gathered this function creates a mail and
//adds this mail to related users inbox
void sendMail(int run) {

	Mail mail;
	int c = 1;
	char message[150];

	for (int i = 0; i < run; i++) {


				printf("For your %dth mail:\n",c );
				printf("Your name:\n");
				fgets(mail.sender, sizeof mail.sender, stdin);
				scanf("%[^\n]s", mail.sender);
				printf("Your mail address:\n");
				scanf("%s",mail.saddress);
				printf("To:\n");
				scanf("%s",mail.readress);
				printf("Subject:\n");
				fgets(mail.subject, sizeof mail.subject, stdin);
				scanf("%[^\n]s",mail.subject);
				printf("Date:\n");
				scanf("%s", mail.date);
				printf("Your message:\n");
				fgets(mail.message, sizeof mail.message, stdin);
				scanf("%[^\n]s", message);
				printf("Encryption code:\n");
				scanf("%d", &mail.code);
				strcpy(mail.message, encrypt(message,mail.code));
				strcpy(mail.realmessage, decrypt(mail.message,mail.code));

				strcpy(mail.header,mail.readress);
				strcat(mail.header,mail.subject);
				strcat(mail.header,mail.date);


				if( strcmp(mail.readress, "hotmail1") == 0) {

					user1.inbox[m1] = mail;
					printf("SENT!\n");
					c++;
					m1++;



				} else if (strcmp(mail.readress, "gmail2") == 0) {
					user2.inbox[m2] = mail;;
					printf("SENT!\n");
					c++;
					m2++;


				} else if (strcmp(mail.readress, "hotmail3") == 0) {
					user3.inbox[m3] = mail;
					printf("SENT!\n");
					c++;
					m3++;


				} else if (strcmp(mail.readress, "kumail4") == 0) {
					user4.inbox[m4] = mail;
					printf("SENT!\n");
					c++;
					m4++;


				} else if (strcmp(mail.readress, "kumail5") == 0) {
					user5.inbox[m5] = mail;
					printf("SENT!\n");
					c++;
					m5++;

				}
		}
	}



int main () {

//some mails are created already
	Mail mail1 = {"Alp", "Psyc class", "18.01.2021", "Do you have psyc notes?", "hotmail3"};
	strcpy(mail1.header,mail1.readress);
	strcat(mail1.header,mail1.subject);
	strcat(mail1.header,mail1.date);
	user1.inbox[0] = mail1;



	Mail mail2 = {"Doruk", "Math class", "17.01.2021", "Do you have math notes?", "kumail4"};
	strcpy(mail2.header,mail2.readress);
	strcat(mail2.header,mail2.subject);
	strcat(mail2.header,mail2.date);
	user1.inbox[1] = mail2;

	Mail mail3 = {"Melih", "Comp132 class", "18.01.2021", "Do you comp132 have comp notes?", "kumail5"};
	strcpy(mail3.header,mail3.readress);
	strcat(mail3.header,mail3.subject);
	strcat(mail3.header,mail3.date);
	user1.inbox[2] = mail3;

	Mail mail4 = {"Melih", "Turk100 class", "15.01.2021", "Do you have Turk100 notes?", "kumail5"};
	strcpy(mail4.header,mail4.readress);
	strcat(mail4.header,mail4.subject);
	strcat(mail4.header,mail4.date);
	user2.inbox[0] = mail4;

	Mail mail5 = {"Doruk", "Comp106 class", "17.01.2021", "Do you have Comp106 notes?", "kumail4"};
	strcpy(mail5.header,mail5.readress);
	strcat(mail5.header,mail5.subject);
	strcat(mail5.header,mail5.date);
	user2.inbox[1] = mail5;

	Mail mail6 = {"Can", "Comp106 class", "17.01.2021", "I have comp106 notes", "kumail4"};
	strcpy(mail6.header,mail6.readress);
	strcat(mail6.header,mail6.subject);
	strcat(mail6.header,mail6.date);
	user3.inbox[0] = mail6;


//this is where the program actually starts
	printf("In order to send mails please follow the instructions\n");
	printf("------------------------------------------------------\n");
	printf("Please enter the number of mails you want to send -->\n");
	scanf("%d", &times);
	sendMail(times);

	printf("------------------------------------------------------\n");
	printf("------------------------------------------------------\n");

	printf("In order to send mails please follow the instructions\n");
	printf("------------------------------------------------------\n");
	printf("Please enter the number of mails you want to send -->\n");
	scanf("%d", &times);
	sendMail(times);

	printf("------------------------------------------------------\n");
	printf("------------------------------------------------------\n");

	printf("In order to send mails please follow the instructions\n");
	printf("------------------------------------------------------\n");
	printf("Please enter the number of mails you want to send -->\n");
	scanf("%d", &times);
	sendMail(times);

	printf("------------------------------------------------------\n");
	printf("------------------------------------------------------\n");

	printf("In order to send mails please follow the instructions\n");
	printf("------------------------------------------------------\n");
	printf("Please enter the number of mails you want to send -->\n");
	scanf("%d", &times);
	sendMail(times);

	printf("------------------------------------------------------\n");
	printf("------------------------------------------------------\n");

	printf("In order to send mails please follow the instructions\n");
	printf("------------------------------------------------------\n");
	printf("Please enter the number of mails you want to send -->\n");
	scanf("%d", &times);
	sendMail(times);


	printf("Please enter number of the user you want to see mails:\n");
	scanf("%d", &who);
	display5Mails(who);


	printf("Please enter number of the user you want to see mails:\n");
	scanf("%d", &who);
	printf("Please enter the keyword you want to look for:\n");
	scanf("%s",keyword);


	displayKeywordMails(who,keyword);

//this is where the program actually ends
//the part below is to test the functions
	printf("-------------------------------------------------------------------------------------\n");
	printf("-------------------------------------------------------------------------------------\n");
	printf("-------------------------------------------------------------------------------------\n");
	printf("\nThis part of the program is for testing the functions!!\n");

	char test[150];
	char test2[150];
	int try;
	printf("Please enter a messsage to encrypt:\n");
	fgets(test, sizeof test, stdin);
	scanf("%[^\n]s", test);
	printf("Please enter an integer to encrypt:\n");
	scanf("%d",&try);
	printf("Encrypted message: %s\n", encrypt(test,try));
	printf("Decrypted message: %s\n", decrypt(encrypt(test,try),try));
	printf("Please enter a valid operation: \n");
	fgets(test2, sizeof test2, stdin);
	scanf("%[^\n]s",test2);
	printf("It equals to %d",stringcalculate(test2));

	return 0;
}
