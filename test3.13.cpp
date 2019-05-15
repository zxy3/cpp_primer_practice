/**=================================================================================================
 * @file	test3.13.cpp.
 *
 * Implements the test 3.13 class
 * 练习 3.13: 下列的 vector 对象各包含多少个元素？ 这些元素的值分别是多少？
 * (a) vector<int> v1;        定义未初始化，无元素
 * (b)vector<int> v2(10);      定义10个int类型的对象
 * (c) vector<int> v3(10, 42);       定义10个int类型的对象，初始化为42
 * (d)vector<int> v4{10};      1个初始值为10的int对象
 * (e) vector<int> v5{10, 42};      定义2个int类型的对象，初始化为10 和 42
 * (f)vector<string> v6{10};     定义1个string类型的对象，初始化为10
 * (g) vector<string> v7{10, "hi"};        定义2个string类型的对象，初试化为10 和 “hi”
 * 
 * 书: 
 * vector<T> v1         v1 是一个空 vector, 它潜在的元素是T 类型的， 执行默认初始化
 * vector<T> v2(v1)   v2 中包含有 v1 所有元素的副本
 * vector<T> v2 = v1     等价亍 v2(v1), v2 中包含有 v1所有元素的副本
 * vector<T> v3(n, val)   v3 包含了 n 个重复的元素， 每个元素的值都是 val
 * vector<T> v4(n)  v4 包含了 n 个重复地执行了值初始化的对象
 * vector<T> v5{a,b,c...}          v5 包含了初始值个数的元素， 每个元素被赋予相应的初始值
 * vector<T> v5={a,b,c...}       等价于 v5{a,b,c...}
 *===============================================================================================**/
