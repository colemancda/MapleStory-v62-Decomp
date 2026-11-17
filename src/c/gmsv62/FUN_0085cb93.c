/* FUN_0085cb93 - 0x0085cb93 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085cb93(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = FUN_0042459a();
  iVar3 = FUN_0085cc85(uVar2);
  if (-1 < iVar3) {
    iVar1 = *(int *)(param_1 + 4);
    FUN_004b657c(param_2);
    uVar4 = FUN_0042452b();
    *(uint *)(iVar1 + iVar3 * 4) = uVar4 & 0xff;
    if (param_3 != 0) {
      FUN_0085cbe8(iVar3);
    }
  }
  return;
}


