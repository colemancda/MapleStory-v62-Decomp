/* FUN_00714b32 - 0x00714b32 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00714b32(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if ((iVar3 == 0x202) || (iVar3 == 0x203)) {
    iStack_18 = *(undefined4 *)(unaff_EBP + 0x14);
    iStack_1c = *(undefined4 *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + -0x14) = extraout_ECX + -4;
    iStack_20 = 0x714b6c;
    iStack_18 = FUN_00714d89();
    if ((iVar3 == 0x202) && (*(int *)(extraout_ECX + 0x84) != iStack_18)) {
      *(int *)(extraout_ECX + 0x84) = iStack_18;
      if ((iStack_18 < 0) || (9 < iStack_18)) {
        iVar3 = *(int *)(*(int *)(extraout_ECX + 0x7c) + 4);
        iStack_18 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(extraout_ECX + 0x7c) + 4);
        iStack_18 = 1;
      }
      iStack_1c = 0x714c81;
      (**(code **)(iVar3 + 0x1c))();
      iStack_1c = 0;
      iStack_20 = 0x714c8a;
      FUN_008161f1();
      goto LAB_00714c45;
    }
    if ((iVar3 == 0x203) && (-1 < iStack_18)) {
      iStack_1c = 0x714b9e;
      puVar2 = (undefined4 *)FUN_005d1241();
      uVar1 = *puVar2;
      iStack_1c = unaff_EBP + 0x14;
      iStack_20 = 0x714bb0;
      iStack_18 = uVar1;
      FUN_0045a1d8();
      iStack_18 = 0xde4;
      iStack_1c = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_20 = 0x714bc6;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_1c = *puVar2;
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      iStack_18 = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_20 = unaff_EBP + 0x10;
      uStack_24 = 0x714bdc;
      iStack_18 = FUN_00434e21();
      *(undefined4 *)(unaff_EBP + 8) = 0;
      iStack_1c = 0x714beb;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_18 = 0x714bf7;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_18 = 0x714c03;
      FUN_00414ebb();
      iStack_18 = 0;
      iStack_1c = 0;
      iStack_20 = 0;
      uStack_24 = 0;
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
      FUN_00450368(unaff_EBP + 8);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        iStack_1c = 0x714c98;
        iStack_18 = uVar1;
        FUN_00718ea5();
        iStack_18 = 0x714ca3;
        FUN_0083cb3e();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_18 = 0x714cae;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_18 = 0x714cba;
        FUN_00414ebb();
        goto LAB_00714c45;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_18 = 0x714c2e;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_18 = 0x714c3a;
      FUN_00414ebb();
    }
  }
  iStack_18 = 0x714c45;
  FUN_0074d6fb();
LAB_00714c45:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


