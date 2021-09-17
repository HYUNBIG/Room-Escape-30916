#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();

void prison(); //감옥 
void desk();  //책상 
void calendar(); //달력
void water(); //물 
void drawer(); //서랍 
void topdrawer(); //위 서랍 
void middledrawer(); //가운데 서랍 
void bottomdrawer(); //아래 서랍 
void topdrawer_password();

void basement(); //지하실 
void incinerationplant(); // 소각장 
void armory(); // 무기고
void desk1(); // 지하실 책상 
void armory_password();
void armorymoon(); //무기고  
void stairs(); //계단  
void stairs_password();
void incinerationplantfw();

int isFindKey = FALSE; //열쇠 획득 
int isOpenprison = FALSE; // 감옥을 연다 
int main() {
	int menu;
	
	while(1) {
		printf("ROOM ESCAPE \n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
					
		switch(menu) {
			case 1:
				intro();
				prison();
				break;
			case 0:
				return 0;
			default:
				printf("입력 오류\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("눈을 떠보니 감옥 안에 있는 것 같다.\n");
	Sleep(1000);
	printf("야근을 끝내고 퇴근 중이었는데 그뒤가 잘 기억나지 않는다.\n");
	Sleep(1000);
	printf("요즘 주변에서 납치사건이 3차례나 일어나 조심하라고 했었는데....\n");
	Sleep(1000);
		printf("설마 나도 납치를 당한건가\n");
	Sleep(1000);
	printf("젠장!!! \n");
	Sleep(1000);
	printf("그래도 지금 범인들이 나가있는거 같다\n");
	Sleep(1000);
	printf("범인들이 오기전에 이곳을 탈출하자\n");
	Sleep(1000);
	printf("아니 무조건 탈출해야한다. 살기위해서\n");
	Sleep(1000);
	system("pause");
}

void prison() {
	int menu; 
	
	while(1) {
	system("cls");
	printf("[감옥] \n\n");
	printf("1. 책상	2. 물	3. 달력\n");
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				desk();
				break;
			case 2:
				printf("물이다."); 
				break;
			case 3:
				printf("8월달 달력이다. 8월30일에 체크가 되어있다.");
				break;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				}
				system("pause");	
		

		
	}
} 

void desk(){ // 1. 책상 
 int menu;
 
  while(1) {
		system("cls");
		printf("[감옥]-[책상]\n\n");
		printf("책상 옆에 3층의 서랍이 있다.\n\n");
		printf("1. 제일 위 서랍을  살펴본다\n");
		printf("2. 중간  서랍을  살펴본다\n");
		printf("3. 제일 아래 서랍을  살펴본다\n");
		printf("0. 돌아가기\n");	
	
	printf(">> ");
		scanf("%d", &menu);
		
			switch(menu) {
			case 1:
				 topdrawer(); 
				break;
			case 2:
				printf("안에 다이어리가 있다.\n");
				printf("다이어리에도 8월달에 뭔가가 써져있다.\n");
				printf("8월 14일에는 786.\n");
				printf("8월 9과 16일에는 883.\n");
				printf("8월 9과 17일에는 933.\n");
			printf("8월 18일에는 848.\n");
			printf("8월 19과 26일에는 374.\n");
			printf("8월 13과 20일에는 728.\n");	
				printf("힌트 같은데 이게 무슨 의미일까?");
				break;
			case 3:
				printf("사진이 있다.\n");
				printf("1Q  2ABC    3DEF\n");
				printf("4GHI	5JKL	6MNO\n");
				printf("7PRS	8TUV	9WXY\n");
				printf(" *  	 0Z	     #\n");
				break;
			case 0:
				return; 
			default:
				printf("\n# ERROR # 입력값 오류\n");
			}
				system("pause");		
	}	
}

	
void topdrawer(){

int menu;
	while(1) {
		system("cls");
		printf("잠겨있다.\n");
		printf("안에 이 감옥을 나갈 수 있는 열쇠가 있는거 같다.\n\n");
		

		printf("1. 비밀번호를 입력한다\n");
		printf("2. 감옥 탈출\n"); 
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
			 topdrawer_password();		
				break;
			case 2:
				if( isFindKey){
				isOpenprison = TRUE;
			basement();
				}
				 
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void topdrawer_password() {

	char pass[4] = "666", temp[4];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf(" 열쇠다.\n\n");
		isFindKey = TRUE;
		return topdrawer();
		
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}

void basement() {
		int menu;
	
	while(1) {
		system("cls");	
		printf("[지하실]\n\n");
		printf("감옥을 나왔다.\n\n");
		printf("1. 소각장	2. 책상	3. 무기고	4. 계단 \n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:		
				incinerationplant();
				break;
			case 2:
				desk1();
				break;
			case 3:
				armorymoon(); 
			case 4:
				stairs();
				break;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}
	
}

void incinerationplant(){
	int menu;
 
  while(1) {
		system("cls");
		printf("[지하실]-[소각장]\n\n");
		printf("소각장에는 사람 1명 들어갈 크기에 사람도 태울수 있을 만큼은 화력을 가진 불이 계속 타고 있었다. .\n\n");
		printf("그 앞에는 종이가 떨어져 있다");
		printf("1. 종이를 살펴본다\n");
		printf("0. 돌아가기\n");	
	
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				 printf(" 종이에는 ambition라고 써져있다.\n"); 
				break;
			case 119:
				incinerationplantfw();
				break;
			case 0:
				return basement(); 
			default:
				printf("\n# ERROR # 입력값 오류\n");
			}
				system("pause");		
	}	
}
void incinerationplantfw(){
	int menu;
 
  while(1) {
		system("cls");
		printf("[지하실]-[소각장]\n\n");
		printf("감옥에 있는 물을 이용해 불을 끌수 있을거 같다.\n\n");
		printf("1. 물을 이용하여 불을 끈다.\n");
		printf("0. 돌아가기\n");	
	
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				 printf(" 불이 꺼지고 안에MASCAN이라고 써져있다. \n "); 
				 printf(" 이게 무슨 뜻일까? \n "); 
				break;
			case 0:
				return basement(); 
			default:
				printf("\n# ERROR # 입력값 오류\n");
			}
				system("pause");		
	}	
}
void 	desk1(){	
	int menu;	
	
	while(1) {
		system("cls");	
		printf("[지하실]\n\n");
		printf("방 안에서 할 수 있는 것들을 찾아보자.\n\n");
		printf("1. 액자    2. 액자    3. 기타\n");
		printf("4. 명함    5. 지갑    6. 신문\n");
		printf("0. 돌아가기\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n남자 6명이 공사자에서 찍은 사진이다.\n");
				printf("아마 날 가둔 범인들에 얼굴들인거 같다.\n");
				break;
			case 2:
				printf("각각 4개의 다른 그랜저들의 사진들이 있다. \n"); 
				printf("먼저 검은색 그랜저에 339로 8315이라는 번호판이 찍혀있고\n");
				printf("그다음엔 흰색 그랜저에 57주 2894이라는 번호판이 찍혀있고\n");
				printf("다음엔  노란색 그랜저에 123가 4568이라는 번호판이 찍혀있고 \n");
				printf("마지막으로  파란색 그랜저에 140라 7971이라는 번호판이 찍혀있다.\n");
				printf("잠깐 이 파란색 그랜저 내차잖아.\n");
				printf("그럼 이 나머지 차들도 다른 피해자들의 차들인가?.\n");
				printf("범인들은 왜 그랜저를 타는 사람들만 노린거지?.\n");
				printf("그리고 왜 번호판이 나오게 찍은거지?.\n");
				printf("번호판에 무기고를 열 수 있는 힌트가 암호가 있는건가?.\n");
				break;
			case 3:
				printf("피해자중 1명의 기타인거 같다");
				break;
			case 4:
				printf("피해자중 1명의 명함인거 같다"); 
				break;
			case 5:
				printf("피해자중 1명의 지갑인거 같다");
				break;
			case 6:
				printf("신문에는 요즘 전국을 공포에 떨게한 납치 사건들에 대한 기사가 써져있다.");
				break;
			case 0:
			return  basement();
			default:
				printf("\n# ERROR # 입력값 오류\n");
			}
				system("pause");
		
	}
}

void armorymoon() {
int menu;
	while(1) {
		system("cls");
		printf("잠겨있다.\n");
		printf("책상에 있는 그랜저의 사진이 힌트인거 같다.\n\n");
		printf("힌트를 잘 조합하면 암호를 풀 수 있을거 같다.\n\n");

		printf("1. 비밀번호를 입력한다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
			 armory_password();		
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void armory_password() {

	char pass[5] = "8247", temp[5];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf(" 열렸다.\n\n");
		return armory();
		
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}

void armory(){
	int menu; 
	
	while(1) {
	system("cls");
	printf("[지하실]-[무기고] \n\n");
	printf("여라가지 무기들이 있다.\n");
	printf("1. 총들을 조사한다.\n");
	printf("2. 다이너마이트를 조사한다.\n");
	printf("0. 돌아가기\n"); 
	
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("탄창에 종이가 껴져있다.");
				printf("종이에는 G.O.D라고 써져있다.\n"); 
				break;
			case 2:
				printf("다른 다이너 마이트와는 다르게 생긴게 있다\n");
				printf("모형인거같다.\n");  
				printf("열어보니 12라고 써져 있다.\n"); 
				break;
			case 0:
				return basement();
			default:
				printf("\n# ERROR # 입력값 오류\n");
				}
				system("pause");	
} 
}
void  stairs() { 
	int menu;
	
	while(1) {
		system("cls");
		printf("[지하실]-[출입문]\n\n");
		printf("이 지하실을 나갈 수 있는 유일한 문인거 같다.\n");
	
		
		printf("1. 비밀번호를 입력한다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
		
			case 1:
				stairs_password();
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void stairs_password() {
	char pass[7] = "MASCAN", temp[7];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf("\n\n드디어 이 끔찍한 지하실을 탈출한다.\n\n");
		printf(" 나 이곳에 가둬 이꼴을 만든 살인자 놈들 .\n");
		printf("절대 가만두지 않겠다.\n\n");
		printf("# THE END #\n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}
	

