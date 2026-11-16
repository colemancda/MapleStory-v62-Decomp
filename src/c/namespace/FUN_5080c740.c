/* FUN_5080c740 - 0x5080c740 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int __fastcall FUN_5080c740(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_5080d193(param_1,1);
  iVar2 = (*DAT_5081e704)();
  iVar3 = *(int *)((int)param_1 + 0x10);
  if (iVar3 != -1) {
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = (*DAT_5081e5f0)(iVar3);
    }
    if ((iVar3 == 0) || (iVar1 == 0)) {
      iVar1 = 0;
      if (iVar2 == 0) {
        iVar2 = (*DAT_5081e704)();
      }
    }
    else {
      iVar1 = 1;
    }
    *(undefined4 *)((int)param_1 + 0x10) = 0xffffffff;
  }
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  (*DAT_5081e708)(iVar2);
  return iVar1;
}


