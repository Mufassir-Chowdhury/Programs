#include<iostream>
using namespace std;

class Log{
public:
    enum Level{
        LevelError, LevelWarning, LevelInfo
    };
private:
    Level m_LogLevel = LevelInfo;
public:
    void Setlevel(Level level){
        m_LogLevel = level;
    }
    void Error(const char *message){
        if (m_LogLevel >= LevelError)
            cout << "[ERROR]: " << message << endl;
    }
    void Warn(const char *message){
        if (m_LogLevel >= LevelWarning)
            cout << "[WARNING]: " << message << endl;
    }
    void Info(const char *message){
        if (m_LogLevel >= LevelInfo)
            cout << "[INFO]: " << message << endl;
    }
};

int main(){
    Log log;
    log.Setlevel(log.LevelWarning);
    log.Error("Hello!");
    log.Info("HELLO!");
    log.Warn("Hello!"); 
    cin.get();
    return 0;
}