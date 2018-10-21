////1.删除链表中的所有值为val的结点
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	struct ListNode *pre = head;
//	struct ListNode *cur = head;
//	while (cur)
//	{
//		if ((cur->val == val) && (cur == head))
//		{
//			struct ListNode *del = head;
//			head = del->next;
//			free(del);
//			del = NULL;
//		}
//		else if (cur->val == val)
//		{
//			struct ListNode *del = cur;
//			cur = del->next;
//			free(del);
//			del = NULL;
//			pre->next = cur;
//		}
//		else
//		{
//			pre = cur;
//			cur = cur->next;
//		}
//	}
//	return head;
//}


///////////////////////////////////////////////
////2.给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素
//给定 nums = [3, 2, 2, 3], val = 3,
//函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
//你不需要考虑数组中超出新长度后面的元素。

//给定 nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,
//函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。
//注意这五个元素可为任意顺序。
//你不需要考虑数组中超出新长度后面的元素。

//int removeElement(int* nums, int numsSize, int val) {
//	int i = 0;
//	int tmp = 0;
//	int j = 0;
//	while (i<numsSize)
//	{
//		if (nums[j] != val)
//		{
//			j++;
//		}
//		if (nums[i] == val)
//		{
//			i++;
//		}
//		if (j<i)
//		{
//			int tmp = nums[j];
//			nums[j] = nums[i];
//			nums[i] = tmp;
//		}
//	}
//	return j;
//}


////////////////////////////////////////////////////////////////
///失败！！！！！！！！！！！！！！！！！


//int removeElement(int* nums, int numsSize, int val) {
//	int i = 0;
//	int temp = 0;
//	int j = 0;
//	for (int k = 0; k<numsSize; i++)
//	{
//		if (nums[k] == val)
//		{
//			break;
//		}
//		else
//		{
//			return numsSize;
//		}
//	}
//	while (temp<numsSize)
//	{
//		if (j<numsSize&&nums[j] != val)//遇到val停下来
//		{
//			j++;
//			i++;
//			temp++;
//		}
//		temp += 1;
//		if (temp<numsSize&&nums[temp] != val)//遇到!val停下来
//		{
//			int tmp = nums[j];
//			nums[j] = nums[temp];
//			nums[temp] = tmp;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return j;
//}