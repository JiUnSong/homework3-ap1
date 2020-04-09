/*
 ============================================================================
 Name        : homework3_.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description :ap1.c
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

int main(void){
	printf("[----- [송지운]   [2019038028]-----]\n\n\n");

   int list[5];		// 5칸의 배열 선언
   int *plist[5] = {NULL, };		// NULL로 초기화된 포인터 배열 선언

   plist[0] = (int *)malloc(sizeof(int));		// plist[0]의 주소를 size가 4인 heap영역으로 보냄

   list[0] = 1;		// list[0]의 값을 1로 초기화
   list[1] = 100;	// list[1]의 값을 100로 초기화

   *plist[0] = 200;	// plist[0]가 가리키는 주소의 값을 200으로 초기화

   printf("value of list[0] = %d\n", list[0]);		// list[0]의 값을 나타내는 출력문
   printf("address of list[0] = %p\n", &list[0]);	// list[0]의 주소를 나타내는 출력문
   printf("value of list = %p\n", list);			// list == list[0]이므로 list[0]의 값을 나타내는 출력문
   printf("address of list (&list) = %p\n", &list);	// list == list[0]이므로 list[0]의 주소를 나타내는 출력문

   printf("------------------------------------\n\n");			// 화제 전환
   printf("value of list[1] = %d\n", list[1]);		// list[1]의 값을 나타내는 출력문
   printf("address of list[1] = %p\n", &list[1]);	// list[1]의 주소를 나타내는 출력문
   printf("value of *(list+1) = %d\n", *(list+1));	// *(list+1) == list[0]의 주소에 +4를 한 것이므로 list[1]의 값을 나타내는 출력문
   printf("address of list + 1 = %p\n", list + 1);	// 위와 같이 list[1]과 같으므로 list[1]의 주소를 나타내는 출력문

   printf("------------------------------------\n\n");		// 화제 전환

   printf("value of *plist[0] = %d\n", *plist[0]);	// *plist[0]가 가리키는 값을 나타내는 출력문
   printf("&plist[0] = %p\n", &plist[0]);			// 동적할당된 plist[0]의 주소를 나타내는 출력문
   printf("&plist = %p\n", &plist);					// plist == plist[0]이므로 plist[0]의 주소를 나타내는 출력문
   printf("plist = %p\n", plist);					// &plist == plist 이므로 plist[0]의 주소를 나타내는 출력문
   printf("plist[0] = %p\n", plist[0]);				// plist[0]는 동적할당으로 heap영역의 주소로 가고 초기화가 안되어 있기때문에 쓰레기값 출력
   printf("plist[1] = %p\n", plist[1]);				// plist[1]은 0으로 초기화가 되어있음
   printf("plist[2] = %p\n", plist[2]);				// plist[2]은 0으로 초기화가 되어있음
   printf("plist[3] = %p\n", plist[3]);				// plist[3]은 0으로 초기화가 되어있음
   printf("plist[4] = %p\n", plist[4]);				// plist[4]은 0으로 초기화가 되어있음

   free(plist[0]);			// 동적할당 해체

   return 0;		// 0값을 반환
   }
