//
// Created by 刘鹏 on 2020/6/17.
//

#include "Paly25.h"

ListNode25 *Paly25::reverseKGroup(ListNode25 *head, int k) {
    if(k <= 1 || head == nullptr) return head;
    ListNode25* flag = new ListNode25(0);
    int i = 0;
    ListNode25* pre = flag;//本k个节点之前，已经反转完的节点的最后一个
    ListNode25* queueH = flag;//本轮k个节点的开头第一个
    ListNode25* tmp = flag;//用来进行反转的临时节点
    ListNode25* tmp1 = flag;//同上
    while(head){
        i = 0;
        queueH = head;//将其变为本k个节点中第一个节点
        tmp = head->next;
        while(i < k-1){
            if(tmp == nullptr) break;
            tmp1 = tmp->next;
            tmp->next = head;
            head = tmp;
            tmp = tmp1;
            i++;
        }
        if(!tmp) break;//大循环真正的出口
        pre->next = head;
        head = tmp1;
        pre = queueH;
    }
    pre->next = head;//无论什么情况退出上一个循环必须先把以前反转过后的节点和这一轮反转的接上。
    if(!tmp && i != k-1){//这是因为在k个中不够，即最后一组没有k个节点，需要把他们变回原来的顺序。
        tmp = head->next;
        head->next = nullptr;
        while(tmp && tmp->next != head){
            tmp1 = tmp->next;
            tmp->next = head;
            head = tmp;
            tmp = tmp1;
        }
        pre->next = tmp? tmp: head;

    }
    if(i == k -1) queueH->next = nullptr;//这是刚好元素个数是k的整数倍，只需要把最后一个元素的所指变为空即可
    return flag->next;
}

