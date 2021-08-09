# ta sử dụng python để tính toán số nguyên lớn cho dễ =))
t = int(input()) # nhập biến t
F = [] # khai báo list(mảng trong c++) rỗng

# khởi tạo mảng list ban đầu bằng 0
for i in range(105):
    F.append(0)

# hàm tính số catalan 
def catalan_number():
    for n in range(1,102):
        for i in range(n):
            F[n] = F[n] + F[i] * F[n-i-1]

# hàm khởi tạo lại list sau mỗi bước lặp cho nó bằng 0
def set_list_equal_to_0():
    for i in range(105):
        F[i] = 0

while t > 0:
    a = int(input())
    set_list_equal_to_0()
    F[0] = 1
    catalan_number()
    print(F[a])
    t = t - 1

