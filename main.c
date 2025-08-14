#include <windows.h>
#include <stdio.h>

#pragma comment(lib, "winmm.lib") 

#define AUDIO_PATH "F:\\Projects\\Practice Projects\\Train Status Announement\\Audio_Files\\"

void play_audio(const char *name) {
    char filepath[MAX_PATH];
    snprintf(filepath, sizeof(filepath), "%s%s.wav", AUDIO_PATH, name);
    PlaySound(filepath, NULL, SND_FILENAME | SND_SYNC);
}

void play_number_audio(const int number) {
    char filepath[MAX_PATH];
    snprintf(filepath, sizeof(filepath), "%s%d.wav", AUDIO_PATH, number);
    PlaySound(filepath, NULL, SND_FILENAME | SND_SYNC);
}

int arrive_hour(){
    int hour;
    printf("Enter the arriving hour time in 24-hour format (0-23): \n");
    scanf("%d", &hour);
    return hour;
};

int arrive_min(){
    int minute;
    printf("Enter the arriving minute time: \n");
    scanf("%d", &minute);
    return minute;
};

int delay_hour(){
    int hour;
    printf("Enter the delayed hour time: \n");
    scanf("%d", &hour);
    return hour;
};

int delay_min(){
    int minute;
    printf("Enter the delayed minute time: \n");
    scanf("%d", &minute);
    return minute;
};

void train_num(char *train){
    // char *train = malloc(20);
    printf("Enter the train number: \n");
    scanf("%19s", train);
    // for (int i = 0; i < length; i++) {
    //     digits[i] = train[i] - '0';
    // }
    // return train;
}

int platform_num() {
    int platform;
    printf("Enter the platform number: \n");
    scanf("%d", &platform);
    return platform;
}

void ann_const(int hour, int minutes, char status, char arrive,int del_hour, int del_min, int platform, char *train) {
    int i = 0;
    int digits[20];
    char hours[MAX_PATH];
    char mins[MAX_PATH];
    char trainnum[MAX_PATH];
    char platform_numb[MAX_PATH];
    
    
    play_audio("startingtone");
    play_audio("mayihave");

    while (train[i] != '\0') {
        digits[i] = train[i] - '0';
        i++;
    }
    for (int j = 0; j < i; j++) {
        play_number_audio(digits[j]);
    }
    
    if(arrive == 'C' || arrive == 'c') {
        play_audio("arriving");
        play_audio("platformnumber");
        play_number_audio(platform);
    }
    
    else if (arrive == 'S' || arrive == 's'){
        play_audio("isstandingon");
        play_audio("platformnumber");
        play_number_audio(platform);
    }
    
    else if((status == 'Y' || status == 'y') &&  (arrive == 'A' || arrive == 'a')){
        play_audio("ontime");
        play_audio("expectedto");
        play_audio("platformnumber");
        play_number_audio(platform);
        play_audio("at");
        play_number_audio(hour);
        play_audio("hour");
        play_number_audio(minutes);
        play_audio("minute");
    }
    
    
    else if ((status == 'N' || status == 'n') &&  (arrive == 'A' || arrive == 'a')){
        play_audio("isdelayedby");
        play_number_audio(del_hour);
        play_audio("hour");
        play_number_audio(del_min);
        play_audio("minute");
        play_audio("expectedto");
        play_audio("platformnumber");
        play_number_audio(platform);
        play_audio("at");
        play_number_audio(hour);
        play_audio("hour");
        play_number_audio(minutes);
        play_audio("minute");
        play_audio("inconvenience");
        
    }
    
    play_audio("thankyou");
}

int main() {
    int hours = 0, minute = 0, platform, del_hours = 0, del_mins = 0;
    char arrive, status, train[20];
    
    printf("Welcome to Train Status Announcement System \n");
    
    
    printf("Is the train running on time? (Y/N): \n");
    scanf(" %c", &status);
    if(status == 'N' || status == 'n'){
        del_hours = delay_hour();
        del_mins = delay_min();
    }
    
    printf("Is the train arriving or already standing at the platform or about to arrive? (A/S/C): \n");
    scanf(" %c",&arrive);

    if(arrive == 'S' || arrive == 's' || arrive == 'C' || arrive == 'c') {
        train_num(train);
        platform = platform_num();
        ann_const(hours, minute, status, arrive, del_hours, del_mins, platform, train);
    }
    else{   
        hours = arrive_hour();
        minute = arrive_min();
        train_num(train);
        platform = platform_num();
        ann_const(hours, minute, status, arrive, del_hours, del_mins, platform, train);
    }

    return 0;
}