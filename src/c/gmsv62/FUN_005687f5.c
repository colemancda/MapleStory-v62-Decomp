/* FUN_005687f5 - 0x005687f5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 * FUN_005687f5(void)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int extraout_ECX;
  undefined4 *puVar8;
  int unaff_EBP;
  undefined4 uVar9;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  
  puVar5 = (undefined4 *)FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xf4) == 0) goto LAB_00568bd1;
  uVar2 = FUN_0042452b();
  switch(uVar2) {
  case 0:
    uVar7 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x18) = uVar7 & 0xff;
    bVar4 = FUN_0042452b();
    *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x120;
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (bVar4 != 0) {
      *(uint *)(unaff_EBP + -0x14) = (uint)bVar4;
      do {
        iVar6 = *(int *)(extraout_ECX + 0x108);
        *(int *)(extraout_ECX + 0x108) = iVar6 + 1;
        FUN_004b50bc();
        FUN_004b876a();
        *(undefined4 *)(*(int *)(extraout_ECX + 0x11c) + iVar6 * 4) =
             *(undefined4 *)(unaff_EBP + -0x18);
        cVar3 = FUN_0042452b();
        if (cVar3 == '\0') {
          uStack_2c = 0x568ae8;
          _memset((void *)(iVar6 * 0x10 + *(int *)(extraout_ECX + 0x110)),0,0x10);
        }
        else {
          FUN_004245d2();
        }
        piVar1 = (int *)(unaff_EBP + -0x14);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piVar1 = (int *)(extraout_ECX + 0x124);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(extraout_ECX + 0x120) = 0;
    }
    *(int *)(unaff_EBP + 8) = extraout_ECX + 0x128;
    FUN_00402aba();
    *(int *)(extraout_ECX + 0x100) = *(int *)(extraout_ECX + 0x100) + -1;
    puVar5 = *(undefined4 **)(unaff_EBP + 8);
    if (0 < *(int *)(extraout_ECX + 0x100)) {
      piVar1 = puVar5 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar5 = 0;
      }
      goto LAB_00568bd1;
    }
    piVar1 = puVar5 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *puVar5 = 0;
    }
    FUN_00568c02();
    FUN_00564909();
    if (DAT_00979414 != 0) goto LAB_00568bc8;
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(extraout_ECX + 0x120);
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iVar6 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x1c) = iVar6;
    *(undefined1 *)(unaff_EBP + -4) = 6;
LAB_00568b81:
    puVar8 = (undefined4 *)(extraout_ECX + 0x120);
    puVar5 = (undefined4 *)0x0;
    if (iVar6 != 0) {
      puVar5 = (undefined4 *)FUN_0057492e();
    }
    break;
  case 1:
    *(undefined4 **)(unaff_EBP + -0x18) = (undefined4 *)(extraout_ECX + 0x128);
    FUN_00402aba();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar9 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x100) = uVar9;
    uVar9 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x104) = uVar9;
    piVar1 = (int *)(extraout_ECX + 300);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(extraout_ECX + 0x128) = 0;
    }
    if ((*(int *)(extraout_ECX + 0x100) != 0) && (*(int *)(extraout_ECX + 0x104) != 0)) {
      FUN_0056aa6e();
      FUN_0056aae5();
      puVar5 = (undefined4 *)FUN_0056a92f();
      goto LAB_00568bd1;
    }
    FUN_0056874a();
    FUN_00568c7a();
    *(undefined1 **)(unaff_EBP + 8) = auStack_30;
LAB_005689b1:
    uStack_2c = 0;
    FUN_00679d22(auStack_30,0xf4f);
    FUN_007db3ad();
    puVar5 = (undefined4 *)FUN_005699cf();
    goto LAB_00568bd1;
  case 2:
    FUN_0056874a();
    FUN_00568c7a();
    *(undefined1 **)(unaff_EBP + 8) = auStack_30;
    uVar9 = 0xf50;
LAB_00568955:
    uStack_2c = 0;
    FUN_00679d22(auStack_30,uVar9);
    goto LAB_00568bc0;
  case 3:
  case 6:
  case 7:
    FUN_0056874a();
    FUN_00568c7a();
    cVar3 = FUN_0042452b();
    if (cVar3 == '\0') {
      *(undefined1 **)(unaff_EBP + 8) = auStack_30;
      uVar9 = 0xf51;
      goto LAB_00568955;
    }
    FUN_0045cdbc();
    uStack_2c = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_30;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    goto LAB_00568bc8;
  case 4:
  case 5:
    puVar8 = (undefined4 *)(extraout_ECX + 0x128);
    FUN_00402aba();
    *(int *)(extraout_ECX + 0x100) = *(int *)(extraout_ECX + 0x100) + -1;
    puVar5 = (undefined4 *)(extraout_ECX + 0x100);
    if (*(int *)(extraout_ECX + 0x100) < 1) {
      piVar1 = (int *)(extraout_ECX + 300);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar8 = 0;
      }
      if (*(int *)(extraout_ECX + 0x108) != 0) {
        puVar5 = (undefined4 *)FUN_00564909();
        if (DAT_00979414 != 0) {
          if (*(int *)(extraout_ECX + 0xf0) != 0) {
            puVar5 = (undefined4 *)FUN_0056874a();
          }
          goto LAB_00568bd1;
        }
        FUN_00568c02();
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0x120;
        FUN_00402aba();
        *(undefined4 *)(unaff_EBP + -4) = 2;
        iVar6 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x18) = iVar6;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        goto LAB_00568b81;
      }
      FUN_0056874a();
      FUN_00568c7a();
      *(undefined1 **)(unaff_EBP + 8) = auStack_30;
      goto LAB_005689b1;
    }
    break;
  default:
    FUN_0056874a();
    FUN_00568c7a();
    uStack_2c = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_30;
    FUN_0045f0f3(s_ERROR_00965720,0xffffffff);
LAB_00568bc0:
    FUN_007db3ad();
LAB_00568bc8:
    puVar5 = (undefined4 *)FUN_005697ac();
    goto LAB_00568bd1;
  }
  piVar1 = puVar8 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar8 = 0;
  }
LAB_00568bd1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar5;
}


