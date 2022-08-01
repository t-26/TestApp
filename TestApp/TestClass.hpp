/**
* @file TestClass.h
* @brief 簡単な説明
* @author 作成者
* @date 作成日
* @details 詳細な説明
*/

//  テスト
//  テスト
//  テスト

#ifndef TestClass_hpp
#define TestClass_hpp

#include <stdio.h>

/**
* @brief テストクラス 何もしない
* @details 詳細はここに書く
*/
class TestClass {
public:
    /**
    * @brief コンストラクタ
    */
    TestClass();

    /** デストラクタ */
    ~TestClass();
    
    /**
    * @brief func
    * @param[in] a 引数の説明
    * @param[in] b 引数の説明
    * @return int aとbの和を返す
    * @details 詳細な説明
    */
    int func(const int a, const int b);
    
    /**
    * @brief func2
    * @param[in] a 引数の説明
    * @param[in] b 引数の説明
    * @return int aとbの和を返す
    * @details 詳細な説明
    */
    int func2(const int a, const int b);

private:
    //! 変数 hoge あれこれ用途
    int hoge = 1;
};

#endif /* TestClass_hpp */
