cmd_/home/fenix/0/dev/linux_kernel/rick_roll/Module.symvers := sed 's/\.ko$$/\.o/' /home/fenix/0/dev/linux_kernel/rick_roll/modules.order | scripts/mod/modpost -m -a  -o /home/fenix/0/dev/linux_kernel/rick_roll/Module.symvers -e -i Module.symvers   -T -
