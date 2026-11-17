/* FUN_00567ecd - 0x00567ecd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00567ecd(void)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_ECX;
  int iVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  if ((DAT_00979440 != 0) && (FUN_00815de9(), DAT_00979440 != 0)) {
    (*(code *)**(undefined4 **)(DAT_00979440 + 8))(1);
  }
  if (DAT_00979438 != 0) {
    (**(code **)(**(int **)(DAT_00979428 + 0x104) + 0x34))(3);
  }
  bVar1 = FUN_0042452b();
  if (0xb < bVar1) {
    if (bVar1 == 0xd) {
      uVar4 = 0x15;
      goto LAB_00568047;
    }
    if (bVar1 == 0xe) {
      iVar6 = FUN_0057a1a7(0x1b);
      if (iVar6 == 0) goto LAB_0056819c;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0xaf0);
      uVar4 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d299b(uVar4,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      if (bVar1 != 0xf) {
        if (bVar1 == 0x10) {
LAB_00567fb5:
          uVar4 = 0x21;
        }
        else if (bVar1 == 0x11) {
          uVar4 = 0x1b;
        }
        else {
          if (bVar1 == 0x15) goto LAB_00567fb5;
          if (bVar1 != 0x19) goto switchD_00567f41_caseD_0;
          uVar4 = 0x28;
        }
LAB_00567fb8:
        FUN_0057a546(uVar4,0);
        goto LAB_0056819c;
      }
      iVar6 = FUN_0057a1a7(0x1a);
      if (iVar6 == 0) goto LAB_0056819c;
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xaf0);
      uVar4 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_007d299b(uVar4,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    FUN_00414ebb();
    goto LAB_0056819c;
  }
  if (bVar1 == 0xb) {
    uVar4 = 0xe;
    goto LAB_00567fb8;
  }
  switch(bVar1) {
  default:
    goto switchD_00567f41_caseD_0;
  case 2:
  case 3:
    uVar4 = 0x10;
    break;
  case 4:
    uVar4 = 3;
    break;
  case 5:
    uVar4 = 0x14;
    break;
  case 6:
  case 8:
  case 9:
    uVar4 = 0xf;
    break;
  case 7:
    FUN_005697ac(0,0);
    uVar4 = 0x11;
    break;
  case 10:
    uVar4 = 0x13;
  }
LAB_00568047:
  FUN_0057a546(uVar4,0);
switchD_00567f41_caseD_0:
  if (((bVar1 == 0) || (bVar1 == 0xc)) || (bVar1 == 0x17)) {
    uVar4 = FUN_0047ae0f(*(undefined4 *)(DAT_00978368 + 0x2048),
                         *(undefined4 *)(DAT_00978368 + 0x2028));
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    uVar5 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x20) = uVar5 & 0xff;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iVar6 = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    do {
      if (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x20)) {
        FUN_004b50bc(*(undefined4 *)(unaff_EBP + 8),0);
        FUN_004b876a(*(undefined4 *)(unaff_EBP + 8));
        cVar2 = FUN_0042452b();
        if (cVar2 == '\0') {
          _memset((void *)(*(int *)(extraout_ECX + 0x168) + *(int *)(unaff_EBP + -0x10)),0,0x10);
        }
        else {
          FUN_004245d2(*(int *)(extraout_ECX + 0x168) + *(int *)(unaff_EBP + -0x10),0x10);
        }
        if (*(int *)(*(int *)(extraout_ECX + 0x164) + iVar6) == *(int *)(unaff_EBP + -0x24)) {
          *(undefined4 *)(extraout_ECX + 0x160) = *(undefined4 *)(unaff_EBP + -0x14);
        }
      }
      else {
        *(undefined4 *)(*(int *)(extraout_ECX + 0x164) + iVar6) = 0;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x10;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      iVar6 = iVar6 + 0x280;
    } while (*(int *)(unaff_EBP + -0x10) < 0x60);
    uVar4 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x14c) = uVar4;
    iVar6 = FUN_004029b9(0x88);
    *(int *)(unaff_EBP + 8) = iVar6;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar6 != 0) {
      FUN_0056d411(extraout_ECX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_004029b9(0xfc);
    *(int *)(unaff_EBP + 8) = iVar6;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (iVar6 != 0) {
      FUN_00570070(extraout_ECX,*(undefined4 *)(extraout_ECX + 0x164));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00564909(0xffffffff);
  }
LAB_0056819c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


