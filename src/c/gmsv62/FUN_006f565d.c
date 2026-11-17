/* FUN_006f565d - 0x006f565d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * __thiscall FUN_006f565d(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int local_24 [5];
  int local_10;
  int local_c;
  int *local_8;
  
  if ((param_2 != 0) && (local_8 = param_1, iVar1 = FUN_006f563a(0), iVar1 != 0)) {
    if (param_2 < 0x80) {
      iVar1 = (int)param_2 / 0x20;
      local_24[0] = 0;
      local_24[1] = 0;
      local_24[2] = 0;
      local_24[3] = 0;
      local_10 = 0;
      if (iVar1 < 4) {
        iVar3 = 0xc;
        local_c = iVar1 << 2;
        iVar1 = 4 - iVar1;
        iVar2 = 0;
        do {
          lVar4 = __allshl();
          lVar4 = lVar4 + CONCAT44(local_10,iVar2);
          local_10 = (int)((ulonglong)lVar4 >> 0x20);
          iVar2 = iVar3 - local_c;
          iVar3 = iVar3 + -4;
          *(int *)((int)local_24 + iVar2) = (int)lVar4;
          iVar1 = iVar1 + -1;
          iVar2 = local_10;
          local_10 = local_10 >> 0x1f;
        } while (iVar1 != 0);
      }
      *local_8 = local_24[0];
      local_8[1] = local_24[1];
      local_8[2] = local_24[2];
      local_8[3] = local_24[3];
      param_1 = local_8;
    }
    else {
      FUN_006f55f3(0);
    }
  }
  return param_1;
}


