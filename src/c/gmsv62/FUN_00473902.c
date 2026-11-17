/* FUN_00473902 - 0x00473902 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00473902(undefined2 *param_1,u_short param_2,u_long param_3)

{
  u_short uVar1;
  u_long uVar2;
  
  uVar2 = ntohl(param_3);
  uVar1 = ntohs(param_2);
  _memset(param_1,0,0x10);
  *(u_long *)(param_1 + 2) = uVar2;
  param_1[1] = uVar1;
  *param_1 = 2;
  return;
}


