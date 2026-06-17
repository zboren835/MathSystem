#!/bin/bash

# 定義變數
SOURCE_FILE="MathSystem.cpp"
SECRET_FILE=".secrets"
OUTPUT_BIN="demo"

echo "正在編譯 $SOURCE_FILE..."

# 使用 g++ 編譯（-std=c++17 可依需求調整，-o 指定輸出檔名）
g++ -std=c++17 $SOURCE_FILE -o $OUTPUT_BIN

if [ ! -f "$SECRET_FILE" ]; then
    echo "錯誤：找不到密碼檔案 $SECRET_FILE"
    exit 1
fi

# 檢查上一個指令（編譯）是否成功
#!/bin/bash

# 設定正確的帳密（寫死在腳本中，適合本機個人小工具）
CORRECT_USER="admin"
DB_PASSWORD=$(cat "$SECRET_FILE")
read -p "使用者名稱: " input_user
read -s -p "請輸入密碼: " input_pass
echo ""

if [ "$input_user" == "$CORRECT_USER" ] && [ "$input_pass" == "$DB_PASSWORD" ]; then
    echo "【驗證成功】歡迎進入系統！"
    if [ $? -eq 0 ]; then
    	echo "編譯成功！開始執行..."
    	echo "--------------------------------"
    	./$OUTPUT_BIN
    	echo "--------------------------------"
    else
    	echo "編譯失敗，請檢查程式碼。"
    fi
else
    echo "【驗證失敗】帳號或密碼錯誤，程式終止。"
    exit 1
fi

