#include <stdio.h>
#include <string.h>
int main(){
char song[37], artist[56] ;
printf("Enter your favourite song: ");
gets(song);
printf("Who is the artist: ");
gets(artist);

strcpy(artist, song);
printf("The copied string now is: %s",artist);

}
