/* FUN_00544314 - 0x00544314 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00544314(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  FUN_00879bb8();
  uVar3 = *(int *)(unaff_EBP + 8) - 2000;
  *(uint *)(unaff_EBP + 8) = uVar3 & 1;
  iVar4 = *(int *)(extraout_ECX + 0x194);
  uVar3 = uVar3 >> 1;
  if ((*(uint *)(iVar4 + 0x5c) <= uVar3) || (1 < *(uint *)(unaff_EBP + 8))) goto LAB_00544598;
  iVar1 = *(int *)(iVar4 + 0x54) + uVar3 * 8;
  iStack_20 = *(int *)(iVar1 + 4);
  iVar2 = *(int *)(iStack_20 + 0x20);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  if (iVar2 < 0) goto LAB_00544598;
  iVar2 = *(int *)(iVar4 + 0x68);
  if (iVar2 == 1) {
    iStack_1c = *(undefined4 *)(DAT_00978368 + 0x2040);
    iStack_20 = iStack_20 + 0x34;
    iStack_24 = 0x544501;
    iVar4 = (*DAT_0097b4bc)();
    if (iVar4 != 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_24 = 0;
        iStack_28 = 0;
        iStack_2c = 0;
        uStack_30 = 0;
        *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
        FUN_00679d22(auStack_34,0x11b2);
        iVar4 = FUN_007db791();
        if (iVar4 == 6) {
          iStack_28 = 0x54453d;
          iStack_24 = iVar1;
          FUN_0052aee2();
        }
      }
      else {
        iStack_28 = 0x54454b;
        iStack_24 = iVar1;
        FUN_0052b0f0();
      }
      goto LAB_00544598;
    }
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
LAB_00544580:
    uVar6 = 0x116b;
  }
  else {
    if (iVar2 == 2) {
      iStack_1c = *(undefined4 *)(DAT_00978368 + 0x2040);
      iStack_20 = iStack_20 + 0x34;
      iStack_24 = 0x5444c9;
      iVar4 = (*DAT_0097b4bc)();
      if (iVar4 != 0) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_28 = 0x5444e6;
          iStack_24 = iVar1;
          FUN_0052b064();
        }
        goto LAB_00544598;
      }
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
      goto LAB_00544580;
    }
    if (iVar2 != 3) {
      if (iVar2 != 4) goto LAB_00544598;
      if (*(int *)(iVar4 + 0x6c) != 0) {
        iStack_1c = iVar1;
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_20 = 0x5443d2;
          FUN_0052b27c();
        }
        else {
          iStack_20 = 0x5443dc;
          FUN_0052b36a();
        }
        goto LAB_00544598;
      }
      iStack_1c = *(undefined4 *)(DAT_00978368 + 0x2040);
      iStack_20 = iStack_20 + 0x34;
      iStack_24 = 0x54439f;
      iVar4 = (*DAT_0097b4bc)();
      if (iVar4 != 0) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_28 = 0x5443b8;
          iStack_24 = iVar1;
          FUN_0052b167();
        }
        else {
          iStack_28 = 0x5443c2;
          iStack_24 = iVar1;
          FUN_0052b205();
        }
        goto LAB_00544598;
      }
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
      goto LAB_00544580;
    }
    iStack_1c = *(undefined4 *)(DAT_00978368 + 0x2040);
    iStack_20 = iStack_20 + 0x34;
    iStack_24 = 0x5443f7;
    iVar4 = (*DAT_0097b4bc)();
    if (iVar4 != 0) {
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_28 = 0x544410;
        iStack_24 = iVar1;
        FUN_0052afd0();
      }
      else {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iVar4 = *(int *)(extraout_ECX + 0x194);
        iVar2 = *(int *)(iVar4 + 0x1d50);
        iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x108);
        iStack_24 = 0x1173;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar4 = *(int *)(iVar4 + 0x1d54);
        iStack_28 = unaff_EBP + -0x10;
        iStack_2c = 0x544455;
        puVar5 = (undefined4 *)FUN_00679d22();
        iStack_28 = *puVar5;
        iStack_2c = unaff_EBP + 8;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_30 = 0x544466;
        iStack_24 = ((iVar2 + 100) * iVar1) / 100 + iVar4;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_24 = 0x544474;
        FUN_00414ebb();
        iStack_24 = 0;
        iStack_28 = 0;
        iStack_2c = 0;
        uStack_30 = 0;
        *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
        FUN_00450368(unaff_EBP + 8);
        iVar4 = FUN_007db791();
        if (iVar4 == 6) {
          iStack_24 = *(undefined4 *)(unaff_EBP + -0x14);
          iStack_28 = 0x5444a2;
          FUN_0052af59();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_24 = 0x5444ae;
        FUN_00414ebb();
      }
      goto LAB_00544598;
    }
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_34;
    uVar6 = 0x11bb;
  }
  iStack_24 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  FUN_00679d22(auStack_34,uVar6);
  FUN_007db3ad();
LAB_00544598:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


