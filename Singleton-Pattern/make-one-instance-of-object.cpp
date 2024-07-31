#include <bits/stdc++.h>
using namespace std;


class Logger{
    public:
    //retrive the single instance of the object
    //created and we will enforce only 1 of these
    //object gets created in our code logic
    static Logger* GetInstance(){
        if(s_instance==nullptr){
            s_instance= new Logger;
        }
        return s_instance;
    }

    void printMessage(){
        cout<<"Acessing the log"<<endl;
        for(auto it:m_messages){
            cout<<it<<endl;
        }
    }

    void addMessage(string s){
        m_messages.push_back(s);
    }

	private: 
	Logger(){
        cout<<"Logger was "<<endl; 
    }

    ~Logger(){
        //prints when we leave the scope of main
        cout<<"Logger was destructed"<<endl;
    }

    static Logger* s_instance; 
    vector<string>m_messages;
}; 

Logger* Logger::s_instance=nullptr;

int main() { 
    // Logger log1; 
    // Logger log2; 
    // Logger log3; 
    // Logger log4; 
    Logger::GetInstance()->printMessage();
    Logger::GetInstance()->addMessage("hi there 1");
    Logger::GetInstance()->addMessage("hi there 2");
    Logger::GetInstance()->addMessage("hi there 3");
    Logger::GetInstance()->addMessage("hi there 4");
    Logger::GetInstance()->printMessage();

    // Logger* pointer_to_logger = Logger::GetInstance();
    // delete(pointer_to_logger); 
    return 0;
}
