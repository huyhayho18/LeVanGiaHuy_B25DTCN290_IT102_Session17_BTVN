#include <stdio.h>
#include <string.h>

int main () {
	
	char str[100];
	char charter;
	printf ("Nhap vao moi chuoi ky tu: ");
	fgets (str, sizeof(str), stdin);
	printf ("Nhap vao ky tu can xoa: ");
	scanf (" %c",&charter);
	int i, j = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] != charter) {
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	printf ("Chuoi ky tu sau khi da xoa ky tu %c la: %s",charter,str);
	
    return 0;	
}
