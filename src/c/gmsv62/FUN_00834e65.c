/* FUN_00834e65 - 0x00834e65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00834e65(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  iStack_24 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_28 = 0x834e7f;
  iVar2 = FUN_0083ae79();
  if (iVar2 != 0) {
    iStack_24 = 0x834e92;
    iVar2 = FUN_007b3c5d();
    if (iVar2 == 0) {
      iStack_24 = 0x834e9f;
      FUN_00429303();
      iStack_24 = 0x834eaa;
      FUN_004f162d();
      iStack_24 = 0x834eb7;
      bVar1 = FUN_0045e4b8();
      if ((bVar1 & 1) == 0) {
        iStack_24 = 0x834ec3;
        iVar2 = FUN_00429303();
        uVar3 = *(uint *)(iVar2 + 0x108) >> 2 & 1;
        *(uint *)(unaff_EBP + -0x10) = uVar3;
        if (uVar3 != 0) {
          iStack_24 = 0;
          uStack_28 = 0;
          uStack_2c = 0;
          uStack_30 = 0;
          *(undefined4 **)(unaff_EBP + 0xc) = &uStack_34;
          FUN_00679d22(&uStack_34,0x121);
          FUN_007db3ad();
          goto LAB_00834fbb;
        }
      }
      iStack_24 = 0x834f03;
      bVar1 = FUN_0045e4b8();
      if ((((bVar1 & 1) == 0) && (*(int *)(unaff_EBP + 0xc) / 1000 != 0x83d)) &&
         (*(int *)(unaff_EBP + 0xc) != 0x200b63)) {
        iStack_24 = 0;
        uStack_28 = 1;
        uStack_2c = 0;
        uStack_30 = 0;
        uStack_34 = 1000;
        *(undefined4 **)(unaff_EBP + -0x10) = &uStack_34;
        FUN_00679d22(&uStack_34,0x124);
        iVar2 = FUN_007db791();
        if (iVar2 != 6) goto LAB_00834fbb;
      }
      iStack_24 = 0;
      uStack_28 = 200;
      uStack_2c = 0x834f58;
      iVar2 = FUN_004becbc();
      if (iVar2 != 0) {
        iStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0x46;
        uStack_30 = 0x834f68;
        FUN_0060142b();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_24 = 0x834f70;
        iStack_24 = FUN_007d1e08();
        uStack_28 = 0x834f79;
        FUN_00457d37();
        iStack_24 = *(undefined4 *)(unaff_EBP + 8);
        uStack_28 = 0x834f84;
        FUN_0045d247();
        iStack_24 = *(undefined4 *)(unaff_EBP + 0xc);
        uStack_28 = 0x834f8f;
        FUN_00457d37();
        iStack_24 = unaff_EBP + -0x20;
        uStack_28 = 0x834f9e;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0x208c) = 1;
        iStack_24 = 0x834fa9;
        uVar4 = FUN_007d1e08();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x2090) = uVar4;
        iStack_24 = 0x834fbb;
        FUN_0045ebca();
      }
    }
  }
LAB_00834fbb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


