n个链表的合并……首先直接暴力肯定是不行的，那就考虑把找的方式优化到logn，于是我就想到了优先队列了……

只要把所有的链表头存在优先队列里，然后定义一下里面的排序方式，就好了。

    struct cmp{
            bool operator ()(const typename a,const typename b)
            {
                return a > b;
            }
        };

这样定义完结构体之后，可以这样定义优先队列，`priority_queue<name,vector<name>,cmp>`

需要注意的是优先队列里默认重载小于号，所以大小要反一下。