#pragma once

#include<stdio.h>
#include<Windows.h>

#define MAXSIZE 100
typedef int KeyType;

typedef struct Stack
{
	KeyType array[MAXSIZE];
	int top;
	int size;
}Stack,*pStack;

void StackInit(pStack ps);//初始化栈
void StackPush(pStack ps, KeyType data);//入栈
void StackPop(pStack ps);//出栈
int StackIsEmpty(pStack ps);//判断是否栈为空
int StackTop(pStack ps);//返回栈顶元素
int StackSize(pStack ps);//栈中元素
void StackPrint(pStack ps);//打印栈