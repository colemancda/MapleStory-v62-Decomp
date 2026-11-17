/* FUN_005d64a1 - 0x005d64a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005d64a1(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_0042452b();
  uVar3 = FUN_0042459a();
  if (cVar1 == '\0') {
    FUN_005d5208(uVar3);
  }
  else {
    uVar2 = FUN_0042452b();
    FUN_005d511d(cVar1,uVar3,uVar2,param_1);
  }
  return;
}


