/* ptr_0075fa01 - 0x0075fa01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_0075fa01(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0075fd4a(param_4,param_5);
  if ((param_2 == 0x202) && (*(int *)(param_1 + 0x94) != iVar1)) {
    *(int *)(param_1 + 0x94) = iVar1;
    FUN_008161f1(0);
  }
  return;
}


