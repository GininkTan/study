python学习

# PYTHON 学习整理

# 八大基本数据类型

## 数字类型

```python
#整数类型
age =18
print(type(age))
#浮点类型
sllls=10.12
print(type(sllls))
a = 20
b = 6

print(a + b)   # 加法
print(a - b)   # 减法
print(a * b)   # 乘法
print(a / b)   # 除法
print(a // b)  # 整除
print(a % b)   # 取余
print(a ** b)  #幂运算
```

## 

## 字符串

```python
# 第一种 '' 第二种 "" 第三种""" """ 第四种 '''  '''
name = 'a'
name2 = "a"
name3 = """ a"""
# 格式化输出 %s
enceOne = " one %s two three"
print( enceOne %("name"))
# 格式化输出 format
enceTwo = " one {} two three" 
print(enceTwo .format("name"))
# {name} 关键字 
enceThree = " one {name} two three" 
print(enceThree.format(name="three"))
# f"{name}" 输出
name = "12"
enceFour =f" one  {name} "
print(enceFour)
# 重复字符串
print("ak" *3 )
#获取索引
s= "python"
print(s[0])
#获取负数索引
print(s[-1])
#字符串切片
print(s[0:2])
#字符串省略开始
print(s[:3])
#字符串省略结束
print(s[2:])
#字符串长度
print(len(s))
#字符串大小写转换
print("hello".upper())#大写
print("HELLO".lower())#小写
#字符串分割.split
s = "a,b,c"
print(s.split(","))
#字符串去空格
s ="   hello    "
print(s.strip())
#字符串替换 .replace()
s = "heeee"
print(s.replace("e","w"))
# 字符串find()
s= "python"
print(s.find("y"))
# 字符串判断是否是数字
print("123".isdigit())
# 字符串判断是否是字符串
print("sss".isalpha())
# 字符串转义字符 换行\n
print("hello \n hello")
# 多行字符串
text= """
HELLO 
python
"""
print(text)
```

## 列表

```python
#列表字符串类型
user_name =["ale", "sllf" ]
# 列表混合类型
data=[1,"name",3.14]
#列表获取元素
nums=[1,3,5]
print(nums[0])
#列表负数索引
print(nums[-1])
#修改列表元素
nums=[1,2,3]
nums[1]=100
print(nums)
#列表长度
print(len(nums))
#列表末尾添加append()
nums= [1,2,3,4]
nums.append(5)
print(nums)
# 列表指定位置插入insert()
nums.insert(0,1000) 

print(nums)
#列表按照值删除元素
nums.remove(1)
print(nums)
#列表按索引删除
nums = [1,2,3]
nums.pop(0)
print(nums)
#列表切片
nums= [1,2,3,4,5]
print(nums[1:2])
#遍历列表
names =["tom","mat","jrpe"]
for name in names:
    print(name)
#判断元素是否存在
nums =[1,2,3]
print(1 in nums)
#列表排序sort()
nums.sort()
print(nums)
#列表倒序排序
nums.sort(reverse = True)
print(nums)
#列表反转
nums =[1,2,3]
nums.reverse()
print(nums)
#列表拼接
a = [ 1 , 3 ]
b = [ 2 , 4 ]
print( a + b )
# 列表重复
print([1,3]*2)
# 列表嵌套 2维列表
matrix =[
        [1,2],
        [3,4]
        ]
print(matrix[0][1])
```

## 字典

```python

#字典Python 字典（dict）用于保存：键（key）值（value）
person_info ={
        "name":"dream",
        "age":19
        }
# 获取值
print(person_info["name"])
# 修改值
person_info["age"]=22
print(person_info)
#添加值
person_info["city"]="haerbin"
print(person_info)
#删除值
del person_info["age"]
print(person_info)
person_info.pop("name")
print(person_info)
#获取所有keys
print(person_info.keys())
#获取所有value 
print(person_info.values())
#获取所有键值对
print(person_info.items())
#判断key 是否存在
print(name in person_info)
# 使用get（） 推荐
# print(person_info["job"]) 没有会报错
print(person_info.get("job")) # 没有返回None
#设置默认值
print(person_info.get("job","no job"))
# 遍历字典
for  key in person_info:
    print(key)
#遍历key 和values
for key ,value in person_info.items():
    print(key,value)
#字典长度
print(len(person_info))
#清空字典
person_info.clear()
print(person_info)
#嵌套字典
student= {
        "name": "Tom",
        "score":{
            "math":90,
            "english":85
            }
        }

print(student["score"]["math"])
```

## 布尔类型

```python
#布尔类型
print(type(True))
#比较运算
print( 5 > 3 )
print( 5 >= 3 )
print( 5 < 3 )
print(5 <= 3)
print( 10 == 10)
print(10 !=5)

#逻辑运算
print(True and False)  # False
print(True or False)   # True
print(not True)        # False

#bool()
print(bool(0))
#布尔类型在判断中使用
age = 20

if age >=18:
    print("成年人")
else:
    print("未成年")


```

## 元组

```python
#元组类型
"""
Python 的 元组（tuple） 是一种 不可修改的序列类型，和列表很像，但不能修改、添加或删除元素。
它通常用于固定的数据集合，比如坐标、配置、函数返回值等。
元组不可修改
"""
#基本元组
t = (1,2,3)
print(t)
print(type(t))
# 单元素元组
single=(1,)
print(type(single))
not_tuple=(5)
print(type(not_tuple))
#访问元组元素
t =(10 ,20 ,30)
print(t[0])
print(t[-1])
#切片
print(t[0:2])
#元组不可修改但可以拼接
t1=(1,2)
t2=(3,4)
t3=t1+t2
#元组长度
t=(1,2,3)
print(len(t))
#遍历元组
t = ("tom","jack","lucy")
for name in t :
    print(name)
#判断元素是否在元组里
t = (1,2,3,4,5)
print(2 in t)
# 元组常用方法
t =(1,2,3,2)
print(t.count(2)) # 出现次数
print(t.index(3)) #第一次出现的索引
# 元组应用场景
#函数返回多个值
def get_point():
    return (10,20)
x,y =get_point()
print(x,y)
#用作字典的key
d={(1,2):"point"}
print(d[(1,2)])#point


```

##

