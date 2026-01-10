# 線性資料結構探討：Stack 與 Queue 的特性與實作分析


---

## 1. 堆疊 (Stack) — 後進先出 (LIFO) 機制

Stack 是一種受限的線性結構，其運作遵循 **Last-In-First-Out (LIFO)** 原則。在程式運行中，Stack 是處理遞迴 (Recursion) 與函數呼叫 (Function Call) 的基礎。

### 核心運算與時間複雜度 (ADT)
| 操作 | 說明 | 時間複雜度 |
| :--- | :--- | :--- |
| **Push(x)** | 將元素壓入堆疊頂端，並更新 Top 指標 | $O(1)$ |
| **Pop()** | 移除並回傳頂端元素，需檢查 Underflow 狀態 | $O(1)$ |
| **Peek()** | 檢視頂端元素內容，不更動指標位置 | $O(1)$ |
| **IsEmpty()**| 判斷 Top 指標是否處於初始狀態 | $O(1)$ |

### 實作權衡 (Implementation Analysis)
* **Array-based**: 存取速度最快，但需預先宣告空間，存在 **Overflow** 風險。
* **List-based**: 動態分配記憶體，無大小限制，但每個節點需額外負擔指標 (Pointer) 的記憶體空間。

---

## 2. 隊列 (Queue) — 先進先出 (FIFO) 機制

Queue 模擬現實中的排隊邏輯，遵循 **First-In-First-Out (FIFO)** 原則。其關鍵在於維護 Front (前端) 與 Rear (後端) 兩個指標。

### 變體與優化實踐
1.  **環狀隊列 (Circular Queue)**: 
    * **分析**: 為了解決線性陣列實作中，空間無法重複利用導致的「假性滿額」問題。
    * **邏輯**: 使用取模運算 `(rear + 1) % capacity` 讓指標循環，達到 $O(1)$ 的空間回收效率。
2.  **雙端隊列 (Deque)**: 
    * 允許在 Front 與 Rear 同時進行 Push 與 Pop，具備更高的操作靈活性。

### 核心運算 (ADT)
| 操作 | 說明 | 複雜度 |
| :--- | :--- | :--- |
| **Enqueue(x)** | 於 Rear 端加入元素 | $O(1)$ |
| **Dequeue()** | 於 Front 端移除元素 | $O(1)$ |

---

## 3. 技術對比與應用場景分析

| 特性項目 | Stack ($LIFO$) | Queue ($FIFO$) |
| :--- | :--- | :--- |
| **存取限制** | 僅限單端 (Top) 操作 | 雙端 (Front 出, Rear 進) 操作 |
| **典型應用** | 撤銷操作 (Undo)、括號匹配、DFS 演算法 | 任務排程 (Scheduling)、緩衝區、BFS 演算法 |
。
Gemini AI prompt:利用stack_and_queue檔案整理一份詳細筆記
