#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>

//Cau truc Sinh vien
struct SINHVIEN{
    short MSSV;
    float diem;
    char maNganh[20];
    char hoTen[50];
};

//Cau truc Phan so
struct PHANSO{
    float T, M;
};

//Giup khai bao cau truc de dang hon
typedef struct SINHVIEN SINHVIEN;
typedef struct PHANSO PHANSO;

//can giua
void centerText1(char *text) {
    short width = 122;
    int side = (width - strlen(text)) / 2;
    printf("%*s%s%*s\n", side, "", text, side, "");
}

void centerText2(char *text){
    short width = 122;
    int side = (width - strlen(text)) / 2;
    printf("%*s%s", side, "", text);
}

//Nhan phim bat ki de tiep tuc
void pressAnykey(){
    centerText1("||------------------------------------------------------------------------------------------------------||");
    centerText2("Nhan bat ki phim nao de tiep tuc: ");
    getch();
}

void pressAnykey2(){
    centerText1("**** Khong co tinh nang nay ****");
    centerText2("Nhan bat ki phim nao de nhap lai: ");
    getch();
}

//thong bao tinh nang chua hoan chinh
void chuaHoanChinh(){
    centerText1("**** Tinh nang dang duoc phat trien *****");
    pressAnykey();
}

//xet xem co phai la so nguyen
float checkingIntNumber(){
    float x;
    char ch;  
    centerText2("Nhap vao so x: ");
    if(scanf("%f%c", &x,&ch) != 2 || ch != '\n') {
        return -111;
    }else {
        return x;
    }
}

//xet nhap vao co phai char hay khong
float checkingInputNumber(){
    float x;
    char ch;
    centerText2("Nhap vao so x: ");
    while(scanf("%f%c", &x,&ch) != 2 || ch != '\n') {
        fflush(stdin);
        centerText1("Input ban vua nhap nen la so!!");
        centerText2("Moi ban nhap lai: ");
    }
    return x;
}

//xet nhap vao lua chon
int checkingInputCharacter(){
    int inputNumber;
    char ch;
    while(scanf("%d%c", &inputNumber, &ch) != 2 || ch != '\n' || inputNumber < 0) {
        fflush(stdin);
        centerText1("Input ban vua nhap khong hop le");
        centerText2("Nhap lai: ");
    }
    return inputNumber;
}

//Input checking rieng cho chuc nang 6
int checkingInputCharacter6(){
    long int inputNumber;
    char ch;
    while(scanf("%ld%c", &inputNumber, &ch) != 2 || ch != '\n' || inputNumber < 0) {
        fflush(stdin);
        centerText1("Input ban vua nhap khong hop le");
        centerText2("Nhap lai: ");
    }
    return inputNumber;
}

//Thong bao chuc nang 8
void thongBaoCN8(){
    centerText1("Ban can phai nhap thong tin sinh vien truoc khi thuc hien chuc nang nay");
    pressAnykey();
}

//Input checking rieng cho TU SO
int checkingInputCharacterTu(){
    int inputNumber;
    char ch;
    while(scanf("%d%c", &inputNumber, &ch) != 2 || ch != '\n') {
        fflush(stdin);
        centerText1("Input ban vua nhap khong hop le");
        centerText2("Nhap lai: ");
    }
    return inputNumber;
}

//Input checking rieng cho MAU SO
int checkingInputCharacterMau(){
    int inputNumber;
    char ch;
    while(scanf("%d%c", &inputNumber, &ch) != 2 || ch != '\n' || inputNumber == 0) {
        fflush(stdin);
        centerText1("Input ban vua nhap khong hop le");
        centerText2("Nhap lai: ");
    }
    return inputNumber;
}

//Input checking rieng cho chuc nang 10
int checkingInputChoicesIn10(){
    short runningcheck = 1;
    char input[5];
    while(runningcheck = 1){
        scanf("%s",input);
        fflush(stdin);
        if (atoi(input) == 1){
            return atoi(input);
            runningcheck = 0;
        }else if (atoi(input) == 2){
            return atoi(input);
            runningcheck = 0;
        }else if (atoi(input) == 3) {
            return atoi(input);
            runningcheck = 0;
        }else if (atoi(input) == 4){
            return atoi(input);
            runningcheck = 0;
        }else if (strcmp(input,"+")==0){
            return 1;
            runningcheck = 0;
        }else if (strcmp(input,"-")==0){
            return 2;
            runningcheck = 0;
        }else if (strcmp(input,"*")==0){
            return 3;
            runningcheck = 0;
        }else if (strcmp(input,"/")==0){
            return 4;
            runningcheck = 0;
        }else {
            if (strcmp(input,"0") == 0){
            return 0;
            runningcheck = 0;
            }else{
            centerText1("Input ban vua nhap khong hop le");
            centerText2("Nhap lai: ");
            }
        }
    }
}

//rut gon phan so bang UCLN
int rutGonPS(PHANSO result){
    int rutGon, x = result.T, y = result.M;
    while (x*y != 0){ 
        if (x > y){
            x %= y; // a = a % b
        }else{
            y %= x;
        }
    }
    return rutGon = x + y;
}

//kiem tra diem nhap vao
float checkingPoint(){
    float x;
    char ch;
    while(scanf("%f%c", &x, &ch) != 2 || ch != '\n' || x < 0.0 || x > 10.0) {
        fflush(stdin);
        centerText1("Input phai la diem so!!!");
        centerText2("Moi nhap lai: ");
    }
    return x;
}

//Menu
void MENU(){
    system("cls");
    printf("\t||------------------------------------------------------------------------------------------------------||\n");
    printf("\t||\t                      ___          ___          ___          ___                        \t||\n");
    printf("\t||\t                     /__/\\        /  /\\        /__/\\        /__/\\                       \t||\n");
    printf("\t||\t                    |  |::\\      /  /:/_       \\  \\:\\       \\  \\:\\                    \t\t||\n");
    printf("\t||\t                    |  |:|:\\    /  /:/ /\\       \\  \\:\\       \\  \\:\\                   \t\t||\n");
    printf("\t||\t                  __|__|:|\\:\\  /  /:/ /:/_  _____\\__\\:\\  ___  \\  \\:\\                \t\t||\n");
    printf("\t||\t                 /__/::::| \\:\\/__/:/ /:/ /\\/__/::::::::\\/__/\\  \\__\\:\\                   \t||\n");
    printf("\t||\t                 \\  \\:\\~~\\__\\/\\  \\:\\/:/ /:/\\  \\:\\~~\\~~\\/\\  \\:\\ /  /:/       \t\t\t||\n");
    printf("\t||\t                  \\  \\:\\       \\  \\::/ /:/  \\  \\:\\  ~~~  \\  \\:\\  /:/             \t\t||\n");
    printf("\t||\t                   \\  \\:\\       \\  \\:\\/:/    \\  \\:\\       \\  \\:\\/:/             \t\t||\n");
    printf("\t||\t                    \\  \\:\\       \\  \\::/      \\  \\:\\       \\  \\::/                \t\t||\n");
    printf("\t||\t                     \\__\\/        \\__\\/        \\__\\/        \\__\\/                       \t||\n");
    printf("\t||                                                                                TRAN PHU DAT          ||\n");
    printf("\t||------------------------------------------------------------------------------------------------------||\n");
    printf("\t||\t\t\t\t| 1. Kiem tra so nguyen                  |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 2. Tim uoc, boi so chung cua 2 so X,Y  |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 3. Tinh tien cho quan Karaoke          |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 4. Tinh tien dien                      |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 5. Quy doi tien                        |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 6. Tinh lai suat vay ngan hang,tra gop |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 7. Tinh lai vay tien mua xe            |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 8. Sap xep thong tin sinh vien         |\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 9. Game FPOLY-LOTT                     |\t\t\t\t||\n");
    printf("\t||\t\t\t\t|10. Tinh toan phan so                   |\t\t\t\t||\n");
    printf("\t||\t\t\t\t|11. Thong tin nguoi thuc hien           |\t\t\t\t||\n");

    printf("\t||\t\t\t\t|________________________________________|\t\t\t\t||\n");
    printf("\t||\t\t\t\t| 0. De thoat chuong trinh               |\t\t\t\t||\n");
    printf("\t||------------------------------------------------------------------------------------------------------||\n");
    printf("\t||                                                                                                      ||\n");
}

//When ending program
void UIEndingProgram() {
    printf("\t||------------------------------------------------------------------------------------------------------||\n");
    printf("\t||\t\t|\t (      (                     (         )    (          )    \t|\t\t||\n");
    printf("\t||\t\t|\t )\\ )   )\\ )    *   )         )\\ )   ( /(    )\\ )    ( /(\t|\t\t||\n");
    printf("\t||\t\t|\t(()/(  (()/(  ` )  /(        (()/(   )\\())  (()/(    )\\()) \t|\t\t||\n");
    printf("\t||\t\t|\t /(_))  /(_))  ( )(_))  ___   /(_)) ((_)\\    /(_))  ((_)\\  \t|\t\t||\n");
    printf("\t||\t\t|\t(_))_| (_))   (_(_())  |___| (_))     ((_)  (_))   __ ((_)   \t|\t\t||\n");
    printf("\t||\t\t|\t| |_   | _ \\  |_   _|        | _ \\   / _ \\  | |    \\ \\ / / \t|\t\t||\n");
    printf("\t||\t\t|\t| __|  |  _/    | |          |  _/  | (_) | | |__   \\ V /   \t|\t\t||\n");
    printf("\t||\t\t|\t|_|    |_|      |_|          |_|     \\___/  |____|   |_|    \t|\t\t||\n");
    printf("\t||------------------------------------------------------------------------------------------------------||\n");
}

/*
chuc nang 1:
    Kiem tra so nguyen
    Kiem tra so nguyen to
    Kiem tra so chinh phuong
*/

/*Kiem tra so nguyen khi nhap vao
    nang cap:   nhap vao 1 so nguyen thi bao la so nguyen
                khong phai so nguyen thi:
                    in ra la mot chuoi ||
                    in ra la mot so thuc
*/

void kiemTraSoN(float x){
    short check = 1;
    float result;
    result = fmod(x, 1.0);
    if (x == -111){
        check = 2;
    }else if(result != 0.0){
        check = 0;
    }
    if (check == 1){
        printf("\t\t\t\t\t\t      %g la so nguyen\n", x);
    }else if(check == 2){
        centerText1("Ban vua nhap vao la chuoi ky tu");
    }else{
        printf("\t\t\t\t\t\t   %g khong la so nguyen\n", x);
        printf("\t\t\t\t\t\t       %g la so thuc\n", x);
    }
    pressAnykey();
}

/*
    Kiem tra so nguyen to bang cach su dung chia lay du
        in ra la so nguyen to ||
        in ra khong phai so nguyen to
*/

void kiemtraSNT(float x){
    short check = 1;
    int i;
    float result;
    result = fmod(x, 1.0); // mod 2 float : fmod

    if(x < 2){    
        check = 0;
    }else if(result != 0.0){
            check = 0;
    }else{
        for (int i = 2; i <= sqrt((float)x); i ++){
            if (fmod(x, i) == 0){
                check = 0;
                break;
            }
        }
    }
    if (check == 1){
        printf("\t\t\t\t\t\t     %g la so nguyen to\n",x);
    }else {
        printf("\t\t\t\t\t\t  %g khong la so nguyen to\n",x);
    }
    pressAnykey();
}

/*
    Kiem tra so chinh phuong
        su dung vong lap va i*i 
            in ra la so chinh phuong ||
            in ra khong phai so chinh phuong
*/

void kiemTraSoCP(float x){
    short check = 0;
    int i;
    if (x == 1){
        check = 1;
    }else {
        for (i = 2; i <= sqrt((float)x); i++){
            if (i * i == x) {
                check = 1;
                break;
            }
        }
    }
    if (check == 1){
        printf("\t\t\t\t\t\t   %g la so chinh phuong\n",x);
    }else {
        printf("\t\t\t\t\t\t%g khong la so chinh phuong\n",x);
    }
    pressAnykey();
}

//    Menu chuc nang 1
void chucNang1(){
    short choices, runningProgram_1 = 1;
    float x;
    while(runningProgram_1 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t\t      Tinh nang 1. Kiem tra so nguyen      \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");

        printf("\t||\t\t\t\t  |1. Kiem tra so x co phai so nguyen      |  \t\t\t\t||\n");
        printf("\t||\t\t\t\t  |2. Kiem tra so x co phai so nguyen to   |  \t\t\t\t||\n");
        printf("\t||\t\t\t\t  |3. Kiem tra so x co phai so chinh phuong|  \t\t\t\t||\n");
        printf("\t||\t\t\t\t  |0. De thoat tinh nang                   |  \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        //3 chuc nang
        switch(choices){
            case 1: {
                x = checkingIntNumber();
                kiemTraSoN(x);
                break;
            }case 2: {
                x = checkingInputNumber();
                kiemtraSNT(x);
                break;
            }case 3: {
                x = checkingInputNumber();
                kiemTraSoCP(x);
                break;
            }case 0: {
                
                runningProgram_1 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }
}

/*
Chuc nang 2:
    Tim uoc chung lon nhat cua x va y
    Tim boi chung nho nhat cua x va y
*/

//Tim uoc chung lon nhat
void timUCLN(int x, int y){
    int result;
    printf("\t\t\t\t\t\t      UCLN(%d, %d) = ", x, y);
    while (x*y != 0){ 
        if (x > y){
            x %= y; // a = a % b
        }else{
            y %= x;
        }
    }
    result = x + y;
    printf("%d\n", result);
    pressAnykey();
}

//Tim boi chung nho nhat
void timBCNN(int x, int y){
    int result, temp;
    if ((y == 0) || (x == 0)){
        printf("\t\t\t\t\t\t      BCNN(%d, %d) = 0\n", x, y);
    }else{
        for(int i = 1; i <= x && i <= y; ++i){
            if(x % i == 0 && y % i == 0){
                temp = i;
            }
        }
    result = (x * y) / temp;
    printf("\t\t\t\t\t\t      BCNN(%d, %d) = %d\n", x, y, result);
    }
    pressAnykey();

}

// menu chuc nang 2
void chucNang2(){
    short choices, runningProgram_2 = 1;
    int x, y, result;
    while(runningProgram_2 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t\t     Tinh nang 2. Tim uoc, boi so chung    \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        printf("\t||\t\t\t\t         |1. Tim uoc chung lon nhat|         \t\t\t\t||\n");
        printf("\t||\t\t\t\t         |2. Tim boi chung nho nhat|         \t\t\t\t||\n");
        printf("\t||\t\t\t\t         |0. De thoat tinh nang    |         \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");

        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        //3 chuc nang
        switch(choices){
            case 1: {
                centerText2("Nhap so x: ");
                x = checkingInputCharacter();
                centerText2("Nhap so y: ");
                y = checkingInputCharacter();
                timUCLN(x, y);
                break;
            }case 2: {
                centerText2("Nhap so x: ");
                x = checkingInputCharacter();
                centerText2("Nhap so y: ");
                y = checkingInputCharacter();

                timBCNN(x, y);
                break;
            }case 0: {
                
                runningProgram_2 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }    
}

/*
Chuc nang 3:
    Kiem tra thoi gian bang time.h
    Tinh tien theo gio
*/

//Kiem tra thoi gian bang time.h
void checkTime(){
    time_t raw_time;
    struct tm *ptr_ts;

    time (&raw_time);
    ptr_ts = gmtime (&raw_time);

    //+7 la thoi gian o Viet Nam
    printf("\t\t\t\t\t       Thoi gian hien tai la %2d:%02d\n",ptr_ts->tm_hour+7, ptr_ts->tm_min);
    pressAnykey();
}
    
//Dung bao em code lai bai nay em ton cung phai 4 tieng de nghi thuat toan va lam gio & phut
void tinhTienKaraoke(int gioStart, int phutStart, int gioEnd, int phutEnd){
    int totalTime = 0, totalTime_Start = 0, totalTime_End = 0;
    int money;
    printf("\t\t\t\t\t\t     Bat dau  = %d:%d\n", gioStart,phutStart);
    printf("\t\t\t\t\t\t     Ket thuc = %d:%d\n", gioEnd,phutEnd);

    totalTime_Start = ((gioStart * 60) + phutStart);
    totalTime_End = ((gioEnd * 60) + phutEnd);
    totalTime = totalTime_End - totalTime_Start;

    if (totalTime <= 180){
        money = totalTime * 50000 / 60;
    }else{
        money = ((totalTime -180) *50000 / 60) - ((totalTime - 180) * 50000 / 60*0.3);
        money += 150000;
    }

    if (gioStart >= 14 && gioStart <=17){
        if (gioStart == 17){
            if (phutStart == 0){
                money -= (money*0.1);
            }
        }else{
            money -= (money*0.1);
        }
    }
    printf("\t\t\t\t\t\t  Tong tien: %d VND\n",money);
    pressAnykey();
}

//Menu 
void chucNang3(){
    int gioStart,phutStart, gioEnd, phutEnd;
    char ch;
    short choices,runningStart = 1, runningEnd = 1, runningProgram_3 = 1;
    while(runningProgram_3 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t\t  Tinh nang 3. Tinh tien cho quan karaoke  \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        printf("\t||\t\t\t\t       |1. Kiem tra thoi gian hien tai|      \t\t\t\t\n");
        printf("\t||\t\t\t\t       |2. Tinh tien theo gio         |      \t\t\t\t\n");
        printf("\t||\t\t\t\t       |0. De thoat tinh nang         |      \t\t\t\t\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");

        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        //3 chuc nang
        switch(choices){
            case 1: {
                checkTime();
                break;
            }case 2: {
                printf("\n\t\t\t\t\t\tNhap theo dang: 12 32 ENTER");
                printf("\n\t\t\t\t\t\t   Nhap thoi gian bat dau\n");

                while (runningStart = 1){
                    fflush(stdin);
                    centerText2("Nhap: ");
                    if(scanf("%d%d%c",&gioStart,&phutStart, &ch) != 3 || ch != '\n') {
                        centerText2("Input ban vua nhap khong hop le");
                    }else if(gioStart <12 || gioStart > 23){
                        centerText2("Khong dung thoi gian hoat hong cua quan");
                    }else if (gioStart == 23){
                        if (phutStart > 0){
                            centerText2("Khong dung thoi gian hoat hong cua quan");
                        } 
                    }else if(phutStart < 0 || phutStart > 59){
                        centerText2("Thoi gian khong hop le");
                    }else{
                        runningStart = 0;
                    break;
                    }
                }
                printf("\n\t\t\t\t\t\t Nhap thoi gian tinh tien\n");

                while (runningEnd = 1){
                    fflush(stdin);
                    centerText2("Nhap: ");
                    if(scanf("%d%d%c",&gioEnd,&phutEnd, &ch) != 3 || ch != '\n') {
                        centerText2("Input ban vua nhap khong hop le");
                    }else if(gioEnd <12 || gioEnd > 23){
                        centerText2("Khong dung thoi gian hoat hong cua quan");
                    }else if (gioEnd == 23){
                        if (phutEnd >= 0){
                            centerText2("Khong dung thoi gian hoat hong cua quan");
                        }else {
                            centerText2("Nhap vao khong hop le");
                        }
                    }else if(phutEnd < 0 || phutEnd > 59){
                        centerText2("Thoi gian khong hop le");
                    }else{
                        runningEnd = 0;
                    break;
                    }
                }        
                
                tinhTienKaraoke(gioStart, phutStart, gioEnd, phutEnd);
                break;
            }case 0: {
                
                runningProgram_3 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }    
}

/*
Chuc nang 4:
    tinh tien dien
*/

//Tinh toan hoa don tien dien
void electricBill(int soDien){
    int Money = 0, tienTheoBac;
    short giaDien;

    if(soDien <= 50){
        giaDien = 1678;
        Money = giaDien * soDien;
    }else if ((50 < soDien) && (soDien <= 100)){
        giaDien = 1734;
        tienTheoBac = 83900; //Tong tien bac 1
        Money = tienTheoBac + ((soDien - 50) * giaDien);
    }else if ((100 < soDien) && (soDien <= 200)){
        giaDien = 2014;
        tienTheoBac = 83900 + 86700; //Tong tien bac 2
        Money = tienTheoBac + ((soDien - 100) * giaDien);
    }else if ((200 < soDien) && (soDien <= 300)){
        giaDien = 2536;
        tienTheoBac = 83900 + 86700 + 201400; //Tong tien bac 3
        Money = tienTheoBac + ((soDien - 200) * giaDien);
    }else if ((300 < soDien) && (soDien <= 400)){
        giaDien = 2834;
        tienTheoBac = 83900 + 86700 + 201400 + 253600; //Tong tien bac 4
        Money = tienTheoBac + ((soDien - 300) * giaDien);
    }else if (400 < soDien){
        giaDien = 2927;
        tienTheoBac = 83900 + 86700 + 201400 + 253600 + 292700; //Tong tien bac 5
        Money = tienTheoBac + ((soDien - 400) * giaDien);
    }
    
    printf("\n\t\t\t\t\t\t   Tong tien: %d VND\n", Money);
    pressAnykey();
}

// Menu chuc nang 4
void chucNang4(){
    short choices, runningProgram_4 = 1;
    int soDien;
    while(runningProgram_4 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t\t\tTinh nang 4. Tinh tien dien\t\t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        printf("\t||\t\t\t\t        |1. Tinh tien so dien da dung|       \t\t\t\t||\n");
        printf("\t||\t\t\t\t        |0. De thoat tinh nang       |       \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        
        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        //3 chuc nang
        switch(choices){
            case 1: {
                centerText2("Nhap so dien da dung: ");
                soDien = checkingInputCharacter();
                electricBill(soDien);
                break;
            }case 0: {
                runningProgram_4 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }
}

/*
Chuc nang 5:
    quy doi tien
*/

/*
Chuc nang 6:
    tinh so tien can phai tra trong 12 thang
*/
//Tinh la suat va in ra theo hang
void tinhLaiSuat(long int moneyVay){
    double laiPhaiTra;
    double gocPhaiTra, soTienPhaiTra, soTienConLai;

    gocPhaiTra = moneyVay / 12;
    printf("\t||\t|Ky han|     |Lai phai tra|     |Goc phai tra|    |So tien phai tra|     |So tien con lai|\t||\n");

    for(int i = 0; i < 12; i++){

        laiPhaiTra = moneyVay * 5/100;
        soTienPhaiTra = laiPhaiTra + gocPhaiTra;
        soTienConLai = moneyVay - gocPhaiTra;
        printf("\t||\t--------     --------------     --------------    ------------------     -----------------\t||\n");
        printf("\t||\t|Ky %3d:     |%-12.0f|     |%-12.0f|    |%-16.0f|     |%-15.0f|\t||\n",i+1, laiPhaiTra, gocPhaiTra, soTienPhaiTra, soTienConLai);

        moneyVay -= gocPhaiTra;
    }
    pressAnykey();
}
//menu chuc nang 6
void chucNang6(){
    short choices, runningProgram_6 = 1;
    long int moneyVay;
    while(runningProgram_6 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t    Tinh nang 6. Tinh lai suat vay ngan hang, tra gop    \t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        printf("\t||\t\t\t\t\t    |1. Tinh trong 12 thang|    \t\t\t\t||\n");
        printf("\t||\t\t\t\t\t    |0. De thoat tinh nang |    \t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        //3 chuc nang
        switch(choices){
            case 1: {
                centerText2("Nhap so tien muon vay: ");
                moneyVay = checkingInputCharacter6();
                tinhLaiSuat(moneyVay);
                break;
            }case 0: {
                runningProgram_6 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }
}

/*
Chuc nang 8:
    Nhap ho ten/ Nhap diem sinh vien/ Sap xep diem giam dan
*/

//Nhap thong tin, sap xep thong tin sinh vien va xuat ra 
void nhapSV(SINHVIEN sv[], int n){
    int i; 
    for(int i = 0; i < n; i++) {
        centerText1("___________");
        sv[i].MSSV = i+1;
        fflush(stdout);
        centerText2("|Ho ten SV: ");
        gets(sv[i].hoTen);
        centerText2("| Ma nganh: ");
        gets(sv[i].maNganh);
        centerText2("|     Diem: ");
        sv[i].diem = checkingPoint();
    }
}  
void inthongtin(SINHVIEN sv[], int n) {
    int i;
    printf("\t||\t  ______________________________________________________________________________________ \t||\n");

    printf("\t||\t  |  MSSV  |        Ho ten sinh vien        |  Ma nganh  |  Diem  |       Xep loai     | \t||\n");

    for(i = 0; i < n; i++) {
        printf("\t||\t  ______________________________________________________________________________________ \t||\n");
        printf("\t||\t  | %-6d | %-30s | %10s | %6.2g ", sv[i].MSSV, sv[i].hoTen, sv[i].maNganh, sv[i].diem);
        if (sv[i].diem >= 9){
            printf("|\tXuat sac       |  \t||\n");
        }else if (sv[i].diem >= 8){
            printf("|\tGioi\t       |  \t||\n");
        }else if (sv[i].diem >= 6.5){
            printf("|\tKha\t       |  \t||\n");
        }else if (sv[i].diem >= 5){
            printf("|\tTrung binh     |  \t||\n");
        }else if (sv[i].diem < 5){
            printf("|\tYeu\t       |  \t||\n");
        }
    }
    pressAnykey();
}

void sapXepSV(SINHVIEN sv[], int n){
    int i, j, k= 0;

    float tempDiem;
    char tempHoTen[n],tempMaNganh[n];
    for(i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (sv[i].diem > sv[j].diem){
                tempDiem = sv[i].diem;
                k = sv[i].MSSV;
                strcpy(tempMaNganh, sv[i].maNganh);
                strcpy(tempHoTen, sv[i].hoTen);
                sv[i].diem = sv[j].diem;
                sv[i].MSSV = sv[j].MSSV;
                strcpy(sv[i].maNganh, sv[j].maNganh);
                strcpy(sv[i].hoTen, sv[j].hoTen);
                sv[j].diem = tempDiem;
                sv[j].MSSV = k;
                strcpy(sv[j].maNganh, tempMaNganh);
                strcpy(sv[j].hoTen, tempHoTen);
            }
        }
    }
}

void timKiemSV(SINHVIEN sv[], int n, int x){
    int i=0,kiemtra=0;

    for(i=0;i<n;i++){
		if(sv[i].MSSV == x){
            printf("\t||\t  ______________________________________________________________________________________ \t||\n");

            printf("\t||\t  |  MSSV  |        Ho ten sinh vien        |  Ma nganh  |  Diem  |       Xep loai     | \t||\n");
            printf("\t||\t  ______________________________________________________________________________________ \t||\n");
            printf("\t||\t  | %-6d | %-30s | %10s | %6.2g ", sv[i].MSSV, sv[i].hoTen, sv[i].maNganh, sv[i].diem);
            if (sv[i].diem >= 9){
                printf("|\tXuat sac       |  \t||\n");
            }else if (sv[i].diem >= 8){
                printf("|\tGioi\t       |  \t||\n");
            }else if (sv[i].diem >= 6.5){
                printf("|\tKha\t       |  \t||\n");
            }else if (sv[i].diem >= 5){
                printf("|\tTrung binh     |  \t||\n");
            }else if (sv[i].diem < 5){
                printf("|\tYeu\t       |  \t||\n");
            }
            kiemtra++;
		}
	}
	if(kiemtra==0){
		centerText1("Khong tim thay mssv trong danh sach");
    }
    pressAnykey();
}

/*
Quick test case:
8
1
7
Nguyen Hong Son
IT
5
Tran Phu Dat
IT
10
Nguyen Thi Thuy Duong
IT
8
Truong Vo Ky
IT
7
Hong Kim Bao
IT
4
Kim Tu Long
IT
1
Truong Hoc Huu
IT
6.5
*/

//Menu chuc nang 8
void chucNang8(){
    short choices, runningProgram_8 = 1, check = 0;
    int n, x;

    centerText1("Nhap so sinh vien truoc khi bat dau chuong trinh");
    SINHVIEN sv[50];
    while(runningProgram_8 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t\t  Tinh nang 8. Sap xep thong tin sinh vien\t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        printf("\t||\t\t\t\t\t|1. Nhap thong tin sinh vien|\t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t|2. Xuat thong tin sinh vien|\t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t|3. Sap xep theo hoc luc    |\t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t|4. Tim kiem SV theo MSSV   |\t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t|0. De thoat tinh nang      |\t\t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        centerText1("Ban nen nhap thong tin Sinh vien truoc");
        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        //3 chuc nang
        switch(choices){
            case 1: {
                centerText2("Nhap so sinh vien: ");
                n = checkingInputCharacter();
                nhapSV(sv, n);
                check = 1;
                break;
            }case 2: {
                if (check == 1){
                    inthongtin(sv, n);
                }else{
                    thongBaoCN8();
                }
                break;
            }case 3: {
                if (check == 1){
                    sapXepSV(sv, n);
                    fflush(stdin);
                    inthongtin(sv, n);
                }else{
                    thongBaoCN8();
                }
                break;
            }case 4: {
                if (check == 1){
                    centerText2("Nhap MSSV muon tim kiem: ");
                    x = checkingInputCharacter();
                    fflush(stdin);
                    timKiemSV(sv, n, x);
                }else{
                    thongBaoCN8();
                }
                break;
            }case 0: {
                runningProgram_8 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }
}

/*
Chuc nang 10:
    Tinh toan :
                +
                -
                *
                /
*/

//cong 
void congPS(PHANSO ps1, PHANSO ps2){
    PHANSO result, daRutGon;
    int soRutGon;

    result.T = (ps1.T * ps2.M) + (ps2.T * ps1.M);
    result.M = (ps1.M * ps2.M);

    soRutGon = rutGonPS(result);

    daRutGon.T = result.T/soRutGon;
    daRutGon.M = result.M/soRutGon;
    centerText2("Ket qua: ");
    printf("%.0f/%.0f\n", daRutGon.T, daRutGon.M);
    pressAnykey();
}

//tru
void truPS(PHANSO ps1, PHANSO ps2){
    PHANSO result, daRutGon;
    int soRutGon;

    result.T = (ps1.T * ps2.M) - (ps2.T * ps1.M);
    result.M = (ps1.M * ps2.M);

    soRutGon = rutGonPS(result);

    daRutGon.T = result.T/soRutGon;
    daRutGon.M = result.M/soRutGon;
    centerText2("Ket qua: ");
    printf("%.0f/%.0f\n", daRutGon.T, daRutGon.M);
    pressAnykey();
}

//nhan
void nhanPS(PHANSO ps1, PHANSO ps2){
    PHANSO result,  daRutGon;
    int soRutGon;

    result.T = ps1.T * ps2.T;
    result.M = ps1.M * ps2.M;

    soRutGon = rutGonPS(result);

    daRutGon.T = result.T/soRutGon;
    daRutGon.M = result.M/soRutGon;
    centerText2("Ket qua: ");
    printf("%.0f/%.0f\n", daRutGon.T, daRutGon.M);
    pressAnykey();
}

//chia
void chiaPS(PHANSO ps1, PHANSO ps2){
    PHANSO result, daRutGon;
    int soRutGon;

    result.T = ps1.T * ps2.M;
    result.M = ps1.M * ps2.T;

    soRutGon = rutGonPS(result);

    daRutGon.T = result.T/soRutGon;
    daRutGon.M = result.M/soRutGon;
    centerText2("Ket qua: ");
    printf("%.0f/%.0f\n", daRutGon.T, daRutGon.M);
    pressAnykey();
}

//menu chuc nang 10
void chucNang10(){
    short choices, runningProgram_10 = 1;
    PHANSO ps1, ps2;

    while(runningProgram_10 == 1){
        fflush(stdin);
        fflush(stdout);
        system("cls");
        UIEndingProgram();
        printf("\t||\t\t\t\t\tTinh nang 10. May tinh phan so\t\t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        printf("\t||\t\t\t\t\t   |1. Phep tinh cong : +|   \t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t   |2. Phep tinh tru  : -|   \t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t   |3. Phep tinh nhan : *|   \t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t   |4. Phep tinh chia : /|   \t\t\t\t\t||\n");
        printf("\t||\t\t\t\t\t   |0. De thoat tinh nang|   \t\t\t\t\t||\n");
        printf("\t||------------------------------------------------------------------------------------------------------||\n");
        centerText2("Nhap lua chon: ");
        choices = checkingInputChoicesIn10();

        //3 chuc nang
        switch(choices){
            case 1: {
                centerText1("Nhap phan so thu 1");
                centerText2("Tu: ");
                ps1.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps1.M = checkingInputCharacterMau();
                centerText1("Nhap phan so thu 2");
                centerText2("Tu: ");
                ps2.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps2.M = checkingInputCharacterMau();
                congPS(ps1, ps2);
                break;
            }case 2: {
                centerText1("Nhap phan so thu 1");
                centerText2("Tu: ");
                ps1.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps1.M = checkingInputCharacterMau();
                centerText1("Nhap phan so thu 2");
                centerText2("Tu: ");
                ps2.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps2.M = checkingInputCharacterMau();
                truPS(ps1, ps2);
                break;
            }case 3: {
                centerText1("Nhap phan so thu 1");
                centerText2("Tu: ");
                ps1.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps1.M = checkingInputCharacterMau();
                centerText1("Nhap phan so thu 2");
                centerText2("Tu: ");
                ps2.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps2.M = checkingInputCharacterMau();
                nhanPS(ps1, ps2);
                break;
            }case 4: {
                centerText1("Nhap phan so thu 1");
                centerText2("Tu: ");
                ps1.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps1.M = checkingInputCharacterMau();
                centerText1("Nhap phan so thu 2");
                centerText2("Tu: ");
                ps2.T = checkingInputCharacterTu();
                centerText2("Mau: ");
                ps2.M = checkingInputCharacterMau();
                chiaPS(ps1, ps2); 
                break;
            }case 0: {
                
                runningProgram_10 = 0;
                break;
            }default : {                
                pressAnykey2();
                break;
            }
        }
    }

}

short chucNang11(){
    short textColorEggs = 0;
    char PHUDAT[6];
    system("cls");
    centerText1("01001101 01100101 01110010 01110010 01111001 01011000 01101101 01100001 01110011 ");
    centerText1("GIANG SINH AN LANH");
    printf("\033[0;35m");    
    centerText1("Name: Tran Phu Dat");
    centerText1("Contact: 0985950723");
    centerText1("College: FPT Polytechnic");
    centerText1("Address: Phu Yen - Viet Nam");
    centerText1("Contact: cctalk1114@gmail.com");
    centerText1("Contact: JackAndy249@gmail.com");
    centerText1("Facebook: https://www.facebook.com/Jayzneverzz");
    centerText1("CodeLearn: https://codelearn.io/profile/12985928");
    printf("\t||------------------------------------------------------------------------------------------------------||\n");
    printf("\n\n");
    centerText1("Mau chu da bi thay doi");
    centerText1("Day la mot EASTER EGGS cua nguoi lam chuong trinh");
    centerText1("Nhap vao ngau nhien de giu chu mau Hong");
    centerText1("Nhap vao PHUDAT de tro lai chu Vang");
    centerText2("Nhap: ");
    fflush(stdin);
    gets(PHUDAT);
    if (strcmp(PHUDAT, "PHUDAT")==0){
        textColorEggs = 1;
    }
    pressAnykey();

    return textColorEggs;
}

//Main program nam o cuoi chuong trinh
void main(){
    system("color 0E");
    short choices, running = 1, textColorEggs = 0;
    SetConsoleTitle("Phu Dat's Assignment_COM_108 ");
    while(running == 1){
        if(textColorEggs == 1){
            system("color 0E");
        }
        fflush(stdin);
        MENU();
        centerText2("Nhap lua chon: ");
        choices = checkingInputCharacter();
        switch (choices){
            case 1:{
                chucNang1();
                break;
            }case 2:{
                chucNang2();
                break;
            }case 3:{
                chucNang3();
                break;
            }case 4:{
                chucNang4();
                break;
            }case 5:{
                chuaHoanChinh();
                break;
            }case 6:{
                chucNang6();
                break;
            }case 7:{
                chuaHoanChinh();
                break;
            }case 8:{
                chucNang8();
                break;
            }case 9:{
                chuaHoanChinh();
                break;
            }case 10:{
                chucNang10();
                break;
            }case 11:{
                textColorEggs = chucNang11();
                break;
            }case 0: {
                UIEndingProgram();
                running = 0;
                break;
            }default:
                pressAnykey2();
                break;
        }
    }
    pressAnykey();
    exit(0);
}