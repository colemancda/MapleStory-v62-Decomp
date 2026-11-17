/* FUN_006c67c0 - 0x006c67c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006c67c0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00815f0f(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  if ((param_4 != (int *)0x0) && (*param_4 != 0)) {
    return iVar2;
  }
  iVar2 = FUN_006c69a5(param_2,param_3);
  if (iVar2 != -1) {
    if (iVar2 < 0x5b) {
      if (iVar2 == 0x36) {
        iVar2 = 0x2a;
      }
      cVar1 = *(char *)(iVar2 * 5 + 4 + DAT_00979110);
    }
    else {
      if (*(int *)(param_1 + 0x568 + iVar2 * 0xc) != 0) {
        return 1;
      }
      if (iVar2 < 0x5b) {
        return 2;
      }
      cVar1 = *(char *)(param_1 + iVar2 * 0xc + 0x560);
    }
    if (cVar1 != '\0') {
      return 2;
    }
  }
  return 1;
}


