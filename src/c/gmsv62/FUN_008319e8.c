/* FUN_008319e8 - 0x008319e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008319e8(void)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  char *pcStack_20;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x2084) != 0) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    iStack_24 = unaff_EBP + 8;
    pcStack_20 = s_The_Cash_Shop_is_not_available_f_0096c710;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_28 = 0x831a19;
    FUN_00434e21();
    iStack_2c = unaff_EBP + 8;
    uStack_28 = 0xc;
    uStack_30 = 0x831a24;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00831ae6;
  }
  if (DAT_00978358 == 0) goto LAB_00831b84;
  if (*(int *)(DAT_00978358 + 0x528) < 1) {
    if (*(int *)(extraout_ECX + 0x208c) != 0) goto LAB_00831b84;
    pcStack_20 = (char *)0x831a6d;
    iVar1 = FUN_007d1e08();
    if (iVar1 - *(int *)(extraout_ECX + 0x2090) < 500) goto LAB_00831b84;
    if (*(int *)(extraout_ECX + 0x3294) == 0) {
      if (*(int *)(extraout_ECX + 0x3298) == 0) {
        pcStack_20 = (char *)0x831af5;
        iVar1 = FUN_00429303();
        uVar2 = *(uint *)(iVar1 + 0x108) >> 4 & 1;
        *(uint *)(unaff_EBP + -0x10) = uVar2;
        if (uVar2 == 0) {
          pcStack_20 = (char *)0x0;
          iStack_24 = 0;
          uStack_28 = 0x25;
          *(undefined4 *)(extraout_ECX + 0x3280) = *(undefined4 *)(unaff_EBP + 8);
          iStack_2c = 0x831b3f;
          FUN_0060142b();
          *(undefined4 *)(unaff_EBP + -4) = 3;
          pcStack_20 = (char *)0x831b4b;
          pcStack_20 = (char *)FUN_007d1e08();
          iStack_24 = 0x831b54;
          FUN_00457d37();
          pcStack_20 = (char *)(unaff_EBP + -0x20);
          iStack_24 = 0x831b63;
          FUN_004751b2();
          *(undefined4 *)(extraout_ECX + 0x208c) = 1;
          pcStack_20 = (char *)0x831b72;
          uVar3 = FUN_007d1e08();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
          pcStack_20 = (char *)0x831b84;
          FUN_0045ebca();
          goto LAB_00831b84;
        }
        *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
        uVar3 = 0x122;
        goto LAB_00831b15;
      }
      pcStack_20 = (char *)0xf0d;
      iStack_24 = unaff_EBP + -0x10;
      uStack_28 = 0x831ace;
      iStack_24 = FUN_00679d22();
      pcStack_20 = (char *)0xc;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      uStack_28 = 0x831add;
      FUN_00471102();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      pcStack_20 = (char *)0xc1b;
      iStack_24 = unaff_EBP + 8;
      uStack_28 = 0x831a99;
      iStack_24 = FUN_00679d22();
      pcStack_20 = (char *)0xc;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_28 = 0x831aa8;
      FUN_00471102();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
LAB_00831ae6:
    pcStack_20 = (char *)0x831aeb;
    FUN_00414ebb();
  }
  else {
    *(undefined4 **)(unaff_EBP + 8) = &uStack_30;
    uVar3 = 0x117;
LAB_00831b15:
    pcStack_20 = (char *)0x0;
    iStack_24 = 0;
    uStack_28 = 0;
    iStack_2c = 0;
    FUN_00679d22(&uStack_30,uVar3);
    FUN_007db3ad();
  }
LAB_00831b84:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


