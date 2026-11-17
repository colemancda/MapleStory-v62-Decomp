/* FUN_004b5a68 - 0x004b5a68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b5a68(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0042459a();
  FUN_0045e3a0(uVar2);
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    FUN_004245d2(param_1 + 0x18,8);
  }
  FUN_004245d2(param_1 + 0x20,8);
  return;
}


