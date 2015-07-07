#define Lv1 0
#define Lv2 3
#define Lv3 7
#define Lv4 12
#define Lv5 18
#define Lv6 25
#define Lv7 33
#define Lv8 42
#define Lv9 52

int GetLevel(int Exp){
	int Level;
	if (Exp>=Lv1 && Exp<Lv2){
		Level= 1;
	}
	else if (Exp>=Lv2 && Exp<Lv3){
		Level= 2;
	}
    else if (Exp>=Lv3 && Exp<Lv4){
		Level= 3;
    } 
	else if (Exp>=Lv4 && Exp<Lv5){
		Level= 4;
	}
	else if (Exp>=Lv5 && Exp<Lv6){
		Level= 5;
	}
	else if (Exp>=Lv6 && Exp<Lv7){
		Level= 6;
	}
	else if (Exp>=Lv7 && Exp<Lv8){
		Level= 7;
	}
	else if (Exp>=Lv8 && Exp<Lv9){
		Level= 8;
	}
	else if (Exp>=Lv9){
		Level= 9;
	}


    return Level;
}