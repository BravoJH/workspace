
default:	build

clean:
	rm -rf Makefile objs

build:
	$(MAKE) -f objs/Makefile
	$(MAKE) -f objs/Makefile manpage

install:
	$(MAKE) -f objs/Makefile install

upgrade:
	/mnt/hgfs/dworkspace/workspace/nginx-1.6.2/bin/sbin/nginx -t

	kill -USR2 `cat /mnt/hgfs/dworkspace/workspace/nginx-1.6.2/bin/logs/nginx.pid`
	sleep 1
	test -f /mnt/hgfs/dworkspace/workspace/nginx-1.6.2/bin/logs/nginx.pid.oldbin

	kill -QUIT `cat /mnt/hgfs/dworkspace/workspace/nginx-1.6.2/bin/logs/nginx.pid.oldbin`
