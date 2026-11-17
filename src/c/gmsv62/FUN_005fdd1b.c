/* FUN_005fdd1b - 0x005fdd1b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fdd1b(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x6f8) == 0) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_28 = extraout_ECX + 0x6c;
    uStack_2c = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_30;
    FUN_00679d22(auStack_30,0x1d6);
    iVar1 = FUN_007db791();
    if ((iVar1 == 6) && (*(int *)(extraout_ECX + 0xaa0) == 1)) {
      iStack_20 = 0;
      uStack_24 = 0;
      iStack_28 = 0x6f;
      uStack_2c = 0x5fdd75;
      FUN_0060142b();
      iStack_20 = 0x2e;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_24 = 0x5fdd82;
      FUN_00457cda();
      iStack_20 = unaff_EBP + -0x20;
      uStack_24 = 0x5fdd91;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x6f8) = 1;
      iStack_20 = 0x5fdda7;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


