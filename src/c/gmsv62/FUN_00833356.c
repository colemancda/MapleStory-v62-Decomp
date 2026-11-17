/* FUN_00833356 - 0x00833356 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_00833356(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined1 auStack_5ac [4];
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 8) >> 0x10 & 0xff;
  if (uVar1 == 0x36) {
    uVar1 = 0x2a;
  }
  iVar2 = *(int *)(uVar1 * 5 + DAT_00979110 + 5);
  if ((*(byte *)(unaff_EBP + 0xb) & 0x80) != 0) {
    if (iVar2 == 10) {
      uStack_59c = 6;
    }
    else {
      if (iVar2 == 0xb) {
        if (DAT_00978360 != 0) {
          uStack_59c = 0x833576;
          FUN_0081b1ba();
          uStack_59c = 0x833581;
          FUN_0073dd5c();
        }
        goto LAB_00833590;
      }
      if (iVar2 == 0xc) {
        uStack_59c = 1;
      }
      else if (iVar2 == 0xd) {
        uStack_59c = 0;
      }
      else if (iVar2 == 0x12) {
        uStack_59c = 2;
      }
      else if (iVar2 == 0x15) {
        uStack_59c = 4;
      }
      else {
        if (iVar2 != 0x18) goto switchD_008333ad_default;
        uStack_59c = 3;
      }
    }
    uStack_5a0 = 0x833590;
    FUN_0073dcf0();
    goto LAB_00833590;
  }
  if (8 < iVar2) {
    if (iVar2 < 0x12) {
      if (iVar2 == 0x11) {
        uStack_59c = 2;
LAB_00833526:
        uStack_5a0 = 7;
        goto LAB_008333b8;
      }
      if (iVar2 == 9) {
        uStack_59c = 0xffffffff;
        uStack_5a0 = 5;
        goto LAB_008333b8;
      }
      if (iVar2 == 0xe) {
        uStack_59c = 0x8334eb;
        FUN_00832c44();
      }
      else if (iVar2 == 0xf) {
        uStack_59c = 0x8334e1;
        FUN_00747306();
      }
      else {
        if (iVar2 != 0x10) goto switchD_008333ad_default;
        if (*(int *)(DAT_00978360 + 0xc68) == 3) {
          uStack_59c = 1;
          uStack_5a0 = 0x8334b8;
          FUN_0073da1a();
        }
        else {
          uStack_59c = 3;
          uStack_5a0 = 0x8334c4;
          FUN_0073da1a();
          uStack_59c = 0;
          uStack_5a0 = 0x8334d1;
          FUN_00817f6e();
        }
      }
    }
    else {
      if (iVar2 == 0x13) {
        uStack_59c = 1;
        goto LAB_00833526;
      }
      if (iVar2 == 0x14) {
        if (DAT_0097bdc4 != 0) {
          uStack_59c = 0x833522;
          FUN_007053e6();
        }
      }
      else {
        if (iVar2 != 0x17) goto switchD_008333ad_default;
        uStack_59c = 0;
        uStack_5a0 = 0x833511;
        FUN_008319e8();
      }
    }
    goto LAB_00833590;
  }
  if (iVar2 == 8) {
    uStack_59c = 0xffffffff;
    uStack_5a0 = 6;
    goto LAB_008333b8;
  }
  switch(iVar2) {
  case 0:
    uStack_59c = 0xffffffff;
    uStack_5a0 = 1;
    break;
  case 1:
    uStack_59c = 0xffffffff;
    uStack_5a0 = 0;
    break;
  case 2:
    uStack_59c = 0xffffffff;
    uStack_5a0 = 2;
    break;
  case 3:
    uStack_59c = 0xffffffff;
    uStack_5a0 = 3;
    break;
  case 4:
    uStack_59c = 0;
    goto LAB_00833526;
  case 5:
    uStack_59c = 0x8333e0;
    iVar2 = FUN_00429303();
    if (iVar2 != 0) {
      uStack_59c = 0x8333f7;
      FUN_0081be45();
      uStack_59c = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_5a0 = 0x833406;
      uStack_5a0 = FUN_004f162d();
      uStack_5a4 = 0x833412;
      iVar2 = FUN_0081d7f3();
      if (iVar2 == 0) {
        uStack_59c = 0;
        uStack_5a0 = 0;
        uStack_5a4 = 0;
        uStack_5a8 = 0;
        *(undefined1 **)(unaff_EBP + 8) = auStack_5ac;
        FUN_00679d22(auStack_5ac,0x118);
        FUN_007db3ad();
      }
      else {
        uStack_59c = 0x833421;
        FUN_004bc6a2();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_59c = 0x833454;
      FUN_0081bf02();
    }
    goto LAB_00833590;
  case 6:
    uStack_59c = 0;
    uStack_5a0 = 0x833460;
    FUN_006d1f73();
    goto LAB_00833590;
  case 7:
    if (DAT_00979268 != 0) {
      uStack_59c = 0x833479;
      FUN_006dc656();
    }
    goto LAB_00833590;
  default:
switchD_008333ad_default:
    uVar3 = 0;
    goto LAB_00833593;
  }
LAB_008333b8:
  uStack_5a4 = 0x8333bd;
  FUN_00831b94();
LAB_00833590:
  uVar3 = 1;
LAB_00833593:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


