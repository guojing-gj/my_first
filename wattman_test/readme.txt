1.python3 实现 发布两个topic 名字分别为
/test_name       字符串值为  "wattman"
/test_index        只包含一个数字，从0开始每发一次消息累加1  例：0，1，2，3，4，5
2. 写一个名为 record_data.sh 的bash 脚本  功能为  将上面的两个 /test_name , /test_index 录制10秒rosbag 
3. 播放 test.bag, 编写c++ 程序实现: 订阅其中的  /livox/lidar  这个topic (frame_id = "livox_frame")并将其中的任意一帧保存为test.pcd 文件，并可通过pcl_viewer 查看该文件
将1 和 3 这两个程序放到同一ros 工程中，最后将  两个程序，record_data.sh，test.bag  都提交到自己的 github 上  设置为  开放下载，地址链接发给我
