/* FUN_005678d0 - 0x005678d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_005678d0(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [2];
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  aiStack_68[1] = 3;
  aiStack_68[0] = 0x5678f7;
  (**(code **)(**(int **)(extraout_ECX + 0xf0) + 0x34))();
  aiStack_68[0] = 0x567901;
  uVar2 = FUN_0042452b();
  *(uint *)(unaff_EBP + 8) = uVar2 & 0xff;
  aiStack_68[0] = 0x56790e;
  uVar1 = FUN_0042452b();
  *(undefined1 *)(extraout_ECX + 0x180) = uVar1;
  if (DAT_00979430 != 0) {
    aiStack_68[0] = 1;
    iStack_6c = 0x567925;
    FUN_0058ae08();
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 < 0xc) {
    if (iVar3 == 0xb) {
      iStack_6c = 0xe;
      goto LAB_00567c06;
    }
    switch(iVar3) {
    default:
      goto switchD_00567939_caseD_0;
    case 2:
    case 3:
      iStack_6c = 0x10;
      break;
    case 4:
      iStack_6c = 3;
      break;
    case 5:
      iStack_6c = 0x14;
      break;
    case 7:
      aiStack_68[0] = 0;
      iStack_6c = 0;
      iStack_70 = 0x567969;
      FUN_005697ac();
      iStack_6c = 0x11;
      break;
    case 10:
      iStack_6c = 0x13;
      break;
    case -1:
    case 6:
    case 8:
    case 9:
      iStack_6c = 0xf;
    }
LAB_00567a3f:
    aiStack_68[0] = 0;
    iStack_70 = 0x567a44;
    FUN_0057a546();
switchD_00567939_caseD_0:
    if (((*(int *)(unaff_EBP + 8) != 0) && (*(int *)(unaff_EBP + 8) != 0xc)) &&
       (*(int *)(unaff_EBP + 8) != 0x17)) goto LAB_00567c0d;
    if (*(byte *)(extraout_ECX + 0x180) < 2) {
      if (DAT_00979430 != 0) {
        aiStack_68[0] = 0;
        iStack_6c = 0x567ac9;
        FUN_0058ae08();
      }
      aiStack_68[0] = 0x567ad0;
      uVar5 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
      aiStack_68[0] = 0x567ada;
      uVar2 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x28) = uVar2 & 0xff;
      aiStack_68[0] = 0x567ae7;
      uVar1 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x24) = uVar1;
      aiStack_68[0] = 0x567af1;
      uVar1 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x18) = uVar1;
      aiStack_68[0] = unaff_EBP + -0x14;
      iStack_6c = 0x567aff;
      FUN_0045cdbc();
      *(undefined4 *)(unaff_EBP + -4) = 3;
      aiStack_68[0] = 0x567b0d;
      uVar1 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
      aiStack_68[0] = 0x567b17;
      uVar1 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x20) = uVar1;
      aiStack_68[0] = 8;
      iStack_6c = unaff_EBP + -0x38;
      iStack_70 = 0x567b27;
      FUN_004245d2();
      aiStack_68[0] = unaff_EBP + -0x60;
      iStack_6c = unaff_EBP + -0x38;
      iStack_70 = 0x567b35;
      (*DAT_0097b4b0)();
      iStack_70 = 8;
      iStack_74 = unaff_EBP + -0x40;
      uStack_78 = 0x567b42;
      FUN_004245d2();
      iStack_70 = unaff_EBP + -0x50;
      iStack_74 = unaff_EBP + -0x40;
      uStack_78 = 0x567b50;
      (*DAT_0097b4b0)();
      aiStack_68[0] = 0x567b57;
      uVar5 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + 8) = uVar5;
      aiStack_68[0] = unaff_EBP + -0x10;
      iStack_6c = 0x567b65;
      FUN_0045cdbc();
      iStack_6c = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x30) = aiStack_68;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      aiStack_68[0] = 0;
      iStack_70 = 0x567b7a;
      FUN_00414f8b();
      iStack_6c = *(undefined4 *)(unaff_EBP + 8);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x50);
      uStack_78 = *(undefined4 *)(unaff_EBP + -0x4c);
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x48);
      iStack_70 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_90 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_8c = *(undefined4 *)(unaff_EBP + -0x60);
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x5c);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x54);
      *(undefined1 **)(unaff_EBP + 8) = auStack_98;
      FUN_00450368(unaff_EBP + -0x14);
      uVar5 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uVar8 = *(undefined4 *)(unaff_EBP + -0x24);
      uVar7 = *(undefined4 *)(unaff_EBP + -0x28);
      uVar6 = *(undefined4 *)(unaff_EBP + -0x2c);
      FUN_004e21db(uVar6,uVar7,uVar8,uVar5);
      FUN_0056777d(uVar6,uVar7,uVar8,uVar5);
      aiStack_68[0] = 0xa4;
      iStack_6c = 0x567bd9;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar3 != 0) {
        iStack_6c = 0x567bec;
        FUN_0058aefd();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      aiStack_68[0] = 0x567bf8;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      aiStack_68[0] = 0;
      if (3 < *(byte *)(extraout_ECX + 0x180)) {
        iStack_6c = 0xf;
        goto LAB_00567c06;
      }
      iStack_6c = 0x1f;
      iStack_70 = 0x567a75;
      iVar3 = FUN_00579f8f();
      if ((iVar3 == 0) || (*(int *)(extraout_ECX + 0x13c) != 0)) goto LAB_00567c0d;
      aiStack_68[0] = 9;
      iStack_6c = unaff_EBP + -0x20;
      iStack_70 = 0x567a9b;
      puVar4 = (undefined4 *)FUN_00679d22();
      iStack_6c = *puVar4;
      aiStack_68[0] = 0;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      iStack_70 = 0x567aab;
      FUN_007d299b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  else {
    if (iVar3 == 0xd) {
      iStack_6c = 0x15;
      goto LAB_00567a3f;
    }
    if (iVar3 != 0xe) {
      if (iVar3 == 0xf) {
        aiStack_68[0] = 0x1a;
        iStack_6c = 0x5679c3;
        iVar3 = FUN_0057a1a7();
        if (iVar3 == 0) goto LAB_00567c0d;
        aiStack_68[0] = 0xaf0;
        iStack_6c = unaff_EBP + -0x18;
        iStack_70 = 0x5679df;
        puVar4 = (undefined4 *)FUN_00679d22();
        iStack_6c = *puVar4;
        aiStack_68[0] = 0;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        iStack_70 = 0x5679ef;
        FUN_007d299b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_00567a32;
      }
      if (iVar3 == 0x10) {
LAB_005679b4:
        iStack_6c = 0x21;
      }
      else if (iVar3 == 0x11) {
        iStack_6c = 0x1b;
      }
      else {
        if (iVar3 == 0x15) goto LAB_005679b4;
        if (iVar3 != 0x19) goto switchD_00567939_caseD_0;
        iStack_6c = 0x28;
      }
LAB_00567c06:
      aiStack_68[0] = 0;
      iStack_70 = 0x567c0b;
      FUN_0057a546();
      goto LAB_00567c0d;
    }
    aiStack_68[0] = 0x1b;
    iStack_6c = 0x567a01;
    iVar3 = FUN_0057a1a7();
    if (iVar3 == 0) goto LAB_00567c0d;
    aiStack_68[0] = 0xaf0;
    iStack_6c = unaff_EBP + -0x1c;
    iStack_70 = 0x567a1d;
    puVar4 = (undefined4 *)FUN_00679d22();
    iStack_6c = *puVar4;
    aiStack_68[0] = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_70 = 0x567a29;
    FUN_007d299b();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
LAB_00567a32:
  aiStack_68[0] = 0x567a37;
  FUN_00414ebb();
LAB_00567c0d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


