# randmod 

## Nội dung đồ án
Mục tiêu hiểu về Linux kernel module và hệ thống quản lý file và device trong linux, giao tiếp giữa tiến trình ở user space và code kernel space 
  + Viết một module dùng để tạo ra số ngẫu nhiên. 
  + Module này sẽ tạo một character device để cho phép các tiến trình ở userspace có thể open và read các số ngẫu nhiên.
  ### Sử dụng
  1. Mở Terminal `Ctrl` + `Alt` + `T`.
  2. Dùng lệnh `cd` để đi tới thư mục chứa mã nguồn. (vd: `cd Desktop/DA2`)
  3. Gõ lệnh `make` hoặc `make all`. Tiến trình sẽ dựa vào Makefile và Kbuild để biên dịch mã nguồn, tạo ra kernel module.
  4. Gõ lệnh `modinfo randmod.ko` để xem thông tin của module.
  5. Gõ lệnh `sudo insmod randmod.ko` để lắp module này vào kernel.
  6. Gõ lệnh `dmesg` để theo dõi quá trình hoạt động của module.
  7. Gõ lệnh `lsmod | grep randmod` để xem module đã được lắp hay chưa.
  8. Để test module ta có thể: `sudo dd if=/dev/randmod bs=4 count=1 | hexdump -C`. <br/>
     Hoặc dùng file test với lệnh: `make testmod; ./testmod`.
  9. Để gỡ module này, gõ lệnh `sudo rmmod randmod`.
  10. Để dọn sạch các file được tạo ra trong quá trình biên dịch, gõ lệnh `make clean`.
  ### Minh hoạ
  ![Ảnh minh hoạ](https://raw.githubusercontent.com/ffyyytt/randmod/main/demo.png?token=AKMAGSDPFMKYJN5TF56EYOK72SWXK)
