#include "ARCcacheHeader.h"

// 使用要求: 可以一次输入多个词组，并将每一个词组放置在缓存中，
int main()
{
    ARCcache container(5, 3);
    DataType input; 
    while(true) {
        getline(cin, input);
        container.put(input);
        if (input == "exit") break;
        container.Show(true);
    }
    return 0;
}



/* TestCode : 
ARCcache container(5, 3);

container.put("hello");
container.put("hella");
container.put("hellb");
container.put("world");
container.put("hellc");
container.put("hellk");
container.put("world");
container.put("world");
container.put("world");
container.put("hellb");
container.put("hellt");
container.Show(true);
container.put("hella");
container.Show(true);
*/