/* ptr_00616976 - 0x00616976 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_00616976(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  for (; (iVar1 = *(int *)(param_1 + 0x7c), iVar1 != 0 && (param_2 < *(uint *)(iVar1 + -4)));
      param_2 = param_2 + 1) {
    if (*(int *)(iVar1 + param_2 * 4) == param_3) {
      return 1;
    }
  }
  return 0;
}


