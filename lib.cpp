include "lib.h"

bool conversione (char &a) {
    bool result;
    if ((a >= 65 and a <= 90) or (a >= 97 and a <= 122)) {
        if(a>=65 and a<=90){
            a=a+32;
            return a;
        }else if(a>=97 and a<= 122){
            a=a-32;
            return a;
        }return result;
    } else {
        return result;
    }
}
