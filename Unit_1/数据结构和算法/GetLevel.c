#define Lv1 0
#define Lv2 3
#define Lv3 7
#define Lv4 12
#define Lv5 18
#define Lv6 25
#define Lv7 33
#define Lv8 42
#define Lv9 52
//或者每隔一个素数升一级
int GetLevel(int Exp){
	int Level;
	if (Lv1 <= Exp && Exp<Lv2){
		Level= 1;
	}
	else if (Lv2 <= Exp && Exp<Lv3){
		Level= 2;
	}
    else if (Lv3 <= Exp&& Exp<Lv4){
		Level= 3;
    } 
	else if (Lv4 <= Exp&& Exp<Lv5){
		Level= 4;
	}
	else if (Lv5 <= Exp&& Exp<Lv6){
		Level= 5;
	}
	else if (Lv6 <= Exp&& Exp<Lv7){
		Level= 6;
	}
	else if (Lv7 <= Exp&& Exp<Lv8){
		Level= 7;
	}
	else if (Lv8 <= Exp&& Exp<Lv9){
		Level= 8;
	}
	else if (Lv9 <= Exp){
		Level= 9;
	}


    return Level;
}