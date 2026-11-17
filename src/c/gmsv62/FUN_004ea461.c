/* FUN_004ea461 - 0x004ea461 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ea461(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  iStack_1c = 0;
  uStack_20 = 500;
  uStack_24 = 0x4ea485;
  iVar2 = FUN_004becbc();
  if ((iVar2 != 0) && (DAT_00978358 != 0)) {
    iStack_1c = 0x4ea4a4;
    uVar3 = FUN_0045e4b8();
    if (((uVar3 & 1) == 0) && (0 < *(int *)(DAT_00978358 + 0x528))) {
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      uVar4 = 0x117;
    }
    else {
      iStack_1c = 0x4ea4cb;
      iVar2 = FUN_00429303();
      if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x108) & 0x10) == 0)) {
        iStack_1c = 0;
        uStack_20 = 0;
        uStack_24 = 0x24;
        uStack_28 = 0x4ea508;
        FUN_0060142b();
        iStack_1c = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uStack_20 = 0x4ea516;
        FUN_00457cda();
        iStack_1c = 0x4ea51b;
        iStack_1c = FUN_007d1e08();
        uStack_20 = 0x4ea524;
        FUN_00457d37();
        iStack_1c = unaff_EBP + -0x1c;
        uStack_20 = 0x4ea533;
        FUN_004751b2();
        *(undefined4 *)(iVar1 + 0x208c) = 1;
        iStack_1c = 0x4ea542;
        uVar4 = FUN_007d1e08();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x2090) = uVar4;
        iStack_1c = 0x4ea554;
        FUN_0045ebca();
        goto LAB_004ea554;
      }
      *(undefined1 **)(unaff_EBP + 8) = auStack_2c;
      uVar4 = 0x122;
    }
    iStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    FUN_00679d22(auStack_2c,uVar4);
    FUN_007db3ad();
  }
LAB_004ea554:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


