题意是给你一个链表，交换相邻两个的结点的顺序（不是交换val）。

一开始想的美滋滋，觉得只要while一下，每次交换当前点和下一个点的next指向就好了，后来发现之前的指向会因为后面节点位置的交换而改变，这就让我想到了回溯法……这样最先构造完成的就是最后的点了，然后一点一点往前，就好了。