////1.ɾ�������е�����ֵΪval�Ľ��
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
////2.����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ��
//���� nums = [3, 2, 2, 3], val = 3,
//����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

//���� nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,
//����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��
//ע�������Ԫ�ؿ�Ϊ����˳��
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

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
///ʧ�ܣ���������������������������������


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
//		if (j<numsSize&&nums[j] != val)//����valͣ����
//		{
//			j++;
//			i++;
//			temp++;
//		}
//		temp += 1;
//		if (temp<numsSize&&nums[temp] != val)//����!valͣ����
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