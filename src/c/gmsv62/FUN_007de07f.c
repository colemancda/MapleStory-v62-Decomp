/* FUN_007de07f - 0x007de07f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_007de07f(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00978368;
  iVar2 = FUN_007ded8f(param_4,param_5);
  if (((iVar2 != -1) && (iVar2 != *(int *)(param_1 + 0x74))) &&
     ((*(int *)(param_1 + 0x80) != 0 || (*(int *)(*(int *)(iVar1 + 0x3270) + iVar2 * 4) == 0)))) {
    if (param_2 == 0x201) {
      *(int *)(param_1 + 0x70) = iVar2;
      FUN_008161f1(0);
    }
    else if (param_2 == 0x203) {
      (**(code **)(*(int *)(param_1 + -4) + 0x34))(1);
    }
  }
  return;
}


