#include <iostream>
#include <cstring>
#include <cmath>
#include <windows.h>
#include <fstream>
using namespace std;

class customer
{
    protected:
    string name;
    string p_number;
    string mail;
public:
    void input()
    {
    cout << "\n\n HELLO! ENTER YOUR NAME : ";
    getline(cin, name);
    cout << "\n\n ENTER YOUR PHONE NUMBER : ";
    getline(cin,p_number);
    cout << "\n\n ENTER YOUR E-MAIL ID : ";
    getline(cin,mail);
    cout << "\n\n";
    }
};

class restaurant
{

    public:
    void about_us()
{
    cout << "   _    _                 _   \n";
    cout << "  / \\  | |_   __  _   | | \n";
    cout << " / _ \\ | '_ \\ / _ \\| | | | __|\n";
    cout << "/ _ \\| |) | () | || | | \n";
    cout << "//  _\\\\./ \\_/ \\,|\\__|\n";
    cout << "| | | |_                     \n";
    cout << "| | | / __|                    \n";
    cout << "| || \\_ \\                    \n";
    cout << " \\_/|_/                    \n";


    cout << "\n\n\t\t SHIBU DHABA WAS ESTABLISHED IN 1989.";
    cout << "\n\n\t\t WE SPECIALIZE IN SERVING INDIAN DELICACIES.";
    cout << "\n\n\t\t OUR AIM IS TO PROVIDE THE BEST QUALITY FOOD AT AFFORDABLE PRICES.";
    cout << "\n\n\t\t THANK YOU!/n";
}

void contact()
{

    cout << "\n\n\n\t\t      SHIBU DHABA";
    cout << "\n\n\t\t CONTACT US : 0191-2454532";
    cout << "\n\n\t\t FOR ANY COMPLAINTS AND COMPLIMENTS";
    cout << "\n\n\t\t EMAIL US AT : shibudhaba@gmail.com";
    cout << "\n\n\t\t ADDRESS : 95, ROAD 1, JAMMU";
    cout << "\n\n\t\t THANK YOU!";

}

void feedback()
{
    cout << " ___             _ _                _    \n";
    cout << "|  _|_  __  _| | |_   _ _  _| | _\n";
    cout << "| |_ / _ \\/ _ \\/ ` | ' \\ / ` |/ _| |/ /\n";
    cout << "|  |  _/  _/ (| | |) | (| | (__|   < \n";
    cout << "||\\_|\\_|\\,|./ \\,|\\_||\\\\\n";
    cout << "|  _|_  _ _ _ _ __                   \n";
    cout << "| |_ / _ \\| '_| ' ` _ \\                  \n";
    cout << "|  | () | |  | | | | | |                 \n";
    cout << "||  \\_/||  || || |_|                 \n";


   cout << "\n\tRATE YOUR EXPERIENCE FROM 1* TO 5*\n\n";
    cout << "\tRATE OUR FOOD - ";

    int f;
    cin >> f;

    cout << "\tRATE OUR CLEANLINESS - ";
    int c;
    cin >> c;

    cout << "\tRATE OUR STAFF EXPERIENCE - ";
    int s;
    cin >> s;

    char ch;
    char feed[100];

    cout << "\tWANT TO GIVE SOME ADDITIONAL REVIEW : Y/N\n\t";
    cin >> ch;

    cin.ignore();  // Clear the input buffer

    if (ch == 'Y' || ch == 'y') {
        cout << "\n\tENTER PERSONAL FEEDBACK\n\n\t";
        cin.getline(feed, 100);
    }

    cout << "\nTHANK YOU FOR YOUR FEEDBACK!!!\n\n";

    cout << "\nFOOD EXPERIENCE - " << f << " stars";
    cout << "\nCLEANLINESS - " << c << " stars";
    cout << "\nSTAFF EXPERIENCE - " << s << " stars";
    if (ch == 'Y' || ch == 'y') {
        cout << "\nPERSONAL FEEDBACK\n";
        cout << feed << endl;
    }
}


void exit_it()
{
    cout << " __ _                 _          __          \n";
    cout << "|_   | |_   _ _ _ _ | | __  |  _|_  _ __ \n";
    cout << "  | | | '_ \\ / ` | ' \\| |/ / _| | | / _ \\| '__|\n";
    cout << "  | | | | | | (| | | | |   <\\_ \\ |  | () | |   \n";
    cout << "_|| ||||\\,|||||\\\\_/ ||  \\_/|_|   \n";
    cout << "\\ \\   / ()_() |()_ _   _ _                 \n";
    cout << " \\ \\ / /| / _| | _| | '_ \\ / _` |                \n";
    cout << "  \\ V / | \\_ \\ | || | | | | (_| |                \n";
    cout << "   \\/  ||_/|\\||| ||\\__, |                \n";
    cout << "                             |_/                 \n";

    cout<<"\nHere is the order summary\n";
    ifstream outfile("order_details.txt");
    char c;
    c=outfile.get();
    while(!outfile.eof())
    {
        cout<<c;
        c=outfile.get();

    }

    cout << "\n\n\t\t HAVE A GREAT DAY!\n";

    exit(0);

}

};
class menu{

public:
    int id;
    string name;
    int price;

    menu()
    {

    }
    menu(int i,string s,int d)
    {
        id=i;
        name=s;
        price=d;

    }


};
class menucard:public menu{
public:



    menu food[99];


    void input()
     {
    food[0] = {1, "Veg Pakoda", 115};
    food[1] = {2, "Onion Pakoda", 115};
    food[2] = {3, "Paneer Pakoda", 155};
    food[3] = {4, "Chicken Pakoda", 200};
    food[4] = {5, "Chicken Fry", 240};
    food[5] = {6, "Fish Fry", 110};
    food[6] = {7, "Kaju Fry", 200};
    food[7] = {8, "Peanut Masala", 110};

    // Soups
    food[8] = {9, "Tomato Soup", 105};
    food[9] = {10, "Veg Sweet Corn Soup", 105};
    food[10] = {11, "Veg Hot and Sour Soup", 105};
    food[11] = {12, "Veg Manchow Soup", 115};
    food[12] = {13, "Chicken Manchow Soup", 170};
    food[13] = {14, "Chicken Sour Soup", 170};
    food[14] = {15, "Chicken Noodles Soup", 160};

    // Tandoori
    food[15] = {16, "Paneer Tikka", 230};
    food[16] = {17, "Chicken Tikka", 265};
    food[17] = {18, "Chicken Leg Kawab", 260};
    food[18] = {19, "Tandoori Chicken", 430};
    food[19] = {20, "Chicken Malai Tikka", 265};
    food[20] = {21, "Chicken Kebab", 265};

    // Indian Veg
    food[21] = {22, "Mix Vegetable", 130};
    food[22] = {23, "Dal Makhani", 130};
    food[23] = {24, "Dal Tadka", 130};
    food[24] = {25, "Dal Fry", 120};
    food[25] = {26, "Aloo Dum", 110};
    food[26] = {27, "Aloo Jeera", 95};
    food[27] = {28, "Aloo Bhujiya", 110};

    // Paneer
    food[28] = {29, "Paneer Korma", 230};
    food[29] = {30, "Paneer Kadhai", 210};
    food[30] = {31, "Paneer Frazi", 200};
    food[31] = {32, "Paneer Butter", 210};
    food[32] = {33, "Paneer Capcicum", 230};
    food[33] = {34, "Shahi Paneer", 240};
    food[34] = {35, "Matar Paneer", 200};
    food[35] = {36, "Paneer Do Pyaza", 220};
    food[36] = {37, "Paneer Masala", 270};
    food[37] = {38, "Paneer Tikka", 285};
    food[38] = {39, "Malai Kofta", 240};
    food[39] = {40, "Paneer Masala", 210};
    food[40] = {41, "Paneer Bharta", 210};

    // Mushroom
    food[41] = {42, "Mushroom Masala", 210};
    food[42] = {43, "Mushroom Corn", 220};
    food[43] = {44, "Mushroom Paneer", 230};
    food[44] = {45, "Mushroom Kadhai", 210};
    food[45] = {46, "Mushroom Capcicum", 230};
    food[46] = {47, "Mushroom Green Peas", 210};
    food[47] = {48, "Mushroom Butter Masala", 210};

    // Biriyani
    food[48] = {49, "Chicken Dum Biriyani", 230};
    food[49] = {50, "Mutton Dum Biriyani", 300};
    food[50] = {51, "Veg Dum Biriyani", 220};
    food[51] = {52, "Egg Biriyani", 190};
    food[52] = {53, "Hyderabadi Biriyani", 250};

    // Bread
    food[53] = {54, "Tandoori Roti", 25};
    food[54] = {55, "Laccha Parantha", 60};
    food[55] = {56, "Naan", 35};
    food[56] = {57, "Kulcha", 70};

    // Ice Cream
    food[57] = {58, "Choclate Scoop", 40};
    food[58] = {59, "ButterScotch Scoop", 40};
    food[59] = {60, "Vanilla Scoop", 40};
    food[60] = {61, "Strawberry Scoop", 40};
    food[61] = {62, "Kesar Pista", 40};

    // Soft Drinks
    food[62] = {63, "Masala Soda", 40};
    food[63] = {64, "Coca Cola", 40};
    food[64] = {65, "Sprite", 40};
    food[65] = {66, "Pepsi", 40};

    // Special Chinese
    food[66] = {67, "Chilli Potato", 70};
    food[67] = {68, "Honey Chilli Potato", 80};
    food[68] = {69, "Chili Mushroom", 110};
    food[69] = {70, "Chili Paneer", 135};
    food[70] = {71, "Veg Manchurian", 180};
    food[71] = {72, "Chicken Manchurian", 200};
    food[72] = {73, "Chilli Chicken", 200};

    // Momos
    food[73] = {74, "Veg Momos", 30};
    food[74] = {75, "Fried Veg Momos", 40};
    food[75] = {76, "Chicken Momos", 45};
    food[76] = {77, "Fried Chicken Momos", 50};
    food[77] = {78, "Special Momos", 60};
    food[78] = {79, "Chicken Chilly Momos", 90};

    // NOODLES
    food[79] = {80, "Veg Noodles", 60};
    food[80] = {81, "Mix Veg Noodles", 60};
    food[81] = {82, "Veg Pan FriedNoodles", 100};
    food[82] = {83, "Chicken Pan FriedNoodles", 130};
    food[83] = {84, "Mix Chicken Noodles", 90};
    food[84] = {85, "Egg Noodles", 70};
    food[85] = {86, "Chicken Noodles", 90};
    food[86] = {87, "Garlic Chilli Noodles", 100};

    // Roles
    food[87] = {88, "Egg Roll", 30};
    food[88] = {89, "Spring Roll", 50};
    food[89] = {90, "Chicken Spring Roll", 80};

    // Indian
    food[90] = {91, "Samosa", 10};
    food[91] = {92, "Bread Pakoda", 10};
    food[92] = {93, "Puri Sabji", 20};
    food[93] = {94, "Chole Bhature", 30};
    food[94] = {95, "Chole Rice", 30};

    // Rice
    food[95] = {96, "Veg Fried Rice", 50};
    food[96] = {97, "Chilli Garlic Fried Rice", 90};
    food[97] = {98, "Chicken Fried Rice", 110};
    food[98] = {99, "Egg Fried Rice", 100};
    food[99] = {100, "Mixed Fried Rice", 120};

    }

    void displaymenu()
    {
        cout << "\n\n\t<<<<<MENU>>>>>\n";

        // Snacks
        cout << "\n\tSNACKS\n";
        for(int i=0;i<=7;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Soups
        cout << "\tSOUPS\n";
        for(int i=8;i<15;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Tandoori
        cout << "\n\tTANDOORI\n";
        for(int i=15;i<21;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Indian Veg
        cout << "\n\tINDIAN VEG\n";
        for(int i=21;i<28;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Paneer
        cout << "\n\tPANEER\n";
        for(int i=28;i<41;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Mushroom
        cout << "\n\tMUSHROOM\n";
        for(int i=41;i<47;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Biriyani
        cout << "\n\tBIRIYANI\n";
        for(int i=48;i<53;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Bread
        cout << "\n\tBREAD\n";
        for(int i=53;i<57;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Ice Cream
        cout << "\n\tICE CREAM\n";
        for(int i=57;i<62;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Soft Drinks
        cout << "\n\tSOFT DRINKS\n";
        for(int i=62;i<66;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Special Chinese
        cout << "\n\tSPECIAL CHINESE\n";
        for(int i=66;i<73;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Momos
        cout << "\n\tMOMOS\n";
        for(int i=73;i<79;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Noodles
        cout << "\n\tNOODLES\n";
        for(int i=79;i<87;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Roles
        cout << "\n\tROLES\n";
        for(int i=87;i<90;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Indian
        cout << "\n\tSPECIAL INDIAN\n";
        for(int i=90;i<95;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

        // Rice
        cout << "\n\tRICE\n";
        for(int i=95;i<=99;i++) {
            cout << food[i].id << "\t\t" << food[i].name << "\t\t\t\t\t" << food[i].price << endl;
        }

    }

    void ordering()
{
    int n;
    int total = 0;
    int serial;
    cout << "\nPLEASE ENTER THE NUMBER OF ITEMS YOU WANT TO ORDER: ";
    cin >> n;

    int order[n];
    int num[n];

    if (n <= 0)
    {
        cout << "Invalid number of items.\n";
        return;
    }
    else
    {

        ofstream inFile("order_details.txt",ios::app);

        for (int i = 0; i < n; i++)
        {
            cout << "\n\nPLEASE ENTER THE SERIAL NUMBER (S#) OF YOUR ITEM NUMBER " << i + 1 << ":\t";
            cin >> serial;
            if (serial <= 0 || serial > 99)
            {
                cout << "Invalid serial number. Please try again.\n";
                return;
            }
            order[i] = food[serial - 1].price;
            num[i] = serial - 1;
        }

        for (int i = 0; i < n; i++)
        {
            total += order[i];
        }

        float tax = 0.28 * total;
        tax = total + tax;

        // Write order details to file
        inFile << "------------------BILL------------------\n";
        inFile << "S.No\tName\t\tPrice\n";

        for (int i = 0; i < n; i++)
        {
            inFile << i + 1 << "\t" << food[num[i]].name << "\t\t" << food[num[i]].price << endl;
        }

        inFile << "\n YOUR FOOD BILL = " << total << " rs";
        inFile << "\n 18% GST = " << 0.18 * total << " rs";
        inFile << "\n 10% SERVICE CHARGE = " << 0.10 * total << " rs";
        inFile << "\n\nYOUR TOTAL AMOUNT = " << tax << " rs";
        inFile << "\n\n-------Enjoy your meal! :)--------------\n\n\n";

        inFile.close(); // Close the file

        cout << "\n\n<<<<<YOUR ORDER DETAILS HAVE BEEN SAVED TO order_details.txt FILE>>>>>\n\n";
    }
};




};
int main()
{
    ofstream utFile("order_details.txt",ios::trunc);
    utFile.close();


    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,4);

    string ascii_art =
     "\t\t\t__           _                              _               \n"
     "\t\t\t|  _ \\ _  _| |_ _ _ _   _ _ _ _ _ _ _ | |_             \n"
     "\t\t\t| |) / _ \\/ _| _/ _` | | | | '/ _` | ' \\| __|            \n"
     "\t\t\t|  _ <  _/\\_ \\ || (| | || | | | (| | | | | |             \n"
     "\t\t\t|| \\\\_||_/\\_\\,|\\_,||  \\,|| ||\\__|       _    \n"
     "\t\t\t|  \\/  | _ _ _ _   _ _  _ _  _ _ _ __   _ _ _ | |  \n"
     "\t\t\t| |\\/| |/ ` | ' \\ / ` |/ _` |/ _ \\ ' ` _ \\ / _ \\ '_ \\| __| \n"
     "\t\t\t| |  | | (| | | | | (| | (| |  _/ | | | | |  _/ | | | |  \n"
     "\t\t\t||  ||\\_,|| ||\\_,|\\_, |\\_|| || ||\\_|| ||\\__| \n"
     "\t\t\t                           |_/                               \n"
     "\t\t\t/ _| _   _ _| |_ _ _ _ __  \n"
     "\t\t\t\\_ \\| | | / _| _/ _ \\ '_ ` _ \\ \n"
     "\t\t\t _) | || \\_ \\ ||  __/ | | | | |\n"
     "\t\t\t|_/ \\, |_/\\\\_|| || ||\n"
     "\t\t\t       |_/                        \n";

    for (int i = 0; i < ascii_art.size(); ++i) {
        cout << ascii_art[i] << flush;
        // Sleep for 10 milliseconds (10000 microseconds)
        Sleep(0.999999999999999999); // Adjust the delay as needed
        //usleep(10000);  // Use this for Unix-like systems
    }
   Sleep(1000);
   SetConsoleTextAttribute(h,6);

    // WELCOME TO SHIBU DHABA
    cout << "\t\t\t      .--..--..--..--..--..--.\n";
    cout << "\t\t\t    .' \\  (`._   (_)     _   \\\n";
    cout << "\t\t\t  .'    |  '.)         ()  |\n";
    cout << "\t\t\t  \\ _.')\\      .----..---.   /\n";
    cout << "\t\t\t  |(_.'  |    /    .-\\-.  \\  |\n";
    cout << "\t\t\t  \\     0|    |   ( O| O) | o|\n";
    cout << "\t\t\t   |  _  |  .--._.'..-.  |\n";
    cout << "\t\t\t   \\ (_) | o         -` .-`  |\n";
    cout << "\t\t\t    |    \\   |`-._ _ _ _ _\\ /\n";
    cout << "\t\t\t    \\    |   |  `. ||||   |\n";
    cout << "\t\t\t    | o  |    \\_      \\     |     -.   .-.\n";
    cout << "\t\t\t    |.-.  \\     --..-'   O |     `.-' .'\n";
    cout << "\t\t\t  .'  .' |     `-.-'      /-._   ' .-'\n";
    cout << "\t\t\t.' -. '.|='=.='=.='=.='=|./ `-'.\n";
    cout << "\t\t\t`-._  `.  |/\\_|    `-.\n";
    cout << "\t\t\t   .'   ).| '=' '='\\/ '=' |\n";
    cout << "\t\t\t   ._.  '---------------'\n";
    cout << "\t\t\t           //\\   //\\\n";
    cout << "\t\t\t             ||       ||\n";
    cout << "\t\t\t             ||.-.   ||.-.\n";
    cout << "\t\t\t            (.--) (.--__)\n\n";
    Sleep(1000);

 SetConsoleTextAttribute(h,9);
    cout << "\t\t\t__        __   _                                           \n";
    cout << "\t\t\t\\ \\      / /_| | __ _  _ _ __   _                  \n";
    cout << "\t\t\t \\ \\ /\\ / / _ \\ |/ _/ _ \\| ' ` _ \\ / _ \\                 \n";
    cout << "\t\t\t  \\ V  V /  _/ | (| () | | | | | |  _/                 \n";
    cout << "\t\t\t _\\/\\/ \\_||\\_\\_/|| || ||\\__|                 \n";
    cout << "\t\t\t|_   |_                                                   \n";
    cout << "\t\t\t  | |/ _ \\                                                  \n";
    cout << "\t\t\t  | | (_) |                                                 \n";
    cout << "\t\t\t ||\\_/   _ _             __  _           _            \n";
    cout << "\t\t\t/ _|| |_ () |_  _   _  |  _ \\| |_   _ _| |_   __ _  \n";
    cout << "\t\t\t\\_ \\| '_ \\| | '_ \\| | | | | | | | '_ \\ / ` | ' \\ / _` | \n";
    cout << "\t\t\t _) | | | | | |) | || | | || | | | | (| | |) | (| | \n";
    cout << "\t\t\t|_/|| |||./ \\,| |_/|| ||\\,|./ \\,| \n";

        Sleep(1000);



        customer c;
        c.input();
        restaurant r;
        menu  m;

        menucard mm;

        mm.input();
        int choice;
end:
    cout<<endl;
     SetConsoleTextAttribute(h,10);
    cout << "\n1.DISPLAY MENU";
    cout << "\n2.ORDERING";
    cout << "\n3.CONTACT";
    cout << "\n4.ABOUT US";
    cout << "\n5.FEEDBACK FORM";
    cout << "\n6.EXIT";

    cout << "\nCHOOSE ANY OPTION YOU WANT : ";
    cin >> choice;



    switch (choice)  {
        case 1:

            mm.displaymenu();
                goto end;
            break;

        case 2:
            mm.ordering();
            goto end;
            break;


        case 3:
            SetConsoleTextAttribute(h,12);
            r.contact();
             goto end;
            break;


        case 4:
            SetConsoleTextAttribute(h,3);
            r.about_us();
             goto end;
            break;


        case 5:
            SetConsoleTextAttribute(h,5);
            r.feedback();
             goto end;
            break;


        case 6:
             SetConsoleTextAttribute(h,14);
             r.exit_it();

            break;


        default:

            cout << "\nINVALID! Please choose correct option.";
    }


    return 0;
}