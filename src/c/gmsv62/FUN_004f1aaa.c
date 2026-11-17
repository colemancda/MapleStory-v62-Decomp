/* FUN_004f1aaa - 0x004f1aaa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004f1aaa(int *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  if (*param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*param_1 + -4);
  }
  iVar1 = param_2;
  if (param_2 == -1) {
    iVar1 = local_8;
  }
  FUN_004f391b(local_8 + 1,2,(int)&param_2 + 3);
  FUN_0087a3a0((iVar1 + 1) * 0x10 + *param_1,iVar1 * 0x10 + *param_1,
               (iVar1 * 0xfffffff + local_8) * 0x10);
  return;
}


