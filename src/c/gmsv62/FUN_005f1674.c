/* FUN_005f1674 - 0x005f1674 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f1674(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0042452b();
  uVar2 = FUN_0042459a();
  if (cVar1 == '\0') {
    FUN_005f1249(uVar2);
  }
  else {
    FUN_005f11a4(uVar2,param_1);
  }
  return;
}


