nstr, mstr = input().split(' ')
n = int(nstr)
m = int(mstr)
servers = {}

for i in range(n):
    name, ip = input().split(' ')
    servers[ip + ';'] = name

for i in range(m):
    cmd, ip = input().split(' ')
    print(cmd, ip, "#"+ servers[ip])
