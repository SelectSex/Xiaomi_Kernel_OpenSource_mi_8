rem  配置GIT，让其不要做NTFS保护，防止文件是WINDOWS的保留字 https://blog.csdn.net/vivo01/article/details/126343115
git config --local core.protectNTFS false
rem 本地替换为CRLF警告（仅针对项目）
git config --local core.autocrlf false
