#include <linux/syscalls.h>
#include <linux/kernel.h>

asmlinkage long sys_nice_inc(pid_t pid, int value){

	struct task_struct *task;
	
	for(task = next_task(&init_task); task != &init_task; task = next_task(task)){ 
		if(task->pid == pid){
			task->nice_inc = value;
			printk(KERN_INFO "Nice inc value of pid: %d, is: %d", task->pid, value);
			break;
		}
	}
	
	
}
