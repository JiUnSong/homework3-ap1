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
	printf("[----- [������]   [2019038028]-----]\n\n\n");

   int list[5];		// 5ĭ�� �迭 ����
   int *plist[5] = {NULL, };		// NULL�� �ʱ�ȭ�� ������ �迭 ����

   plist[0] = (int *)malloc(sizeof(int));		// plist[0]�� �ּҸ� size�� 4�� heap�������� ����

   list[0] = 1;		// list[0]�� ���� 1�� �ʱ�ȭ
   list[1] = 100;	// list[1]�� ���� 100�� �ʱ�ȭ

   *plist[0] = 200;	// plist[0]�� ����Ű�� �ּ��� ���� 200���� �ʱ�ȭ

   printf("value of list[0] = %d\n", list[0]);		// list[0]�� ���� ��Ÿ���� ��¹�
   printf("address of list[0] = %p\n", &list[0]);	// list[0]�� �ּҸ� ��Ÿ���� ��¹�
   printf("value of list = %p\n", list);			// list == list[0]�̹Ƿ� list[0]�� ���� ��Ÿ���� ��¹�
   printf("address of list (&list) = %p\n", &list);	// list == list[0]�̹Ƿ� list[0]�� �ּҸ� ��Ÿ���� ��¹�

   printf("------------------------------------\n\n");			// ȭ�� ��ȯ
   printf("value of list[1] = %d\n", list[1]);		// list[1]�� ���� ��Ÿ���� ��¹�
   printf("address of list[1] = %p\n", &list[1]);	// list[1]�� �ּҸ� ��Ÿ���� ��¹�
   printf("value of *(list+1) = %d\n", *(list+1));	// *(list+1) == list[0]�� �ּҿ� +4�� �� ���̹Ƿ� list[1]�� ���� ��Ÿ���� ��¹�
   printf("address of list + 1 = %p\n", list + 1);	// ���� ���� list[1]�� �����Ƿ� list[1]�� �ּҸ� ��Ÿ���� ��¹�

   printf("------------------------------------\n\n");		// ȭ�� ��ȯ

   printf("value of *plist[0] = %d\n", *plist[0]);	// *plist[0]�� ����Ű�� ���� ��Ÿ���� ��¹�
   printf("&plist[0] = %p\n", &plist[0]);			// �����Ҵ�� plist[0]�� �ּҸ� ��Ÿ���� ��¹�
   printf("&plist = %p\n", &plist);					// plist == plist[0]�̹Ƿ� plist[0]�� �ּҸ� ��Ÿ���� ��¹�
   printf("plist = %p\n", plist);					// &plist == plist �̹Ƿ� plist[0]�� �ּҸ� ��Ÿ���� ��¹�
   printf("plist[0] = %p\n", plist[0]);				// plist[0]�� �����Ҵ����� heap������ �ּҷ� ���� �ʱ�ȭ�� �ȵǾ� �ֱ⶧���� �����Ⱚ ���
   printf("plist[1] = %p\n", plist[1]);				// plist[1]�� 0���� �ʱ�ȭ�� �Ǿ�����
   printf("plist[2] = %p\n", plist[2]);				// plist[2]�� 0���� �ʱ�ȭ�� �Ǿ�����
   printf("plist[3] = %p\n", plist[3]);				// plist[3]�� 0���� �ʱ�ȭ�� �Ǿ�����
   printf("plist[4] = %p\n", plist[4]);				// plist[4]�� 0���� �ʱ�ȭ�� �Ǿ�����

   free(plist[0]);			// �����Ҵ� ��ü

   return 0;		// 0���� ��ȯ
   }
