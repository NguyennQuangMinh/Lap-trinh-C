#include <stdio.h>
#include <string.h>

// tach so tu chuoi nhan duoc
#define CMD_ON "ledon"
#define CMD_OFF "ledoff"

char buff[50] = "ledon:2,312,0,15;ledoff:3,46,16;";
void handle_cmd(char *buff_cmd, char *cmd, int on_off);
void control_led(int index, int sta);

int main(){
	handle_cmd(buff, CMD_ON, 1);
	handle_cmd(buff, CMD_OFF, 0);
	return 0;
}

void handle_cmd(char *buff_cmd, char *cmd, int on_off){
	char *pCmd = strstr(buff_cmd, cmd);
	if(pCmd != NULL){
		pCmd += strlen(cmd);
		if(*pCmd == ':'){
			pCmd++;
			int number = 0;
			while(1){
				if(*pCmd >='0' && *pCmd <= '9'){
					number *= 10;
					number += (*pCmd-'0');
				}
				else if(*pCmd == ','){
					control_led(number, on_off);
					number = 0;
				}
				else if(*pCmd == ';'){
					control_led(number, on_off);
					break;
				}
				++pCmd;
			}
		}
	}
}

void control_led(int index, int sta){
	printf("\nled: %d, sta: %d", index, sta);
}
