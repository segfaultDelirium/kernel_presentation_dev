cmd_/home/fenix/0/dev/linux_kernel/hello_world/modules.order := {   echo /home/fenix/0/dev/linux_kernel/hello_world/hello.ko; :; } | awk '!x[$$0]++' - > /home/fenix/0/dev/linux_kernel/hello_world/modules.order
