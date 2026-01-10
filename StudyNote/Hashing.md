# Hashing (雜湊) 終極複習筆記

## I. 核心概念與優勢 (Core Concepts)

* **定義**: 雜湊表 (Hash Table) 透過 **雜湊函式 (Hash Function)** 將 **鍵 (Key)** 映射至陣列的 **索引 (Index)**，實現快速存取。
* **目標**: 在不遍歷所有元素的情況下，透過鍵快速尋找資料。
* **底層結構**: 使用 **陣列 (Array)** 作為桶 (Bucket) 儲存，並搭配連結清單或平衡樹處理衝突。
* **理想性能**: 插入、刪除與查詢的平均時間複雜度為 $O(1)$。

---

## II. 關鍵組成與雜湊函式

### 1. 核心組件表

| 組件 (Component) | 描述 (Description) |
| :--- | :--- |
| **Hash Table** | 實際儲存數據的陣列結構。 |
| **Key** | 待儲存的數據識別碼 (e.g., Student ID)。 |
| **Hash Function $h(k)$** | 將 Key 轉換為索引的數學邏輯。 |
| **Bucket / Slot** | 雜湊表中的單個陣列儲存位。 |
| **Load Factor ($\alpha$)** | $\alpha = n / m$ ($n$: 元素數, $m$: 表大小)。衡量表的擁擠程度。 |

### 2. 好的雜湊函式條件
1.  **確定性 (Deterministic)**: 相同的 Key 必得到相同 Index。
2.  **均勻性 (Uniform)**: 鍵值應均勻分散在桶中，避免過度碰撞。
3.  **高效率 (Efficient)**: 計算複雜度應為 $O(1)$。

---

## III. 衝突處理 (Collision Handling)



### 1. 鏈結法 (Separate Chaining)
每個桶子維護一個 **連結清單 (Linked List)**。
* **優點**: 實作簡單、不受 Load Factor $\alpha > 1$ 限制。
* **缺點**: 額外指針空間開銷；若鏈結過長，效能退化至 $O(n)$。

### 2. 開放定址法 (Open Addressing)
發生衝突時，依據特定規則在原陣列中尋找下一個空位。

| 探測方法 (Probing) | 運算邏輯 | 缺點 |
| :--- | :--- | :--- |
| **線性探測 (Linear)** | $h(k, i) = (h'(k) + i) \pmod m$ | **主要群集 (Primary Clustering)**：數據容易連成一坨。 |
| **二次探測 (Quadratic)** | $h(k, i) = (h'(k) + i^2) \pmod m$ | **次要群集 (Secondary Clustering)**。 |
| **雙重雜湊 (Double)** | $h(k, i) = (h_1(k) + i \cdot h_2(k)) \pmod m$ | 效率最高，分散效果最接近均勻分布。 |

---

## IV. 效能分析與複雜度

| 操作 (Operation) | 平均 (Average Case) | 最差 (Worst Case) | 備註 |
| :--- | :--- | :--- | :--- |
| **插入 (Insert)** | $O(1)$ | $O(n)$ | 最差情況發生於所有 Key 都映射到同一索引。 |
| **刪除 (Delete)** | $O(1)$ | $O(n)$ | Open Addressing 刪除需使用標記 (Dummy node)。 |
| **查詢 (Search)** | $O(1)$ | $O(n)$ | 效能隨 Load Factor $\alpha$ 增加而下降。 |

---
Gemini AI prompt:使用11_hashing檔案整理重點幫我用一份詳細的筆記複習
