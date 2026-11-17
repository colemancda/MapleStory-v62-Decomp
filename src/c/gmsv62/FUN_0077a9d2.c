/* FUN_0077a9d2 - 0x0077a9d2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_0077a9d2(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2 + -6;
  iVar2 = param_4 * 0x21;
  param_4 = 0;
  for (param_2 = 0;
      (iVar3 = *(int *)(param_1 + 0x14), iVar3 != 0 && (param_2 < *(uint *)(iVar3 + -4)));
      param_2 = param_2 + 1) {
    iVar3 = (*DAT_0097b57c)(param_4 + 4 + iVar3,iVar1,iVar2 + -0x35 + param_3);
    if (iVar3 != 0) {
      return param_2;
    }
    param_4 = param_4 + 0x14;
  }
  return 0xffffffff;
}


