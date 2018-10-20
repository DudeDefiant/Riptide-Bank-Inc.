/***************************************
 * PROJECT BANK MANAGEMENT SYSTEM      *
 * PROGRAMMER SPANDAN KAR              *
 * EMAIL spandn2000@gmail.com          *
 * TEL NO. +91-9692333250              *
 ***************************************/
//==============================================================================
//                           LIBRARIES OR HEADERS
//==============================================================================
 #include<iostream>
 #include<conio.h>
 #include<fstream>
 #include<math.h>
 #include<string.h>
 #include<stdio.h>
 #include<windows.h>
 #include<iomanip>
 #include<time.h>

 using namespace std;
//==============================================================================
//                       FUNCTION FOR THE AXIS (GOTOXY)
//==============================================================================
 void gotoxy(int x, int y){
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//==============================================================================
//                      FUNCTION TO CLEAR CONSOLE WINDOW
//==============================================================================
void clearWindow(){
     int i,j;
     for(i=15; i<65; i++){
           for(j=0; j<25; j++){
                 gotoxy(i,j); printf(" ");
        }
    }
    return;
}

long accNumber();

//==============================================================================
//                               MAIN CLASS
//==============================================================================
  class Bank {

        public:
               char fname[12], lname[12], nationality[30], accType;
               int openAmt, accNo;
        private:
                int i;
        public:
        // ADMIN FUNCTION
        char openAcc(){
             clearWindow();
             //srand(time(NULL));
             //accNo = rand() % 100 + 10;
             accNo = accNumber();
             gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
             gotoxy(19,4); std::cout<<" ADD RECORD ";
             gotoxy(18,7); std::cout<<" FIRST NAME : ";
             gotoxy(18,9); std::cout<<" OTHER NAME : ";
             gotoxy(18,11); std::cout<<" NATIONALITY : ";
             gotoxy(18,13); std::cout<<" ACCOUNT TYPE [C/S] : ";
             gotoxy(18,15); std::cout<<" OPENING AMOUNT [C=1000 /S=500] : ";
             gotoxy(18,17); std::cout<<" ACCOUNT NUMBER : ";
             gotoxy(36,19); std::cout<<" NOTE ";
             gotoxy(25,21); std::cout<<" USE UNDERSCORE FOR SPACES... ";
             gotoxy(32,7); std::cin>>fname;
             gotoxy(32,9); std::cin>>lname;
             gotoxy(33,11); std::cin>>nationality;

             gotoxy(40,13); std::cin>>accType;
             accType=toupper(accType);
             gotoxy(52,15); std::cin>>openAmt;
             gotoxy(36,17); std::cout<<accNo;
             gotoxy(25,21); std::cout<<" ACCOUNT OPENED SUCCESSFULLY!";
        }

        void viewAcc1(){
             gotoxy(18,9); std::cout<<" FIRST NAME : ";
             gotoxy(18,11); std::cout<<" OTHER NAME : ";
             gotoxy(18,13); std::cout<<" NATIONALITY : ";
             gotoxy(18,15); std::cout<<" ACCOUNT TYPE [C/S] : ";
             gotoxy(18,17); std::cout<<" OPENING AMOUNT [C=1000 /S=500] : ";
             gotoxy(32,9); std::cout<<fname;
             gotoxy(32,11); std::cout<<lname;
             gotoxy(33,13); std::cout<<nationality;
             gotoxy(40,15); std::cout<<accType;
             gotoxy(52,17); std::cout<<openAmt;
             gotoxy(33,19); std::cout<<" NOTIFICATION ";
             gotoxy(32,6); std::cout<<" ACCOUNT NO: ";
             gotoxy(44,6); std::cout<<accNo;
        }

        void viewAllAcc(){
            int i;
            gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
            gotoxy(5,4); std::cout<<" VIEW ALL ACCOUNTS ";
            gotoxy(32,20); std::cout<<" NOTIFICATION ";
            for(i=1;i<=100;i++) { gotoxy(4+i,7); printf("%c",196); }
            gotoxy(4,6); std::cout<<" ACC_NO ";
            gotoxy(20,6); std::cout<<" FIRST_NAME ";
            gotoxy(40,6); std::cout<<" LAST_NAME ";
            gotoxy(60,6); std::cout<<" NATIONALITY ";
            gotoxy(80,6); std::cout<<" ACC_TYPE ";
            gotoxy(90,6); std::cout<<" ACC_BALANCE ";
            gotoxy(20,22); std::cout<<" PRESS ENTER TO GO BACK TO MAIN MENU... ";
            }

        void delviewAcc(){
             gotoxy(18,7); std::cout<<" FIRST NAME : ";
             gotoxy(18,9); std::cout<<" OTHER NAME : ";
             gotoxy(18,11); std::cout<<" NATIONALITY : ";
             gotoxy(18,13); std::cout<<" ACCOUNT TYPE [C/S] : ";
             gotoxy(18,15); std::cout<<" OPENING AMOUNT [C=1000 /S=500] : ";
             gotoxy(32,7); std::cout<<fname;
             gotoxy(32,9); std::cout<<lname;
             gotoxy(33,11); std::cout<<nationality;
             gotoxy(40,13); std::cout<<accType;
             gotoxy(52,15); std::cout<<openAmt;
        }


        void modifyRecordDetailz(){
             gotoxy(4,9); std::cout<<" FIRST NAME : ";
             gotoxy(4,11); std::cout<<" OTHER NAME : ";
             gotoxy(4,13); std::cout<<" NATIONALITY : ";
             gotoxy(4,15); std::cout<<" ACCOUNT TYPE [C/S] : ";
             gotoxy(4,17); std::cout<<" ACCOUNT BALANCE : ";
             gotoxy(18,9); std::cout<<fname;
             gotoxy(18,11); std::cout<<lname;
             gotoxy(19,13); std::cout<<nationality;
             gotoxy(26,15); std::cout<<accType;
             gotoxy(23,17); std::cout<<openAmt;
             gotoxy(41,9); std::cout<<" FIRST NAME : ";
             gotoxy(41,11); std::cout<<" OTHER NAME : ";
             gotoxy(41,13); std::cout<<" NATIONALITY : ";
             gotoxy(41,15); std::cout<<" ACCOUNT TYPE [C/S] : ";
             gotoxy(41,17); std::cout<<" UPGRADING AMOUNT : ";
             gotoxy(55,9); std::cin>>fname;
             gotoxy(55,11); std::cin>>lname;
             gotoxy(56,13); std::cin>>nationality;
             gotoxy(63,15); std::cin>>accType;
             gotoxy(61,17); std::cin>>openAmt;
        }

        void aboutUs(){
            system("cls");
            gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
            gotoxy(5,4); std::cout<<" ABOUT US ";
            gotoxy(4,6); std::cout<<" RIPTIDE BANK INC. WAS STARTED IN 2017. I DECIDED TO WRITE A SYSTEM ABOUT ";
            gotoxy(4,7); std::cout<<" A BANK AND NAMED IT RIPTIDE BANK INCORPORATED. RIPTIDE WAS STARTED ON ";
            gotoxy(4,8); std::cout<<" A PARTICULAR PURPOSE TO SERVE ALL THE CITIZENS LIVING IN OUR COUNTRY";
            gotoxy(4,9); std::cout<<" WHO WANTS TO KEEP THEIR MONEY IN THE SAFEST HAND. RIPTIDE BANK INC IS A ";
            gotoxy(4,10); std::cout<<" PRIVATLEY OWNED COMPANY AND ITS NOT AFFILIATED TO ANY BANK. RIPTIDE BANK ";
            gotoxy(4,11); std::cout<<" IS SITUATED IN OUR PRIVATE TERRITORY BUT SOON GOING GLOBAL. RIPTIDE BANK ";
            gotoxy(4,12); std::cout<<" INC IS FUNDED BY WELL WISHERZ AND THE PEOPLE IN THE AREA IT SERVES. ";
            gotoxy(4,13); std::cout<<" IN SHORT THE JOURNEY TO BUILDING THIS BANK TO BE WHERE IT IS TODAY HAS ";
            gotoxy(4,14); std::cout<<" BEEN A HARD ONE FROM DODGING THE BULLETS TO MAKING IT BETTER ALL DAY.";
            gotoxy(4,17); std::cout<<" NOTIFICATION ";
            gotoxy(32,19); std::cout<<" PRESS ANY KEY TO GO BACK TO THE MAIN MENU.. ";
            getch();
            }

        int retAccNo(){
            return accNo;
            }
        int returnDeposit(){
            return openAmt;
            }
        char returnAcctype(){
             return accType;
             }
        void dep(int x){
             openAmt+=x;
             }
        void withdraw(int x){
             openAmt-=x;
             }
  };
//==============================================================================
//             CLASS OBJECTS DECLARATION AND FILE STREAM OBJECTS
//==============================================================================
   Bank banky;
   FILE *outFile, *inFile;

//==============================================================================

//==============================================================================

    long accNumber(){
        long accnum;
        srand(time(NULL));
        inFile = fopen("ACCOUNTZ.dat","rb");
            while(fread(&banky, sizeof(banky),1,inFile) == 1){
                accnum = rand() % 1000000 + 100000;
                if(accnum==banky.retAccNo())
                    continue;
                else
                    break;
            }
        fclose(inFile);
        return accnum;
    }

    void delview(int x){
        inFile = fopen("ACCOUNTZ.dat","rb");
             while(fread(&banky, sizeof(banky),1,inFile) == 1){
                if(banky.retAccNo()==x)
                banky.delviewAcc();
        }
        fclose(inFile);
    }

//==============================================================================
//             FUNCTION - DEPOSIT AMOUNT
//==============================================================================
   void depositAmountz(){
        int amt, n;
        bool found=false;
        char ch;
        do{
        clearWindow();
        gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
        gotoxy(19,4); std::cout<<" DEPOSIT AMOUNT ";
        gotoxy(18,21); std::cout<<" ENTER ACCOUNT NUMBER : ";
        fflush(stdin);
        gotoxy(42,21); std::cin>>n;
        inFile = fopen("ACCOUNTZ.dat","rb+");
        if(inFile == NULL){
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        getch();
        return;
        }
        while(fread(&banky, sizeof(banky),1,inFile) == 1){
        if(banky.retAccNo()==n){
        banky.viewAcc1();
        gotoxy(18,21); std::cout<<" ENTER AMOUNT TO DEPOSIT: ";
        gotoxy(44,21); std::cin>>amt;
        banky.dep(amt);
        fseek(inFile,-sizeof(banky), SEEK_CUR);
        fwrite(&banky,sizeof(banky), 1, inFile);
        gotoxy(18,21); std::cout<<amt<<" DEPOSITED SUCCESSFULLY!";
        getch();
        gotoxy(18,21); std::cout<<"DO YOU WANT TO DEPOSIT MORE AMOUNT? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        found=true;
        break;
        }
        }
        if(banky.retAccNo()!=n){
        gotoxy(18,21); std::cout<<" SORRY! ACCOUNT NUMBER " <<n<<" DOES NOT EXIST!";
        getch();
        gotoxy(18,21); std::cout<<"DO U WISH TO RE-TYPE YO ACCOUNT NO? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        }
        fclose(inFile);
        }
        while(ch=='y' || ch=='Y');
        gotoxy(18,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
        getch();
		return;
  }
//==============================================================================
//                        FUNCTION - BALANCE CHECK
//==============================================================================
   void balanceCheck(){
        int amt, n, i;
        bool found=false;
        char ch;
        do{
        clearWindow();
        gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
        gotoxy(19,4); std::cout<<" BALANCE CHECK ";
        gotoxy(18,21); std::cout<<" ENTER ACCOUNT NUMBER : ";
        fflush(stdin);
        gotoxy(42,21); std::cin>>n;
        inFile = fopen("ACCOUNTZ.dat","rb+");
        if(inFile == NULL){
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        getch();
        return;
        }
        while(fread(&banky, sizeof(banky),1,inFile) == 1){
        if(banky.retAccNo()==n){
        gotoxy(33,19); std::cout<<" NOTIFICATION ";
        gotoxy(32,6); std::cout<<" ACCOUNT NO: ";
        gotoxy(44,6); std::cout<<banky.accNo;
        gotoxy(18,9);std::cout<<" NAME : "<<banky.fname;
        gotoxy(18,11);std::cout<<" ACCOUNT TYPE : "<<banky.returnAcctype();
        gotoxy(18,13);std::cout<<" YOUR ACCOUNT BALANCE : "<<banky.returnDeposit();
        gotoxy(18,15);std::cout<<" THANK YOU SO MUCH "<<banky.fname<<" FOR BANKING";
        gotoxy(18,17);std::cout<<" WITH RIPTIDE BANK INCORPORATED!!";
        getch();
        gotoxy(18,21); std::cout<<"WANT TO CHECK MORE ACCOUNT BALANCE? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        found=true;
        break;
        }
        }
        if(banky.retAccNo()!=n){
        gotoxy(18,21); std::cout<<" SORRY! ACCOUNT NUMBER " <<n<<" DOES NOT EXIST!";
        getch();
        gotoxy(18,21); std::cout<<"DO U WISH TO RE-TYPE YO ACCOUNT NO? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        }
        fclose(inFile);
        }
        while(ch=='y' || ch=='Y');
        gotoxy(18,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
        getch();
		return;
  }
//==============================================================================
//             FUNCTION - WITHDRAW AMOUNT
//==============================================================================
   void withdrawAmountz(){
        int amt, n;
        bool found=false;
        char ch;
        do{
        clearWindow();
        gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
        gotoxy(19,4); std::cout<<" WITHDRAW AMOUNT ";
        gotoxy(18,21); std::cout<<" ENTER ACCOUNT NUMBER : ";
        fflush(stdin);
        gotoxy(42,21); std::cin>>n;
        inFile = fopen("ACCOUNTZ.dat","rb+");
        if(inFile == NULL){
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        getch();
        return;
        }
        while(fread(&banky, sizeof(banky),1,inFile) == 1){
        if(banky.retAccNo()==n){
        banky.viewAcc1();
        gotoxy(18,21); std::cout<<" ENTER AMOUNT TO WITHDRAW : ";
        gotoxy(46,21); std::cin>>amt;
        int bal=banky.returnDeposit()-amt;
        if((bal<=500 && banky.returnAcctype()=='s' || bal<=500 && banky.returnAcctype()=='S')
        || (bal<=1000 && banky.returnAcctype()=='c' || bal<=1000 && banky.returnAcctype()=='C')){
        gotoxy(18,21); std::cout<<" SORRY! YOUR ACCOUNT BALANCE IS TOO LOW!";
        getch();
        gotoxy(18,21); std::cout<<"DO U WISH TO TRY AGAIN WITHDRAWING? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        break;
        }
        if((bal>500 && banky.returnAcctype()=='s' || bal>500 && banky.returnAcctype()=='S')
        || (bal>1000 && banky.returnAcctype()=='c' || bal>1000 && banky.returnAcctype()=='C')){
        banky.withdraw(amt);
        fseek(inFile,-sizeof(banky), SEEK_CUR);
        fwrite(&banky,sizeof(banky), 1, inFile);
        gotoxy(18,21); std::cout<<amt<<" WITHDRAWN SUCCESSFULLY!";
        getch();
        gotoxy(18,21); std::cout<<"DO YOU WISH TO WITHDRAW MORE CASH? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        break;
        }
        }
        }
        if(banky.retAccNo()!=n){
        gotoxy(18,21); std::cout<<" SORRY! ACCOUNT NUMBER " <<n<<" DOES NOT EXIST!";
        getch();
        gotoxy(18,21); std::cout<<"DO U WANT TO RE-TYPE YO ACCOUNT NO? [Y/N]:";
        gotoxy(60,21); std::cin>>ch;
        }
        fclose(inFile);
        }
        while(ch=='y' || ch=='Y');
        gotoxy(18,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
        getch();
		return;
  }
//==============================================================================
//                        FUNCTION MAIN BANKER MENU
//==============================================================================
  void bankerMenu(){
       int i, n;
       do {
           system("cls");
           system("color 02");
           gotoxy(32,3); std::cout<<"RIPTIDE BANK INC.";
           gotoxy(18,8); std::cout<<"[1] ABOUT US";
           gotoxy(18,10); std::cout<<"[2] DEPOSIT AMOUNT";
           gotoxy(18,12); std::cout<<"[3] BALANCE CHECK";
           gotoxy(18,14); std::cout<<"[4] WITHDRAW AMOUNT";
           gotoxy(18,16); std::cout<<"[5] LOG OUT";
           gotoxy(19,21); std::cout<<"SELECT FROM [1-5] : ";
           gotoxy(39,21); std::cin>>n;

       switch(n){
                 case 1: banky.aboutUs();
                 break;
                 case 2: depositAmountz();
                 break;
                 case 3: balanceCheck();
                 break;
                 case 4: withdrawAmountz();
                 break;
                 default: gotoxy(19,21); std::cout<<" THANK YOU SO MUCH FOR BANKING WITH US!";
                 getch();
                 gotoxy(19,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
                 getch();
                 }
                 }
                 while(n!=5);
  }
//==============================================================================
//                     FUNCTION - BANKER LOGIN
//==============================================================================
   void bankerLogin(void){
        int i, j, k, n;
        bool found=false;
        char ch;
        do{
        clearWindow();
        gotoxy(30,5); std::cout<<"RIPTIDE BANK INC.";
        gotoxy(30,12); std::cout<<"Account No:__________";
        gotoxy(41,12); std::cin>>n;
        inFile = fopen("ACCOUNTZ.dat","rb+");
        if(inFile == NULL){
        MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
        getch();
        return;
        }
        while(fread(&banky,sizeof(banky),1,inFile) == 1){
        if(banky.retAccNo()==n){
        bankerMenu();
        return;
        }
        found = true;
        }
        if(banky.retAccNo()!=n){
        gotoxy(21,20); std::cout<<" SORRY ACCOUNT NUMBER "<<n<<" DOESNT EXIST";
        getch();
        gotoxy(21,20); std::cout<<" DO YOU WANT TO TRY RE-ENTERIN? [Y/N]: ";
        gotoxy(59,20); std::cin>>ch;
        }
        fclose(inFile);
        }
        while(ch=='y' || ch=='Y');
        gotoxy(21,20); std::cout<<" PRESS ENTER TO GO BACK TO THE MAIN MENU";
        getch();
        return;
   }
//==============================================================================
//                   FUNCTION TO WRITE RECORDZ TO FILE
//==============================================================================
    void addRecord(){
       char ch;
       do{
       clearWindow();
       outFile = fopen("ACCOUNTZ.dat","ab+");
       if(outFile == NULL){
       MessageBox(0,"ERROR! FILE COULD NOT BE CREATED!","Warning",0);
       }
       else {
       fflush(stdin);
       banky.openAcc();
       fwrite(&banky, sizeof(banky), 1, outFile);
       gotoxy(18,21); std::cout<<" DO U WISH TO OPEN MORE ACCOUNTZ? [Y/N]: ";
       gotoxy(59,21); std::cin>>ch;
       fflush(stdin);
       }
       fclose(outFile);
       }
       while(ch=='y' || ch=='Y');
       gotoxy(18,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
       getch();
       return;
       }
//==============================================================================
//           FUNCTION TO SEARCH AND SHOW A SPECIFIC RECORD
//==============================================================================
    void displayRecord(){
       char ch;
       int n, isFound = 0;
       do{
         clearWindow();
         gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
         gotoxy(19,4); std::cout<<" VIEW RECORD ";
         gotoxy(18,21); std::cout<<" ENTER ACCOUNT NUMBER : ";
         gotoxy(42,21); std::cin>>n;
         fflush(stdin);
         inFile = fopen("ACCOUNTZ.dat","rb");
         if(inFile == NULL){
         MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
         getch();
         return;
         }
         while(fread(&banky,sizeof(banky),1,inFile)){
         if(banky.retAccNo()==n){
         banky.viewAcc1();
         gotoxy(18,21); std::cout<<"DO YOU WANT TO CHECK MORE ACCOUNTZ? [Y/N]: ";
         gotoxy(60,21); std::cin>>ch;
         isFound = 1;
         break;
         }
         }
         if(banky.retAccNo()!=n){
         gotoxy(19,21); std::cout<<"SORRY! THE ACCOUNT NUMBER DOESN'T EXIST!";
         getch();
         gotoxy(18,21); std::cout<<"DO YOU WANT TO CHECK MORE ACCOUNTZ? [Y/N]: ";
         gotoxy(60,21); std::cin>>ch;
         }
         fclose(inFile);
         }
         while(ch=='y' || ch=='Y');
         gotoxy(18,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU";
         getch();
         return;
    }
//==============================================================================
//                    FUNCTION TO DISPLAY ALL ACCOUNTZ
//==============================================================================
  void displayAllRecordz(int j=8){
       clearWindow();
       inFile = fopen("ACCOUNTZ.dat","rb");
       if(inFile == NULL){
       MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
       getch();
       return;
       }
       else {
       fflush(stdin);
       while(fread(&banky,sizeof(banky),1,inFile) == 1){
       banky.viewAllAcc();
       gotoxy(6,j); printf("%d",banky.accNo);
       gotoxy(20,j); printf("%s",banky.fname);
       gotoxy(40,j); printf("%s",banky.lname);
       gotoxy(60,j); printf("%s",banky.nationality);
       gotoxy(80,j); std::cout<<banky.accType;
       gotoxy(90,j); printf("%d",banky.openAmt);
       j=j+1;
       }
       }
       fclose(inFile);
       getch();
       return;
  }
//==============================================================================
//             FUNCTION TO MODIFY RECORD IN FILE [DATABASE]
//==============================================================================
  void editRecord(){
       int n, isFound = 0;
       char ch;
       do{
       clearWindow();
        gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
        gotoxy(12,4); std::cout<<" CURRENT ";
        gotoxy(57,4); std::cout<<" UPDATED ";
        gotoxy(33,3); std::cout<<" EDIT RECORD ";
        gotoxy(33,5); std::cout<<" ACC NO: ";
       gotoxy(42,5); std::cin>>n;
       inFile = fopen("ACCOUNTZ.dat","rb+");
       if(inFile == NULL){
       MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
       getch();
       return;
       }
       while(fread(&banky, sizeof(banky),1,inFile) == 1){
       if(banky.retAccNo()==n){
       fflush(stdin);
       banky.modifyRecordDetailz();
       fseek(inFile,-sizeof(banky), SEEK_CUR);
       fwrite(&banky,sizeof(banky), 1, inFile);
       gotoxy(26,21); std::cout<<" ACCOUNT UPDATED SUCCESSFULLY!";
       getch();
       gotoxy(17,21); std::cout<<"DO YOU WANT TO UPDATE MORE ACCOUNTZ? [Y/N]: ";
       gotoxy(61,21); std::cin>>ch;
       isFound = 1;
       break;
       }
       }
       if(banky.retAccNo()!=n){
       gotoxy(19,21); std::cout<<" SORRY! ACCOUNT NUMBER "<<n<<" DOES NOT EXIST!";
       getch();
       gotoxy(18,21); std::cout<<" DO YOU WANT TO UPDATE MORE ACCOUNTZ? [Y/N]: ";
       gotoxy(63,21); std::cin>>ch;
       }
       fclose(inFile);
       }
       while(ch=='y' || ch=='Y');
       gotoxy(16,21); std::cout<<" PLEASE PRESS ENTER KEY TO GO BACK TO THE MAIN MENU";
       getch();
       return;
  }
//==============================================================================
//          FUNCTION ERASE/ DELETE BANKER DATA FROM FILE [DATABASE]
//==============================================================================
  void deleteRecord(){
       int n;
       char ch;
       clearWindow();
       gotoxy(31,1); std::cout<<" RIPTIDE BANK INC.";
       gotoxy(19,4); std::cout<<" DELETE RECORD ";
       gotoxy(18,21); std::cout<<" ENTER ACCOUNT NUMBER : ";
       fflush(stdin);
       gotoxy(42,21); std::cin>>n;
       delview(n);
       inFile = fopen("ACCOUNTZ.dat","rb");
       if(inFile == NULL){
       MessageBox(0," FILE COULD NOT BE OPENED! \n OR DOES NOT EXIST!","Error",0);
       getch();
       return;
       }
       outFile = fopen("TEMP.dat", "wb");
       while(fread(&banky, sizeof(banky),1,inFile) == 1){
       if(banky.retAccNo()!=n){
       fwrite(&banky,sizeof(banky),1,outFile);
       }
       }
       gotoxy(18,21); std::cout<<" ACCOUNT HAS BEEN DELETED SUCCESSFULLY!";
       getch();
       fclose(inFile);
       fclose(outFile);
       remove("ACCOUNTZ.dat");
       rename("TEMP.dat","ACCOUNTZ.dat");
       gotoxy(18,21); std::cout<<" PRESS ENTER KEY TO GO BACK TO THE MAIN MENU";
       getch();
       return;
    }


//==============================================================================
//                              ADMINISTRATOR MENU
//==============================================================================
 void adminMenu(){
    int i, n;
    do {
    system("cls");
    system("color 02");
    gotoxy(32,3); std::cout<<"RIPTIDE BANK INC.";
    gotoxy(18,7); std::cout<<"[1] OPEN ACCOUNT";
    gotoxy(18,9); std::cout<<"[2] VIEW SPEC. ACCOUNT";
    gotoxy(18,11); std::cout<<"[3] VIEW ALL ACCOUNTZ";
    gotoxy(18,13); std::cout<<"[4] MODIFY ACCOUNT";
    gotoxy(18,15); std::cout<<"[5] CLOSE ACCOUNT";
    gotoxy(18,17); std::cout<<"[6] LOG OUT";
    gotoxy(19,21); std::cout<<"SELECT FROM [1-6] : ";
    gotoxy(39,21); std::cin>>n;

    switch(n){
              case 1: addRecord();
              break;
              case 2: displayRecord();
              break;
              case 3: displayAllRecordz();
              break;
              case 4: editRecord();
              break;
              case 5: deleteRecord();
              break;
              default: gotoxy(19,21); std::cout<<" BYE BYE ADMIN HOPE TO SEE YOU AGAIN SOON!";
              getch();
              gotoxy(19,21); std::cout<<" PLEASE PRESS ENTER TO GO BACK TO MAIN MENU!";
              getch();
              }
              }
              while(n!=6);
    }
//==============================================================================
//                                  ADMINISTRATOR
//==============================================================================
 void adminLogin(void){
      string adminName, pass;
      int i, j, k;
      char ch;
      do{
          clearWindow();
          gotoxy(30,5); std::cout<<"RIPTIDE BANK INC.";
          gotoxy(30,11); std::cout<<"Username: ___________ ";
          gotoxy(30,13); std::cout<<"Password: ___________ ";
          gotoxy(33,17); std::cout<<" NOTIFICATION ";
          gotoxy(40,11); std::cin>>adminName;
          gotoxy(40,13); std::cin>>pass;
          if(adminName=="admin" && pass=="123"){
          adminMenu();
          return;
          }
          else {
               gotoxy(23,20); std::cout<<"SORRY! WRONG ADMIN NAME OR PASSWORD!";
               getch();
               gotoxy(21,20); std::cout<<" DO YOU WANT TO TRY RE-ENTERIN? [Y/N]: ";
               gotoxy(59,20); std::cin>>ch;
               }
          }
          while(ch == 'y' || ch == 'Y');
          return;
      }
//==============================================================================
//                       FUNCTION ABOUT THE PROGRAMMER
//==============================================================================
 void aboutProgrammer(void){
      int i, j, k;
      clearWindow();
      gotoxy(30,5); std::cout<<"RIPTIDE BANK INC.";
      gotoxy(26,11); std::cout<<"PROGRAMMER: Spandan Kar";
      gotoxy(26,13); std::cout<<"EMAIL: spandn2000@gmail.com";
      gotoxy(33,17); std::cout<<" NOTIFICATION ";
      gotoxy(30,21);printf("EXITING SYSTEM... BYE!!");
      exit(0);
 }
//==============================================================================
//               FUNCTION MAIN MENU [ADMINISTRATOR/ BANKER MENU]
//==============================================================================
  void mainMenu(void){
       int i, j;
       system("cls");
       system("color 02");
       do {
           gotoxy(25,8); std::cout<<"MAIN MENU";
           for(i=1;i<=9;i++) { gotoxy(24+i,9); printf("%c",196); }
           gotoxy(23,11); std::cout<<"[1] CUSTOMER ";
           gotoxy(23,13); std::cout<<"[2] ADMINISTRATOR ";
           gotoxy(23,15); std::cout<<"[3] EXIT ";
           gotoxy(32,3); std::cout<<"RIPTIDE BANK INC.";
           gotoxy(24,21); std::cout<<"SELECT FROM [1-3] : ";
           gotoxy(44,21); std::cin>>j;

           switch(j){
                     case 1: bankerLogin();
                     break;
                     case 2: adminLogin();
                     break;
                     default: aboutProgrammer();
                     }
                     clearWindow();
                     }
                     while(j>0 && j<=2);
           }

//==============================================================================
//                       FUNCTION MAIN FUNCTION
//==============================================================================
  int main(){
      SetConsoleTitle("RIPTIDE BANK INC.");
      mainMenu();
      }
//==============================================================================
//                       END OF THE PROGRAM/ PROJECT
//==============================================================================
