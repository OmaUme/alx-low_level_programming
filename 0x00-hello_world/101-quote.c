#include <unistd.h>
/**
 *main is the entry point of 
 *this program and performs the main task of the program.
 *const char displays the message.
return: 1 on success, zero on failure
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59; 
write(2, message, len);
return 1;
}
