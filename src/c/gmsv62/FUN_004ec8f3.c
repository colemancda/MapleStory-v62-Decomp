/* FUN_004ec8f3 - 0x004ec8f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ec8f3(void)

{
  char cVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x4ec8fe;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uStack_8 = 0;
    uStack_c = 0;
    uStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    FUN_00679d22(&uStack_18,0x121);
    FUN_007db3ad();
  }
  return;
}


