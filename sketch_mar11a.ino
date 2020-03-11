#include <SwitchControlLibrary.h>
#define UP 0
#define RIGHT 2
#define DOWN 4
#define LEFT 6
#define CENTER 8

void setup() {
  // put your setup code here, to run once:
  SwitchControlLibrary().PressButtonL();
  delay(500);
  SwitchControlLibrary().PressButtonR();
  delay(500);
  SwitchControlLibrary().ReleaseButtonL();
  delay(500);
  SwitchControlLibrary().ReleaseButtonR();
  delay(500);
  // 斜め上入力しっぱなし リーグ集会の際にオンにする
  // SwitchControlLibrary().MoveLeftStick(158,256); 
}

// Home画面から設定を選択
void SelectSettings(){
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(1000);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(100);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1500);
}

// 設定から日付変更を選択する関数
void SelectDataSetting(){
  SwitchControlLibrary().MoveHat(4); // down
  delay(2000);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);
  // 時間設定
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(4); // down
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);
}

// 日付を1日進める
void AdvanceOneDay(){
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(2); // right
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(50);
  SwitchControlLibrary().MoveHat(0); // up
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(200);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(500);
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1000);
}

// 日付を25日前に戻す
void Revert2First(){
  SwitchControlLibrary().MoveHat(RIGHT);
  delay(50);
  SwitchControlLibrary().MoveHat(CENTER); 
  delay(50);
  SwitchControlLibrary().MoveHat(RIGHT);
  delay(50);
  SwitchControlLibrary().MoveHat(CENTER);
  delay(50);
  for(int i=0;i<25;i++){
    SwitchControlLibrary().MoveHat(DOWN); 
    delay(50);
    SwitchControlLibrary().MoveHat(CENTER);
    delay(50);
  }
  delay(200);
  for(int i=0;i<4;i++){
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(50);
  }
  delay(100);
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(500);
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1000);
}

// 日付を1年進める
void AdvanceOneYear(){
  SwitchControlLibrary().MoveHat(0); // up
  delay(50);
  SwitchControlLibrary().MoveHat(8); // center
  delay(200);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(50);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(100);
  SwitchControlLibrary().PressButtonHome();
  delay(50);
  SwitchControlLibrary().ReleaseButtonHome();
  delay(500);
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(500);
  SwitchControlLibrary().PressButtonA();
  delay(100);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1000);
}

/**************************************************/
/*     以降にはloop関数内で呼び出す関数を記述する      */
/**************************************************/

// 1ヶ月分のポイア回収
void AquirePPupWhileMonth() {
  // 調整操作
  SwitchControlLibrary().PressButtonB();
  delay(500);
  SwitchControlLibrary().ReleaseButtonB();
  SwitchControlLibrary().PressButtonB();
  delay(500);
  SwitchControlLibrary().ReleaseButtonB();
  // Home画面操作で設定選択
  SelectSettings();
  // 設定画面から時刻設定を選択する
  SelectDataSetting();
  // 1日進める
  AdvanceOneDay();   
  // 選択肢->くじ引き
  for(int i=0;i<2;i++){
    SwitchControlLibrary().PressButtonA();
    delay(500);
    SwitchControlLibrary().ReleaseButtonA();
    delay(500);
  }
  SwitchControlLibrary().MoveHat(DOWN); 
  delay(100);
  SwitchControlLibrary().MoveHat(CENTER);
  delay(500);
  // くじ会話消化
  for(int i=0;i<23;i++){
    SwitchControlLibrary().PressButtonA();
    delay(500);
    SwitchControlLibrary().ReleaseButtonA();
    delay(500);
  }
  delay(1000);
  SwitchControlLibrary().PressButtonB();
  delay(500);
  SwitchControlLibrary().ReleaseButtonB();
  delay(1000);
}

void AquirePPup(){
  // 1ヶ月を無限にループ
  for(int i=0;;i++){
    for(int j=0;j<25;j++){
      AquirePPupWhileMonth();  
    }
    SwitchControlLibrary().PressButtonB();
    delay(50);
    SwitchControlLibrary().ReleaseButtonB();
    delay(150);
    // 日付を1年進める
    SelectSettings();
    SelectDataSetting();  
    AdvanceOneYear();
    delay(1000);
    // 日付を25日に戻す
    SelectSettings();
    SelectDataSetting();  
    Revert2First();
  }
}

// 1ヶ月間ワット回収をする
void RaidWattBugWhileMonth() {
  // 開始 みんなで挑戦押した後から。
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(3000);
  // 募集開始
  SelectSettings();
  // 日付選択画面へ移動
  SelectDataSetting();
  // 1日進める
  AdvanceOneDay();
  // レイドをやめる操作とレイドの再選択
  delay(1000);
  SwitchControlLibrary().MoveHat(DOWN);
  delay(50);
  SwitchControlLibrary().MoveHat(CENTER);
  delay(500);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1000);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(4000);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(2000);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1000);
  SwitchControlLibrary().PressButtonA();
  delay(50);
  SwitchControlLibrary().ReleaseButtonA();
  delay(1000);
}

void RaidWattPoints(){
   // 1ヶ月を無限にループ
  for(int i=0;;i++){
    for(int j=0;j<25;j++){
      RaidWattBugWhileMonth();
    }
    delay(1500);
    // 日付を1年進める
    SelectSettings();
    SelectDataSetting();  
    AdvanceOneYear();
    delay(1000);
    // 日付を25日に戻す
    SelectSettings();
    SelectDataSetting();  
    Revert2First();
  }
}

// リーグ周回用の関数
// setup関数内のスティック設定も入れる
void CirclingLeague(){
  for(int i=0;i<7;i++){
    SwitchControlLibrary().PressButtonA();
    delay(50);
    SwitchControlLibrary().ReleaseButtonA();
    delay(500);
  }
  SwitchControlLibrary().PressButtonB();
  delay(50);
  SwitchControlLibrary().ReleaseButtonB();
  delay(500);
}

void loop() {
  //RaidWattPoints();
  //CirclingLeague();
  AquirePPup(); 
}
