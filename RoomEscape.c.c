#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();

void prison(); //���� 
void desk();  //å�� 
void calendar(); //�޷�
void water(); //�� 
void drawer(); //���� 
void topdrawer(); //�� ���� 
void middledrawer(); //��� ���� 
void bottomdrawer(); //�Ʒ� ���� 
void topdrawer_password();

void basement(); //���Ͻ� 
void incinerationplant(); // �Ұ��� 
void armory(); // �����
void desk1(); // ���Ͻ� å�� 
void armory_password();
void armorymoon(); //�����  
void stairs(); //���  
void stairs_password();
void incinerationplantfw();

int isFindKey = FALSE; //���� ȹ�� 
int isOpenprison = FALSE; // ������ ���� 
int main() {
	int menu;
	
	while(1) {
		printf("ROOM ESCAPE \n\n");
		printf("1. ����\n");
		printf("0. ����\n");
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
				printf("�Է� ����\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("���� ������ ���� �ȿ� �ִ� �� ����.\n");
	Sleep(1000);
	printf("�߱��� ������ ��� ���̾��µ� �׵ڰ� �� ��ﳪ�� �ʴ´�.\n");
	Sleep(1000);
	printf("���� �ֺ����� ��ġ����� 3���ʳ� �Ͼ �����϶�� �߾��µ�....\n");
	Sleep(1000);
		printf("���� ���� ��ġ�� ���Ѱǰ�\n");
	Sleep(1000);
	printf("����!!! \n");
	Sleep(1000);
	printf("�׷��� ���� ���ε��� �����ִ°� ����\n");
	Sleep(1000);
	printf("���ε��� �������� �̰��� Ż������\n");
	Sleep(1000);
	printf("�ƴ� ������ Ż���ؾ��Ѵ�. ������ؼ�\n");
	Sleep(1000);
	system("pause");
}

void prison() {
	int menu; 
	
	while(1) {
	system("cls");
	printf("[����] \n\n");
	printf("1. å��	2. ��	3. �޷�\n");
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				desk();
				break;
			case 2:
				printf("���̴�."); 
				break;
			case 3:
				printf("8���� �޷��̴�. 8��30�Ͽ� üũ�� �Ǿ��ִ�.");
				break;
			default:
				printf("\n# ERROR # �Է°� ����\n");
				}
				system("pause");	
		

		
	}
} 

void desk(){ // 1. å�� 
 int menu;
 
  while(1) {
		system("cls");
		printf("[����]-[å��]\n\n");
		printf("å�� ���� 3���� ������ �ִ�.\n\n");
		printf("1. ���� �� ������  ���캻��\n");
		printf("2. �߰�  ������  ���캻��\n");
		printf("3. ���� �Ʒ� ������  ���캻��\n");
		printf("0. ���ư���\n");	
	
	printf(">> ");
		scanf("%d", &menu);
		
			switch(menu) {
			case 1:
				 topdrawer(); 
				break;
			case 2:
				printf("�ȿ� ���̾�� �ִ�.\n");
				printf("���̾���� 8���޿� ������ �����ִ�.\n");
				printf("8�� 14�Ͽ��� 786.\n");
				printf("8�� 9�� 16�Ͽ��� 883.\n");
				printf("8�� 9�� 17�Ͽ��� 933.\n");
			printf("8�� 18�Ͽ��� 848.\n");
			printf("8�� 19�� 26�Ͽ��� 374.\n");
			printf("8�� 13�� 20�Ͽ��� 728.\n");	
				printf("��Ʈ ������ �̰� ���� �ǹ��ϱ�?");
				break;
			case 3:
				printf("������ �ִ�.\n");
				printf("1Q  2ABC    3DEF\n");
				printf("4GHI	5JKL	6MNO\n");
				printf("7PRS	8TUV	9WXY\n");
				printf(" *  	 0Z	     #\n");
				break;
			case 0:
				return; 
			default:
				printf("\n# ERROR # �Է°� ����\n");
			}
				system("pause");		
	}	
}

	
void topdrawer(){

int menu;
	while(1) {
		system("cls");
		printf("����ִ�.\n");
		printf("�ȿ� �� ������ ���� �� �ִ� ���谡 �ִ°� ����.\n\n");
		

		printf("1. ��й�ȣ�� �Է��Ѵ�\n");
		printf("2. ���� Ż��\n"); 
		printf("0. ���ư���\n");
		
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
				printf("\n# ERROR # �Է°� ����\n\n");
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
		printf(" �����.\n\n");
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
		printf("[���Ͻ�]\n\n");
		printf("������ ���Դ�.\n\n");
		printf("1. �Ұ���	2. å��	3. �����	4. ��� \n");
			
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
				printf("\n# ERROR # �Է°� ����\n\n");
				break;
		}
		system("pause");
	}
	
}

void incinerationplant(){
	int menu;
 
  while(1) {
		system("cls");
		printf("[���Ͻ�]-[�Ұ���]\n\n");
		printf("�Ұ��忡�� ��� 1�� �� ũ�⿡ ����� �¿�� ���� ��ŭ�� ȭ���� ���� ���� ��� Ÿ�� �־���. .\n\n");
		printf("�� �տ��� ���̰� ������ �ִ�");
		printf("1. ���̸� ���캻��\n");
		printf("0. ���ư���\n");	
	
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				 printf(" ���̿��� ambition��� �����ִ�.\n"); 
				break;
			case 119:
				incinerationplantfw();
				break;
			case 0:
				return basement(); 
			default:
				printf("\n# ERROR # �Է°� ����\n");
			}
				system("pause");		
	}	
}
void incinerationplantfw(){
	int menu;
 
  while(1) {
		system("cls");
		printf("[���Ͻ�]-[�Ұ���]\n\n");
		printf("������ �ִ� ���� �̿��� ���� ���� ������ ����.\n\n");
		printf("1. ���� �̿��Ͽ� ���� ����.\n");
		printf("0. ���ư���\n");	
	
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				 printf(" ���� ������ �ȿ�MASCAN�̶�� �����ִ�. \n "); 
				 printf(" �̰� ���� ���ϱ�? \n "); 
				break;
			case 0:
				return basement(); 
			default:
				printf("\n# ERROR # �Է°� ����\n");
			}
				system("pause");		
	}	
}
void 	desk1(){	
	int menu;	
	
	while(1) {
		system("cls");	
		printf("[���Ͻ�]\n\n");
		printf("�� �ȿ��� �� �� �ִ� �͵��� ã�ƺ���.\n\n");
		printf("1. ����    2. ����    3. ��Ÿ\n");
		printf("4. ����    5. ����    6. �Ź�\n");
		printf("0. ���ư���\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n���� 6���� �����ڿ��� ���� �����̴�.\n");
				printf("�Ƹ� �� ���� ���ε鿡 �󱼵��ΰ� ����.\n");
				break;
			case 2:
				printf("���� 4���� �ٸ� �׷������� �������� �ִ�. \n"); 
				printf("���� ������ �׷����� 339�� 8315�̶�� ��ȣ���� �����ְ�\n");
				printf("�״����� ��� �׷����� 57�� 2894�̶�� ��ȣ���� �����ְ�\n");
				printf("������  ����� �׷����� 123�� 4568�̶�� ��ȣ���� �����ְ� \n");
				printf("����������  �Ķ��� �׷����� 140�� 7971�̶�� ��ȣ���� �����ִ�.\n");
				printf("��� �� �Ķ��� �׷��� �����ݾ�.\n");
				printf("�׷� �� ������ ���鵵 �ٸ� �����ڵ��� �����ΰ�?.\n");
				printf("���ε��� �� �׷����� Ÿ�� ����鸸 �븰����?.\n");
				printf("�׸��� �� ��ȣ���� ������ ��������?.\n");
				printf("��ȣ�ǿ� ����� �� �� �ִ� ��Ʈ�� ��ȣ�� �ִ°ǰ�?.\n");
				break;
			case 3:
				printf("�������� 1���� ��Ÿ�ΰ� ����");
				break;
			case 4:
				printf("�������� 1���� �����ΰ� ����"); 
				break;
			case 5:
				printf("�������� 1���� �����ΰ� ����");
				break;
			case 6:
				printf("�Ź����� ���� ������ ������ ������ ��ġ ��ǵ鿡 ���� ��簡 �����ִ�.");
				break;
			case 0:
			return  basement();
			default:
				printf("\n# ERROR # �Է°� ����\n");
			}
				system("pause");
		
	}
}

void armorymoon() {
int menu;
	while(1) {
		system("cls");
		printf("����ִ�.\n");
		printf("å�� �ִ� �׷����� ������ ��Ʈ�ΰ� ����.\n\n");
		printf("��Ʈ�� �� �����ϸ� ��ȣ�� Ǯ �� ������ ����.\n\n");

		printf("1. ��й�ȣ�� �Է��Ѵ�\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
			 armory_password();		
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
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
		printf(" ���ȴ�.\n\n");
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
	printf("[���Ͻ�]-[�����] \n\n");
	printf("������ ������� �ִ�.\n");
	printf("1. �ѵ��� �����Ѵ�.\n");
	printf("2. ���̳ʸ���Ʈ�� �����Ѵ�.\n");
	printf("0. ���ư���\n"); 
	
	printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("źâ�� ���̰� �����ִ�.");
				printf("���̿��� G.O.D��� �����ִ�.\n"); 
				break;
			case 2:
				printf("�ٸ� ���̳� ����Ʈ�ʹ� �ٸ��� ����� �ִ�\n");
				printf("�����ΰŰ���.\n");  
				printf("����� 12��� ���� �ִ�.\n"); 
				break;
			case 0:
				return basement();
			default:
				printf("\n# ERROR # �Է°� ����\n");
				}
				system("pause");	
} 
}
void  stairs() { 
	int menu;
	
	while(1) {
		system("cls");
		printf("[���Ͻ�]-[���Թ�]\n\n");
		printf("�� ���Ͻ��� ���� �� �ִ� ������ ���ΰ� ����.\n");
	
		
		printf("1. ��й�ȣ�� �Է��Ѵ�\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
		
			case 1:
				stairs_password();
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # �Է°� ����\n\n");
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
		printf("\n\n���� �� ������ ���Ͻ��� Ż���Ѵ�.\n\n");
		printf(" �� �̰��� ���� �̲��� ���� ������ ��� .\n");
		printf("���� �������� �ʰڴ�.\n\n");
		printf("# THE END #\n\n");
		system("pause");
		exit(0);
	} else {
		printf("\n\n# ERROR # PASSWORD FAIL\n\n");
		return;	
	}
}
	

