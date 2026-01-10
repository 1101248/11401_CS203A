# 🚀 資料結構期末考：全章節終極複習筆記

## 第一部分：雜湊 (Hashing)
**核心目標**：在平均情況下實現 $O(1)$ 的快速查找、插入與刪除。

### 1. 基本概念
* **定義**：雜湊表 (Hash Table) 儲存鍵值對 (Key-Value pairs)，透過 **雜湊函數 ($h(k)$)** 將鍵 (Key) 轉換為陣列索引 (Bucket)。
* **雜湊函數特性**：
    * **決定性 (Deterministic)**：相同鍵必產生相同結果。
    * **均勻性 (Uniform)**：將鍵均勻分佈，避免碰撞。
    * **高效性 (Efficient)**：計算速度快。
* **負載因子 (Load Factor, $\alpha$)**：$\alpha = n/m$（元素數 / 表大小）。$\alpha$ 過高時效能會大幅下降。

### 2. 碰撞處理 (Collision Handling)


| 方法 | 機制 | 缺點 |
| :--- | :--- | :--- |
| **鏈結法 (Chaining)** | 每個 Bucket 儲存一個 Linked List。 | 需要額外指標空間。 |
| **開放定址法 (Open Addressing)** | 若位置被佔用，則按規則尋找下一個空位。 | 效能受 $\alpha$ 影響巨大。 |
| **- 線性探測 (Linear)** | $(h(k) + i) \mod m$ | **主要群聚 (Primary Clustering)**。 |
| **- 平方探測 (Quadratic)** | $(h(k) + c_1 i + c_2 i^2) \mod m$ | 可能產生次要群聚。 |
| **- 雙重雜湊 (Double)** | 使用第二個雜湊函數決定步長。 | 分佈最均勻。 |

---

## 第二部分：樹 (Trees)
**核心目標**：表達非線性的階層關係 (Hierarchy)。

### 1. 關鍵種類
* **二元樹 (Binary Tree)**：每個節點最多兩個子節點。
* **二元搜尋樹 (BST)**：左子樹 $<$ 根節點 $<$ 右子樹。搜尋效率平均 $O(\log n)$，最差退化至 $O(n)$。
* **AVL Tree**：自我平衡 BST，左右子樹高度差 $\le 1$，保證 $O(\log n)$。
* **表示法**：「左孩子-右兄弟」法可將一般樹轉為二元樹。

### 2. 樹的走訪 (Traversal)


1. **深度優先 (DFS)**：
   * **前序 (Preorder)**: Root $\to$ L $\to$ R
   * **中序 (Inorder)**: L $\to$ Root $\to$ R (**BST 排序輸出**)
   * **後序 (Postorder)**: L $\to$ R $\to$ Root
2. **廣度優先 (BFS)**：
   * **層序 (Level-order)**: 使用 **佇列 (Queue)** 逐層訪問。

---

## 第三部分：堆積 (Heaps)
**核心目標**：實作 **優先佇列 (Priority Queue)**，快速存取極值。

### 1. 結構與性質
* **形狀性質**：必須是 **完全二元樹 (Complete Binary Tree)**，因此可用陣列 (Array) 高效儲存。
* **順序性質**：
   * **Max Heap**：父節點 $\ge$ 子節點（根為最大值）。
   * **Min Heap**：父節點 $\le$ 子節點（根為最小值）。

### 2. 關鍵操作
* **Insert (Sift-up)**: $O(\log n)$。
* **Extract-Root (Sift-down)**: $O(\log n)$。
* **Build Heap**: $O(n)$。



---

## 第四部分：圖 (Graphs)
**核心目標**：表達物件間的多對多關係。

### 1. 表示法比較
| 特性 | 鄰接矩陣 (Adjacency Matrix) | 鄰接串列 (Adjacency List) |
| :--- | :--- | :--- |
| **定義** | $V \times V$ 二維陣列 | 頂點的鄰居清單 |
| **空間複雜度** | $O(V^2)$ | $O(V + E)$ |
| **適用場景** | 稠密圖 (Dense Graph) | 稀疏圖 (Sparse Graph) |

### 2. 圖的走訪
與樹不同，圖必須記錄 `visited` 陣列以防循環 (Cycles)。
* **BFS**：使用 **Queue**，適合找無權圖的最短路徑。
* **DFS**：使用 **Stack** 或遞迴，適合路徑回溯。

---

## 💡 綜合比較總結

### 1. 樹 vs. 圖
| 特性 | 樹 (Tree) | 圖 (Graph) |
| :--- | :--- | :--- |
| **循環 (Cycle)** | 無 (Acyclic) | 可能有 (Cyclic) |
| **連通性** | 總是連通 | 可能不連通 |
| **走訪** | 不需 `visited` 陣列 | **必須**使用 `visited` 陣列 |

### 2. BST vs. Heap
* **搜尋**：BST 搜尋任意值為 $O(\log n)$；Heap 搜尋任意值為 $O(n)$。
* **用途**：BST 用於動態排序；Heap 用於快速取出極值 ($O(1)$)。

---

## 🧠 類比記憶法
* **Hash Table**：圖書館索引卡。
* **Tree**：公司組織圖。
* **Heap**：急診室檢傷分類。
* **Graph**：城市地圖導航。

NOTEBOOKLLLM AI prompt:生成複習資料
