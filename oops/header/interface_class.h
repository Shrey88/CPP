#ifndef INTERFACE_CLASS_H_
#define INTERFACE_CLASS_H_

#include <iostream>
#include <cmath>

using namespace std;

class IErrorLog{

    public:
        virtual bool openLog(const char *filename) = 0;
        virtual bool closeLog() = 0;

        virtual bool writeError(const char *errorMessage) = 0;

        virtual ~IErrorLog() {}; // make a virtual destructor in case we delete an IErrorLog pointer
                                // so the proper derived destructor is called
};


/*
 *  Any class inheriting from IErrorLog must provide implementations for all three functions to be instantiated
 *  You could derive a class name FileErrorLog, whre openLog() opens a file on disk, 
 *  closeLog() closes the file, and writeError() writes the message to the file.
 * 
 *  You could derive another class called ScreenErrorLog, where openLog() and closeLog() do nothing, and 
 *  writeError() prints the message in a pop-up message box on the screen.
 */
class FileErrorLog: public IErrorLog{

    public:
    virtual bool openLog(const char* filename){
        cout << "Opening File : " << filename << endl;
        return true;
    };

    virtual bool closeLog(){
        cout << "Closing File" << endl;
        return true;
    };

    virtual bool writeError(const char* errorMessage){
        cout << "Error : " << errorMessage << endl;
        return true;
    };

    virtual ~FileErrorLog() override{
        cout << "File Error Log Destructor" << endl;
    };
};

class ScreenErrorLog: public IErrorLog{

    public:
    virtual bool openLog(const char* filename){
        cout << "OpenLog : Does nothing"<< endl;
        return true;
    };

    virtual bool closeLog(){
        cout << "closeLog : Does nothing" << endl;
        return true;
    };

    virtual bool writeError(const char* errorMessage){
        cout << "Display Pop-up window : " << errorMessage << endl;
        return true;
    };

    virtual ~ScreenErrorLog() override{
        cout << "Screen Error Log Destructor" << endl;
    };
};

double mySqrt(double value , IErrorLog &log){
    if (value < 0.0){
        
        log.openLog("Test.txt");
        log.writeError("Tried to take square root of value less then 0");
        log.closeLog();

        return 0.0;
    }
    else{
        return std::sqrt(value);
    }
}
#endif