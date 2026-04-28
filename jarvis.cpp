#include <iostream>
#include <string>
using namespace std;

int main()
{
    string command;
    string bot = "Jarvis";
    system("cls");
    cout << "##############################" << endl;
    cout << "#                            #" << endl;
    cout << "#    Jarvis Terminal         #" << endl;
    cout << "#                            #" << endl;
    cout << "##############################" << endl;
    cout << "Hi, I'm " << bot << ". How can I help you?" << endl;
    do
    {
        cout << "<" << bot << ">";
        cin >> command;

        if (command == "exit")
        {
            cout << "Signing off... Goodbye!" << endl;
        }
        else if (command == "hi" || command == "hello")
        {
            cout << "Hello there.\nWhat can I help you with?" << endl;
        }
        else if (command == "help")
        {
            cout << "Available commands:" << endl;
            cout << "  hi/hello  -> Jarvis greets you" << endl;
            cout << "  time      -> shows current time" << endl;
            cout << "  date      -> shows current date" << endl;
            cout << "  cls/clear -> clears screen" << endl;
            cout << "  about     -> about Jarvis" << endl;
            cout << "  change    -> change bot(jarvis) name" << endl;
            cout << "  game      -> for game menu" << endl;
            cout << "  echo      -> Displays messages" << endl;
            cout << "  exit      -> quit Jarvis" << endl;
        }
        else if (command == "clear" || command == "cls")
        {
            system("cls");
        }
        else if (command == "about")
        {
            cout << "Jarvis Terminal v1.0" << endl;
            cout << "Created by: Yashwant Kumar aka Happy" << endl;
            cout << "Language: C++" << endl;
        }
        else if (command == "date")
        {
            system("date /t");
        }
        else if (command == "time")
        {
            system("time /t");
        }
        else if (command == "change")
        {
            string oldName = bot;
            cout << "Enter new bot name: ";
            cin >> bot;
            cout << "Bot name changed from <" << oldName << "> to <" << bot << "> successfully!" << endl;
        }
        else if (command == "game")
        {
            // working on it. will add soon.
            cout << "pending...\nType 'help' to see available commands" << endl;
            cout << "Game menu coming soon! Stay tuned." << endl;
        }
        else if (command == "echo")
        {
            string message;
            getline(cin, message);

            if (message.empty() || message == " ")
            {
                cout << "Usage: echo <message>" << endl;
            }
            else
            {
                cout << message << endl;
            }
        }
        else
        {
            cout << "Jarvis: '" << command << "' command not found!\nType 'help' to see available commands" << endl;
        }
    } while (command != "exit");

    return 0;
}