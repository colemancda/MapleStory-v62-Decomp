/* FUN_005f932b - 0x005f932b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f932b(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_c = 0x5f9339;
  cVar1 = FUN_0042452b();
  uStack_c = 6;
  if (cVar1 == '=') {
    uVar2 = 0x1e8;
  }
  else {
    uVar2 = 0x1e9;
  }
  FUN_00679d86(auStack_10,uVar2);
  FUN_005c152d();
  return;
}


