/*
Prob No.175 : ÈÄÀ§Ç¥Çö½Ä I [CH02.1.Algorithm(Exsit)]

Time Limit(Test case) : 1000(ms)
Total Submit : 1034    Accepted : 276
Background

ÀÏ¹ÝÀûÀ¸·Î ¿ì¸®´Â ÁßÀ§¿¬»ê½ÄÀ» »ç¿ëÇÑ´Ù. ÁßÀ§¿¬»ê½ÄÀÌ¶õ ¿¬»êÀÚ°¡ ÇÇ¿¬»êÀÚ »çÀÌ¿¡ ÀÖ´Â ½ÄÀ» ¸»ÇÑ´Ù. ¿¹¸¦ µé¾î ´ÙÀ½°ú °°Àº ½ÄÀº ÁßÀ§ ¿¬»ê½ÄÀÌ´Ù. 

¡Ý a+b 
¡Ý a-b*c 

ÇÏÁö¸¸ ÀÌ ½ÄÀÇ ´ÜÁ¡Àº ¿¬»êÀÚÀÇ ¿ì¼±¼øÀ§¿¡ ÀÇÇØ¼­ °è»ê¼ø¼­°¡ ¹Ù²î±â ¶§¹®¿¡ ÄÄÇ»ÅÍ·Î Ã³¸®ÇÏ±â¿¡´Â ÀûÇÕÇÏÁö ¾Ê´Ù. ÄÄÇ»ÅÍ·Î´Â ÈÄÀ§ ¿¬»ê½ÄÀ» »ç¿ëÇÒ ¶§ ¿¬»êÀÚÀÇ ¿ì¼±¼øÀ§¿¡ °ü°è¾øÀÌ ¼ø¼­´ë·Î °è»êÇÒ ¼ö ÀÖ±â ¶§¹®¿¡ Æí¸®ÇÏ´Ù. À§ ½ÄµéÀ» ÈÄÀ§¿¬»ê½ÄÀ¸·Î ¹Ù²Ù¸é ´ÙÀ½°ú °°´Ù. 

¡Ý ab+ 
¡Ý abc*- 

ÁÖ¾îÁø ÁßÀ§½ÄÀ» ÈÄÀ§½ÄÀ¸·Î ¹Ù²Ù´Â ÇÁ·Î±×·¥À» ÀÛ¼ºÇÏ½Ã¿À. (´Ü, ¿¬»ê½Ä¿¡ °ýÈ£´Â ¾øÀ¸¸ç ¿¬»êÀÚ´Â + - * /ÀÌ´Ù.)
Input

ÁßÀ§¿¬»ê½ÄÀÌ °ø¹é¾øÀÌ ÀÔ·ÂµÈ´Ù. ´Ü ½ÄÀÇ ±æÀÌ´Â 50Byte¸¦ ³ÑÁö ¾Ê´Â´Ù.
Output

ÈÄÀ§½ÄÀ¸·Î º¯È¯ÇÏ¿© °ø¹é¾øÀÌ Ãâ·ÂÇÏ½Ã¿À.
IO Example

ÀÔ·Â 
a+b*c 

Ãâ·Â 
abc*+ 

*/
#include<cstdio>
#include<stack>
using namespace std;
stack<char> d;
int f(char a){switch(a){case'+':case'-':return 1;default:return 2;}}
int main(){
	char s[50];
	scanf("%s",s);
	for(int i=0;s[i];i++){
		if(s[i]>64)printf("%c",s[i]);
		else{if(d.empty())d.push(s[i]);
			else if(f(d.top())<f(s[i]))d.push(s[i]);
			else{
				for(;!d.empty() && f(d.top())>=f(s[i]);printf("%c",d.top()),d.pop());
				d.push(s[i]);
			}
		}
	}
	for(;!d.empty();printf("%c",d.top()),d.pop());
}
