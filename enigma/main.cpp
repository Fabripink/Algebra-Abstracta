#include <iostream>
#include <enigma.h>

using namespace std;

int main(){

    string msn="IRAOMPCZDEEGHTVOXKHQERIMNWSLFBPHHQSCRONIOFUKUOSAABXYTVUXGNKYOQAIVTWBBCNTVIBOCBHSTILOSXBYSDFOUROKFSUHWOY";
    enigma receptor(1,2,3,"CAM");
    string ci=receptor.cifrado(msn);
    string dc=receptor.descifrado(ci);
    return 0;
}
