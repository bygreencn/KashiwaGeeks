#include <KashiwaGeeks.h>

void start(void)
{
    // Baudrate is 57600, not 9600 any more

    ConsoleBegin(57600);
  //DisableConsole();
  //DisableDebug();
}

int cnt = 0;

void func1()
{
  ConsolePrint("Count=%d\n", cnt++);
  DebugPrint(F("Debug Count=%d\n"), cnt++);
  delay(1000);
}


//===============================
//            Execution interval
//     TASK( function, initial offset, interval by minute )
//===============================
TASK_LIST = {
TASK(func1, 0, 10),
  //TASK(func2, 5, 20),
  //TASK(func3, 8, 30),
  END_OF_TASK_LIST
};



