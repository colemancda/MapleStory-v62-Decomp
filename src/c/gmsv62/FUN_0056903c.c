/* FUN_0056903c - 0x0056903c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0056903c(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  bVar2 = FUN_0042452b();
  uVar3 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x18) = uVar3 & 0xff;
  if (bVar2 < 0xc) {
    if (bVar2 == 0xb) {
      uVar7 = 0xe;
      goto LAB_005690f9;
    }
    switch(bVar2) {
    default:
      goto switchD_00569082_caseD_0;
    case 2:
    case 3:
      uVar7 = 0x10;
      break;
    case 4:
      uVar7 = 3;
      break;
    case 5:
      uVar7 = 0x14;
      break;
    case 6:
    case 8:
    case 9:
      uVar7 = 0xf;
      break;
    case 7:
      FUN_005697ac(0,0);
      uVar7 = 0x11;
      break;
    case 10:
      uVar7 = 0x13;
    }
LAB_00569188:
    FUN_0057a546(uVar7,0);
switchD_00569082_caseD_0:
    iVar4 = DAT_00978368;
    if (bVar2 == 0) {
LAB_005691a1:
      if (bVar2 == 0xc) goto LAB_005691a6;
LAB_00569221:
      uVar7 = FUN_0042459a();
      uVar5 = FUN_00424561();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
      uVar5 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
      bVar2 = FUN_0042452b();
      uVar5 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + 8) = uVar5;
      FUN_00473902(*(undefined2 *)(unaff_EBP + -0x18),0);
      *(undefined4 *)(unaff_EBP + -0x24) = uVar7;
      *(undefined4 *)(iVar4 + 0x2088) = *(undefined4 *)(unaff_EBP + -0x14);
      *(undefined4 *)(iVar4 + 0x2054) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      *(uint *)(iVar4 + 0x2050) = bVar2 >> 1 & 1;
      FUN_0083050c(unaff_EBP + -0x28);
      puVar6 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4df);
      uVar7 = *puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_007d4073(uVar7,100);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00402676();
      goto LAB_005692cb;
    }
    if (bVar2 != 0xc) {
      if (bVar2 != 0x17) goto LAB_005692cb;
      goto LAB_005691a1;
    }
LAB_005691a6:
    iVar1 = *(int *)(unaff_EBP + -0x18);
    if (iVar1 == 1) {
      FUN_005697ac(0,0);
      uVar7 = 0x1c;
    }
    else if (iVar1 == 2) {
      FUN_005697ac(0,0);
      uVar7 = 0x1d;
    }
    else if (iVar1 == 3) {
      FUN_005697ac(0,0);
      uVar7 = 0x1e;
    }
    else {
      if ((iVar1 == 0xb) || (iVar1 == 0xd)) goto LAB_00569221;
      if (iVar1 == 0x13) {
        FUN_005697ac(0,0);
        uVar7 = 0x19;
      }
      else if (iVar1 == 0x19) {
        FUN_005697ac(0,0);
        uVar7 = 0x1f;
      }
      else {
        uVar7 = 0xf;
      }
    }
  }
  else {
    if (bVar2 == 0xd) {
      uVar7 = 0x15;
      goto LAB_00569188;
    }
    if (bVar2 == 0xe) {
      iVar4 = FUN_0057a1a7(0x1b);
      if (iVar4 == 0) goto LAB_005692cb;
      puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0xaf0);
      uVar7 = *puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d299b(uVar7,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0056917b:
      FUN_00414ebb();
      goto LAB_005692cb;
    }
    if (bVar2 == 0xf) {
      iVar4 = FUN_0057a1a7(0x1a);
      if (iVar4 == 0) goto LAB_005692cb;
      puVar6 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xaf0);
      uVar7 = *puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_007d299b(uVar7,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_0056917b;
    }
    if (bVar2 == 0x10) {
LAB_005690f6:
      uVar7 = 0x21;
    }
    else if (bVar2 == 0x11) {
      uVar7 = 0x1b;
    }
    else {
      if (bVar2 == 0x15) goto LAB_005690f6;
      if (bVar2 != 0x19) goto switchD_00569082_caseD_0;
      uVar7 = 0x28;
    }
  }
LAB_005690f9:
  FUN_0057a546(uVar7,0);
LAB_005692cb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


