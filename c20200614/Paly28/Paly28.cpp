//
// Created by 刘鹏 on 2020/6/14.
//

#include "Paly28.h"

void getNextVal(int* nextVal,std::string& s){
    int j=0,i=1;
    nextVal[0]=0;
    int size=s.size();
    while(i<size&&j<size){
        if(s[i]==s[j]){
            nextVal[i]=j+1;
            i++;
            j++;
        }else{
            if(j==0){
                nextVal[i]=0;
                i++;
            }else{
                j=nextVal[j-1];//找到上一個可以匹配的前綴，為下一次判斷是否為連續前綴做準備
            }
        }
    }
}

int Paly28::strStr(std::string haystack, std::string needle) {
    if(needle.size()==0) return 0;
    int nsize=needle.size();
    int hsize=haystack.size();
    int pos=-1;
    int nextVal[nsize];
    getNextVal(nextVal,needle);
    int i=0,j=0;
    while(i<hsize){//套兩次循環是因爲j==0時是兩種操作的過度點：從找前綴（内循環）變成從前往後綫性掃描起點（外循環）
        if(haystack[i]==needle[j]){//第一位匹配成功
            i++;
            j++;
            while(i<hsize&&j<nsize){//注意内部循環也要判斷i，所有下標都要檢查
                if(haystack[i]==needle[j]){
                    i++;
                    j++;
                }
                else{
                    if(j==0){//相當於從頭開始匹配，進入外循環模式，一位一位往後移比較第一位
                        break;
                    }
                    j=nextVal[j-1];
                    continue;//繼續尋找可能前綴的下一位
                }
            }
        }
        if(j>=nsize){
            pos=i-nsize;//因爲匹配完成了，所以i在單詞最後
            break;
        }
        i++;
    }
    return pos;
}


