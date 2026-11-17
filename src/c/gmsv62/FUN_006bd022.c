/* FUN_006bd022 - 0x006bd022 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd022(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  iStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_34;
  FUN_00679d22(auStack_34,0xe41);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    iStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0x86;
    uStack_30 = 0x6bd06c;
    FUN_0060142b();
    iStack_24 = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_28 = 0x6bd079;
    FUN_00457cda();
    iStack_24 = *(undefined4 *)(*(int *)(extraout_ECX + 0x584) + 0xc);
    uStack_28 = 0x6bd08a;
    FUN_00457d37();
    iStack_24 = unaff_EBP + -0x20;
    uStack_28 = 0x6bd099;
    FUN_004751b2();
    if (*(int *)(extraout_ECX + 0x584) != 0) {
      iStack_24 = 0;
      uStack_28 = 0x6bd0af;
      FUN_006bdcf7();
      *(undefined4 *)(extraout_ECX + 0x584) = 0;
    }
    iStack_24 = 0x6bd0b9;
    FUN_006bd2ae();
    iStack_24 = 0x6bd0c0;
    FUN_006ba244();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_24 = 0x6bd0cc;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


