# Depth Determination Problem
題目說明：

給定一串指令並依照指令M(MAKE-TREE), F(FIND-DEPTH), G(GRAFT), E(END)分別依序處理執行建樹、找深度、合併樹或結束，並在處理F(FIND-DEPTH)指令時輸出該node之DEPTH值。

輸入:

每筆測試資料的每一行第一位數為指令(M,F,G or E)，M v表示MAKE-TREE(v) v表示node編號(node編號<=1000,指令與編號間以空白鍵隔開), F v表示FIND-DEPTH(v) v代表要輸出DEPTH值之node編號(指令與編號間以空白鍵隔開), G r v表示(GRAFT(r, v))其r值表示the root of a tree而且r為the child of node v (此node v可以是root或不是)，指令G與r, r與v間以空白鍵隔開，當指令為E時表示處理指令結束(測資結束)

輸出:

螢幕輸出。

依據輸入指令F(FIND-DEPTH)輸出其node編號及DEPTH(從0開始)值，node編號與DEPTH值中間請用空白鍵格開。

Example：

input:

M 1

M 2

M 3

M 4

M 5

G 1 2

G 3 2

G 4 2

G 5 4

F 5

M 6

M 7

G 7 6

G 6 2

F 6

E

output:

5 2

6 1
