/* FUN_0052b167 - 0x0052b167 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052b167(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x18) == 0) {
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    *(undefined1 **)(unaff_EBP + -0x10) = auStack_30;
    FUN_00679d22(auStack_30,0x11b2);
    iVar1 = FUN_007db791();
    if (iVar1 == 6) {
      iStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0xd9;
      uStack_2c = 0x52b1b5;
      FUN_0060142b();
      iStack_20 = 0x11;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_24 = 0x52b1c2;
      FUN_00457cda();
      iStack_20 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + 8) + 4) + 0x20);
      uStack_24 = 0x52b1d3;
      FUN_00457d37();
      iStack_20 = unaff_EBP + -0x20;
      uStack_24 = 0x52b1e2;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      iStack_20 = 0x52b1f5;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


