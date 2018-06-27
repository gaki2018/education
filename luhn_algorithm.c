#include<stdio.h>
#include<string.h>  //strlen()使いたい
#include<stdlib.h>  //exit()使いたい

int check_number(int i[], int i_length);  //int型配列と要素の数を渡してokなら1，noなら0を返す

int ctoi(char c){ // 返り値を−1に改変
  if(c >+ '0' && c <='9'){
    return c - '0';
  }
  return -1;
}

int main(void){
  char str_num[21];
  int num_length = 0, cnt, int_num[21];

  printf("数値を入力（20桁以内）：");
  scanf("%s", str_num);
  getchar();
  num_length = strlen(str_num);
  for(cnt = 0; cnt < num_length; ++cnt){  //文字列をint型配列に変換
    if((int_num[cnt] = ctoi(str_num[cnt])) == -1){  //変換の例外処理
      printf("cast_error\n");
      exit(1);
    }
  }
  if(check_number(int_num, num_length))
    printf("number is correct\n");
  else
    printf("number is wrong\n");

  return 0;
}

int check_number(int i[], int i_length){  //int型配列と要素の数を渡してokなら1，noなら0を返す
  int sum = 0, cnt, tmp;
  
  for(cnt = 0; cnt < i_length; ++cnt){
    tmp = i[i_length - 1 - cnt];  //配列の逆側から一桁ずつ読込
    if(!(0 <= tmp && tmp <= 9)){  //0未満か１０以上だとエラー処理
      printf("check_error\n");
      exit(1);
    }
    if(cnt % 2 == 1){ //右端から偶数桁目の処理
      tmp *= 2;
      if(tmp > 9)
        tmp -= 9;
    }
    sum += tmp;
  }
  if(sum % 10 == 0)
    return 1;
  else
    return 0;
}
