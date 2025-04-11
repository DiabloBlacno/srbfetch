#include <stdio.h>
#include "./vars.h"

#define VERSION "1.3"
#define RESET "\033[0m"
#define BLACK "\033[30m" 
#define YELLOW "\033[33m" 
#define WHITE "\033[37m"  
#define BLUE "\x1b[34m" 
#define RED "\x1b[31m"
#define BGWH "\033[47m" // White backgroud
#define BGRD "\x1b[41m" // Red background
#define BGBL "\x1b[44m" // Blue Background
#define SEPARATOR "= "
//#define OSNAME "XIU" //XNU MENTIONED // X Is UNIX


void srb_linux(void) {
        printf(
                BGRD RED   "#######################" RESET RED " S" RESET BLUE "R" RESET WHITE "B" RESET "Fetch " VERSION "\n"
                BGRD RED   "#######################" RESET  " OS " SEPARATOR "SRBOS\n"
                BGRD RED   "#######################" RESET  " Kernel " SEPARATOR get_kernel " " get_kernel_ver "\n"
                BGBL BLUE  "#######################" RESET  " Shell " SEPARATOR get_shell "\n"
                BGBL BLUE  "#######################" RESET  " Hostname " SEPARATOR get_hostname "\n"
                BGBL BLUE  "#######################" RESET "\n"
                BGWH WHITE "#######################" RESET "\n"
                BGWH WHITE "#######################" RESET "\n"
                BGWH WHITE "#######################" RESET "\n" 
        );      
                 }
int main() {
	srb_linux();
}
