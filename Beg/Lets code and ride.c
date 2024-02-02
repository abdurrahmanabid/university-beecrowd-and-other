/*#include <stdio.h>
#include <string.h>


int main() {
    int t,i=0;
    scanf("%d", &t);

    while (i<t) {

        char text[10000];
        scanf("%[^\n]s", text);
        puts(text);
        i++;
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    int t,i;
    scanf("%d",&t);
    for(i=0;i<=t ;i++)
    {
        char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);

    printf("%s\n", sentence);


    }


    return 0;
}
