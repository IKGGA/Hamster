#include "roboid.h"
//135번 햄스터 필승
int main(int argc, char *argv[]) {
    hamster_create();

	


    while(1){

		if(hamster_left_proximity()<40){
			if(hamster_right_proximity()<40){
				hamster_wheels(80,80); // 앞으로 이동한다.
				wait(20); // 너무 빨리 반복하지 않도록 한다.
			}
			else while(hamster_right_proximity()>25){
				hamster_write(HAMSTER_LEFT_WHEEL, 10);
				hamster_write(HAMSTER_RIGHT_WHEEL, 40);
			}
		}
		
		else {
			if(hamster_right_proximity()<40){
				while(hamster_left_proximity()>25){
					hamster_write(HAMSTER_LEFT_WHEEL, 40);
					hamster_write(HAMSTER_RIGHT_WHEEL, 10);
				}
			}
			else{
				hamster_write(HAMSTER_LEFT_WHEEL, 50);
				hamster_write(HAMSTER_RIGHT_WHEEL, 0);
			}
		}
	}

    return 0;
}
