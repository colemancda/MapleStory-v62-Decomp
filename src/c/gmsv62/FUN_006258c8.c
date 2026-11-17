/* FUN_006258c8 - 0x006258c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006258c8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  uint uVar4;
  undefined4 uVar5;
  uint uStack_40;
  uint uStack_3c;
  int *piStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_38 = (int *)0x0;
  uStack_3c = 0;
  *(uint **)(unaff_EBP + -0x1c) = &uStack_40;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&uStack_40,0x5d6);
  iVar1 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_40 = 0x62591b;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    piStack_38 = (int *)(unaff_EBP + -0x18);
    uStack_3c = 0x625931;
    piStack_38 = (int *)FUN_00404b30();
    if (((int)piStack_38 < 0) && (piStack_38 != (int *)0x80004002)) {
      uStack_3c = 0x625942;
      FUN_00878dfb();
    }
  }
  piStack_38 = (int *)(unaff_EBP - 0x34);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_3c = 0x62594f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    uStack_3c = 0x62595a;
    piStack_38 = (int *)iVar1;
    FUN_00878dfb();
    piStack_38 = (int *)extraout_ECX_00;
  }
  uStack_40 = unaff_EBP - 0x14;
  *(uint **)(unaff_EBP + -0x1c) = &uStack_3c;
  uStack_3c = (uint)piStack_38;
  piStack_38 = (int *)(unaff_EBP + -0x10);
  FUN_00424dbc();
  uStack_40 = 0x625974;
  FUN_00624903();
  uVar4 = 0;
  do {
    if ((*(int *)(unaff_EBP + -0x10) == 0) || (*(uint *)(*(int *)(unaff_EBP + -0x10) + -4) <= uVar4)
       ) break;
    piStack_38 = (int *)0x69c;
    uStack_3c = 0x625999;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x1c) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      piStack_38 = (int *)0x6259ab;
      iVar1 = FUN_007e62e9();
    }
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar2 != 0) & uVar2 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_38 = (int *)0x6259d2;
    FUN_004c26c4();
    piStack_38 = (int *)0x0;
    uStack_3c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_40 = uVar4;
    uVar3 = FUN_004726fc();
    *(uint **)(unaff_EBP + -0x1c) = &uStack_40;
    FUN_00450368(uVar3);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x10);
    uVar5 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004c2677(0,uVar3);
    FUN_007eddac(uVar5,uVar3);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    piStack_38 = (int *)(uint)(uVar4 < iVar1 - 1U);
    uStack_3c = (uint)(0 < (int)uVar4);
    uStack_40 = 0x625a2a;
    FUN_007edf11();
    piStack_38 = (int *)0x625a32;
    FUN_007e6e3c();
    piStack_38 = (int *)0x625a3a;
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 0x2000) {
      uVar4 = uVar4 - 1;
    }
    else {
      if (iVar1 != 0x2001) {
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_38 = (int *)0x625a69;
        FUN_004c26e1();
        break;
      }
      uVar4 = uVar4 + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_38 = (int *)0x625a54;
    FUN_004c26e1();
  } while (-1 < (int)uVar4);
  piStack_38 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_38 != (int *)0x0) {
    uStack_3c = 0x625a79;
    (**(code **)(*piStack_38 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_38 = (int *)0x625a85;
  FUN_0045f10c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


