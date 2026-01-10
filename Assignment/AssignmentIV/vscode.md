**檔案：`vscode.md`**
```markdown
# VS Code 開發環境配置筆記

本專案全程在 VS Code 環境下開發。

## 1. 使用的情境說明 (Context)
在實作 **Assignment IV** 時，因為涉及 C 和 C++ 兩個版本的對照開發，我利用 VS Code 的「分割視窗」功能同時編輯 `hash_fn.c` 與 `hash_fn.cpp`。這幫助我確保兩套語言在邏輯處理（尤其是中平方法的字串擷取部分）保持一致。

## 2. 核心外掛配置
* **C/C++ (IntelliSense)**：提供代碼補完與語法檢查，減少了我在寫 C23 標準語法時的錯誤。
* **Makefile Tools**：搭配我寫的 Makefile，可以一鍵編譯 C/C++ 版本並輸出到 build 資料夾，效率極高。

## 3. 版本控制流程
我使用 VS Code 內建的 **Source Control** 視圖進行 Commit 管理。
* 在實作中平方法時，我先 Commit 了 Division 版，確保基礎邏輯正確後，再進行進階演算法的修改。這種「分階段提交」讓我在除錯時非常有安全感。

## 4. 個人心得
透過 VS Code 整合 Terminal 直接執行 `./build/hash_c`，我可以快速觀察不同 $m$ 值下的輸出數據。這種快速迭代的過程對於完成這次的 Analysis 報告非常有幫助。
