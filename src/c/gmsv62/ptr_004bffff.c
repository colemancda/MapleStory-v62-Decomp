/* ptr_004bffff - 0x004bffff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 ptr_004bffff(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_EBP;
  int unaff_EDI;
  int iStack_10;
  
  iVar1 = FUN_005540b6();
  if (iVar1 != 0) {
    FUN_0054e7b3();
    if (*(int *)(*(int *)(unaff_EBP + -0x28) + 0x127) == unaff_EDI) {
      FUN_0048b92c();
      *(undefined4 *)(unaff_EBP + -0x30) = 4;
      *(undefined4 *)(unaff_EBP + -4) = 3;
    }
    iVar1 = FUN_0045e2eb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (((*(byte *)(unaff_EBP + -0x30) & 4) != 0) && (*(int *)(unaff_EBP + -0x34) != unaff_EDI)) {
      FUN_00402b41();
    }
    if (iVar1 != unaff_EDI) goto LAB_004c007c;
    *(int **)(unaff_EBP + 0xc) = &iStack_10;
    FUN_00679d22(&iStack_10,0x357);
    FUN_007db3ad();
    goto LAB_004c06e3;
  }
LAB_004c007c:
  iVar1 = FUN_004c213a();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  if (iVar1 == unaff_EDI) {
    iVar1 = -*(int *)(unaff_EBP + 0xc);
  }
  else {
    iVar1 = -100 - *(int *)(unaff_EBP + 0xc);
  }
  *(int *)(unaff_EBP + -0x20) = iVar1;
  iVar1 = FUN_00458c4f();
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar1 + 4);
  if (*(int *)(unaff_EBP + -0x34) != unaff_EDI) {
    FUN_00449913();
  }
  *(int *)(unaff_EBP + -0x2c) = unaff_EDI;
  iVar1 = FUN_004c23c9();
  if (iVar1 == unaff_EDI) {
    iVar1 = FUN_004c2450();
  }
  if (iVar1 != unaff_EDI) {
    if ((*(int *)(unaff_EBP + -0x44) != unaff_EDI) && (iVar2 = FUN_0048aa38(), iVar2 == 0))
    goto LAB_004c06e3;
    if (*(int *)(unaff_EBP + -0x24) == unaff_EDI) {
      *(int *)(unaff_EBP + -0x2c) = -iVar1;
    }
    else {
      *(int *)(unaff_EBP + -0x2c) = -100 - iVar1;
    }
  }
  iStack_10 = unaff_EBP + -0x3f0;
  FUN_0087b2f0();
  iStack_10 = unaff_EBP + -0x268;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0();
  *(int *)(unaff_EBP + -0x10) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + 0xc) == 0xe) {
    FUN_0078c04f();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004c2596();
    iVar1 = *(int *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 6;
joined_r0x004c01ef:
    if (iVar1 != unaff_EDI) {
      FUN_004c26f7();
    }
  }
  else {
    if (*(int *)(unaff_EBP + 0xc) == 0x1e) {
      FUN_0078c04f();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_004c2596();
      iVar1 = *(int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      goto joined_r0x004c01ef;
    }
    if (*(int *)(unaff_EBP + 0xc) == 0x26) {
      FUN_0078c04f();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_004c2596();
      iVar1 = *(int *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      goto joined_r0x004c01ef;
    }
  }
  iStack_10 = unaff_EBP + -0x60;
  FUN_0087b2f0();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  *(int *)(unaff_EBP + -0x24) = unaff_EDI;
  *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0x60;
  do {
    FUN_0078c04f();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004c2596();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x44) != unaff_EDI) {
      FUN_004c26f7();
      *(int *)(unaff_EBP + -0x44) = unaff_EDI;
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 8;
  } while (*(int *)(unaff_EBP + -0x24) < 3);
  iStack_10 = FUN_00413367();
  FUN_00662ab1(*(undefined4 *)(unaff_EBP + -0x28),unaff_EBP + -0x60,unaff_EBP + -0x3f0,
               unaff_EBP + -0x268);
  FUN_004bf8a2();
  FUN_00660de8();
  FUN_00413367();
  iStack_10 = unaff_EBP + -0x3f0;
  FUN_00663261(*(undefined4 *)(unaff_EBP + -0x28),unaff_EBP + -0x480);
  uVar8 = FUN_0054e7b3();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar8;
  switch(*(undefined4 *)(unaff_EBP + 0xc)) {
  case 0xe:
  case 0x1e:
  case 0x26:
    if ((*(int *)(unaff_EBP + -0x10) != unaff_EDI) && (*(int *)(unaff_EBP + -0x2c) != unaff_EDI)) {
      FUN_0045e2eb();
      iVar1 = FUN_00459dd4();
      if (iVar1 != 0) break;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_10;
LAB_004c04fc:
    uVar8 = 0x35d;
    goto LAB_004c067f;
  case 0x15:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4);
    if (iVar1 != unaff_EDI) {
      if (*(int *)(*(int *)(iVar1 + 0x78) + 0x10) != unaff_EDI) break;
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04fc;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_10;
LAB_004c04dc:
    uVar8 = 0x35c;
    goto LAB_004c067f;
  case 0x16:
  case 0x17:
  case 0x2e:
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    break;
  case 0x1a:
  case 0x1b:
  case 0x1c:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4);
    *(int *)(unaff_EBP + 0xc) = iVar1;
    if (iVar1 != unaff_EDI) {
      *(undefined4 *)(iVar1 + 400) = 1;
      uVar8 = FUN_007d1e08();
      iVar1 = *(int *)(unaff_EBP + 0xc);
LAB_004c0579:
      *(undefined4 *)(iVar1 + 0x194) = uVar8;
    }
    break;
  case 0x1d:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 4);
    if (iVar1 == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar1 + 0x78) + 0x14) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04fc;
    }
    break;
  case 0x1f:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc);
    if (iVar1 == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar1 + 0x78) + 0x10) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04fc;
    }
    break;
  case 0x20:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc);
    if (iVar1 == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar1 + 0x78) + 0x14) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04fc;
    }
    break;
  case 0x21:
  case 0x22:
  case 0x2f:
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    break;
  case 0x23:
  case 0x24:
  case 0x25:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0xc);
    *(int *)(unaff_EBP + 0xc) = iVar1;
    if (iVar1 != unaff_EDI) {
      *(undefined4 *)(iVar1 + 400) = 1;
      uVar8 = FUN_007d1e08();
      iVar1 = *(int *)(unaff_EBP + 0xc);
      goto LAB_004c0579;
    }
    break;
  case 0x27:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14);
    if (iVar1 == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar1 + 0x78) + 0x10) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04fc;
    }
    break;
  case 0x28:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14);
    if (iVar1 == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    if (*(int *)(*(int *)(iVar1 + 0x78) + 0x14) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04fc;
    }
    break;
  case 0x29:
  case 0x2a:
  case 0x30:
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14) == unaff_EDI) {
      *(int **)(unaff_EBP + 0xc) = &iStack_10;
      goto LAB_004c04dc;
    }
    break;
  case 0x2b:
  case 0x2c:
  case 0x2d:
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x1744) + 0x14);
    *(int *)(unaff_EBP + 0xc) = iVar1;
    if (iVar1 != unaff_EDI) {
      *(undefined4 *)(iVar1 + 400) = 1;
      uVar8 = FUN_007d1e08();
      iVar1 = *(int *)(unaff_EBP + 0xc);
      goto LAB_004c0579;
    }
  }
  *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffff8;
  iStack_10 = 0x4c0592;
  FUN_004c2575();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004bf893();
  iStack_10 = 0x4c05ad;
  iStack_10 = FUN_004bf884();
  uVar8 = FUN_004bf875();
  uVar3 = FUN_004bf866(uVar8);
  uVar4 = FUN_004bf857(uVar3);
  uVar5 = FUN_004bf848(uVar4);
  uVar6 = FUN_004bf839(uVar5);
  uVar7 = FUN_004bf82d(uVar6);
  FUN_0048b97b(uVar7);
  iVar1 = FUN_004c216d(uVar7,uVar6,uVar5,uVar4,uVar3,uVar8);
  if (iVar1 != unaff_EDI) {
    iStack_10 = 0x4c06f9;
    FUN_008347d4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_10 = 0x4c070b;
    FUN_0087a0b8();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x10) != unaff_EDI) {
      FUN_004c26f7();
      *(int *)(unaff_EBP + -0x10) = unaff_EDI;
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_10 = 0x4c0735;
    FUN_0087a0b8();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_10 = 0x4c074a;
    FUN_0087a0b8();
    uVar8 = 1;
    goto LAB_004c074d;
  }
  FUN_00413367();
  iStack_10 = *(int *)(unaff_EBP + -0x1c);
  iVar1 = FUN_0044d79d();
  if (iVar1 == 0) {
LAB_004c0670:
    *(int **)(unaff_EBP + 0xc) = &iStack_10;
    uVar8 = 0x353;
  }
  else {
    iVar1 = FUN_0054e7b3();
    *(int *)(unaff_EBP + 0xc) = iVar1;
    if ((iVar1 != unaff_EDI) && (*(int *)(unaff_EBP + -0x10) != unaff_EDI)) {
      FUN_0045e2eb();
      iVar1 = FUN_00459dd4();
      if (iVar1 != 0) goto LAB_004c0670;
    }
    *(int **)(unaff_EBP + 0xc) = &iStack_10;
    uVar8 = 0x35a;
  }
LAB_004c067f:
  FUN_00679d22(&iStack_10,uVar8);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_10 = 0x4c06a4;
  FUN_0087a0b8();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x10) != unaff_EDI) {
    FUN_004c26f7();
    *(int *)(unaff_EBP + -0x10) = unaff_EDI;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_10 = 0x4c06ce;
  FUN_0087a0b8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_10 = 0x4c06e3;
  FUN_0087a0b8();
LAB_004c06e3:
  uVar8 = 0;
LAB_004c074d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


