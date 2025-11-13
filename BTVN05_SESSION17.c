#include <stdio.h>
#include <string.h>

int main () {
	
	char str01[100], str02[100];
	printf ("Nhap vao moi chuoi ky tu thu nhat: ");
	fgets (str01, sizeof(str01), stdin);
	printf ("Nhap vao moi chuoi ky tu thu hai: ");
	fgets (str02, sizeof(str02), stdin);
	int i;
	for (i = 0; i < strlen(str01); i++) {
		if (str01[i] >= 'A' && str01[i] <= 'Z') {
			str01[i] = str01[i] + 32 ;
		}
	}
	for (i = 0; i < strlen(str02); i++) {
		if (str02[i] >= 'A' && str02[i] <= 'Z') {
			str02[i] = str02[i] + 32 ;
		}
	}
	int result = strcmp(str01, str02);
	if (result == 0) {
		printf ("Giong nhau");
	} else {
		printf ("Khac nhau");
	}
	
	return 0;
}
