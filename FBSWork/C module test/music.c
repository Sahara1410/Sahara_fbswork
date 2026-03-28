#include<stdio.h>
#include<string.h>
struct music
{
	int song_id;
	char title[20];
	char artist[10];
	float duration;	
};
void main(){
struct music m1,m2;
	m1.song_id=101;
	strcpy(m1.title,"Zindagi");
	strcpy(m1.artist,"Arijit Singh");
	m1.duration=3.00f;
	printf("Enter Song Id, Title and Artist:\n");
    scanf("%d", &m2.song_id);
    scanf("%s", m2.title);
    scanf("%s", m2.artist);
    scanf("%f",&m2.duration);
	printf("\n-----The music library-----\n");
    printf("\nSong _id=%d Title=%s Artist=%s Duration=%f\n", m1.song_id, m1.title, m1.artist,m1.duration);
    printf("Song_id=%d Title=%s Artist=%s Duration=%f\n", m2.song_id, m2.title, m2.artist,m2.duration);
}
