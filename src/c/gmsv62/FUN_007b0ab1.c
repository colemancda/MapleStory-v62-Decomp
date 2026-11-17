/* FUN_007b0ab1 - 0x007b0ab1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b0ab1(void)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  undefined1 local_c [4];
  int local_8;
  
  iVar2 = FUN_0042459a();
  uVar1 = FUN_00424561();
  FUN_00455c59(local_c);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
  }
  if (uVar1 == 0) {
    FUN_0083ccd7(iVar2);
  }
  else {
    DVar3 = timeGetTime();
    uVar4 = DVar3 + (uint)uVar1 * 1000;
    if (iVar2 == 0x4fae6f) {
      uVar4 = (uint)uVar1;
    }
    FUN_0083cc0f(iVar2,uVar4);
  }
  return;
}


