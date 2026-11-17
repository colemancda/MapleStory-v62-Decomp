/* FUN_005c04c0 - 0x005c04c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_005c04c0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined *puStack_58;
  
  FUN_00879bb8();
  if (DAT_00979178 != 0) {
    *(undefined4 *)(unaff_EBP + -0x58) = 0x21000003;
    *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
    puStack_58 = &DAT_00903698;
    iStack_5c = unaff_EBP + 8;
    *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
    uStack_60 = 0x5c04f5;
    __CxxThrowException_8();
  }
  puStack_58 = (undefined *)0x5c04fd;
  cVar1 = FUN_0042452b();
  iVar4 = (int)cVar1;
  if (iVar4 != 0) {
    iStack_5c = 0x5c08a3;
    puStack_58 = (undefined *)iVar4;
    iVar3 = FUN_005c032c();
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0x21000003;
      *(undefined4 *)(unaff_EBP + -0x58) = 0x21000003;
      puStack_58 = &DAT_00903698;
      iStack_5c = unaff_EBP + -0x58;
      *(undefined4 *)(unaff_EBP + -4) = 0x15;
                    /* WARNING: Subroutine does not return */
      uStack_60 = 0x5c08c8;
      __CxxThrowException_8();
    }
    puStack_58 = *(undefined **)(unaff_EBP + 8);
    *(int *)(iVar3 + 0xd0) = iVar4;
    iStack_5c = 0x5c08d8;
    FUN_005c0c8b();
    goto LAB_005c08d8;
  }
  puStack_58 = (undefined *)0x5c0510;
  uVar2 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  switch(uVar2) {
  case 1:
    puStack_58 = (undefined *)0x198;
    iStack_5c = unaff_EBP + -0x10;
    uStack_60 = 0x5c0541;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_5c = 0x5c054e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 2:
    puStack_58 = (undefined *)0x199;
    iStack_5c = unaff_EBP + -0x14;
    uStack_60 = 0x5c056d;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_5c = 0x5c057a;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 3:
    puStack_58 = (undefined *)0x19a;
    iStack_5c = unaff_EBP + -0x18;
    uStack_60 = 0x5c0599;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_5c = 0x5c05a6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 4:
    puStack_58 = (undefined *)0x19b;
    iStack_5c = unaff_EBP + -0x1c;
    uStack_60 = 0x5c05c5;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_5c = 0x5c05d2;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 5:
    puStack_58 = (undefined *)0x19c;
    iStack_5c = unaff_EBP + -0x20;
    uStack_60 = 0x5c05f1;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_5c = 0x5c05fe;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 6:
    puStack_58 = (undefined *)0x19d;
    iStack_5c = unaff_EBP + -0x24;
    uStack_60 = 0x5c061d;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_5c = 0x5c062a;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 7:
    puStack_58 = (undefined *)0x19e;
    iStack_5c = unaff_EBP + -0x28;
    uStack_60 = 0x5c0649;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_5c = 0x5c0656;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  default:
    goto switchD_005c0527_caseD_8;
  case 9:
    puStack_58 = (undefined *)0x1a0;
    iStack_5c = unaff_EBP + -0x34;
    uStack_60 = 0x5c06cd;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_5c = 0x5c06da;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 10:
    puStack_58 = (undefined *)0xd4d;
    iStack_5c = unaff_EBP + -0x30;
    uStack_60 = 0x5c06a1;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_5c = 0x5c06ae;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xb:
    puStack_58 = (undefined *)0x19f;
    iStack_5c = unaff_EBP + -0x2c;
    uStack_60 = 0x5c0675;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_5c = 0x5c0682;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xc:
    puStack_58 = (undefined *)0x1c0;
    iStack_5c = unaff_EBP + -0x40;
    uStack_60 = 0x5c0751;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_5c = 0x5c075e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xd:
    puStack_58 = (undefined *)0x1c1;
    iStack_5c = unaff_EBP + -0x44;
    uStack_60 = 0x5c077d;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_5c = 0x5c078a;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xe:
    puStack_58 = (undefined *)0x1c2;
    iStack_5c = unaff_EBP + -0x48;
    uStack_60 = 0x5c07a9;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_5c = 0x5c07b6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0xf:
    puStack_58 = (undefined *)0x1ba;
    iStack_5c = unaff_EBP + -0x54;
    uStack_60 = 0x5c0827;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_5c = 0x5c0834;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x10:
    puStack_58 = (undefined *)0xd46;
    iStack_5c = unaff_EBP + -0x58;
    uStack_60 = 0x5c0850;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_5c = 0x5c085d;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x11:
    puStack_58 = (undefined *)0x1e7;
    iStack_5c = unaff_EBP + -0x50;
    uStack_60 = 0x5c07fe;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_5c = 0x5c080b;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x12:
    puStack_58 = (undefined *)0x19e;
    iStack_5c = unaff_EBP + -0x38;
    uStack_60 = 0x5c06f9;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_5c = 0x5c0706;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x13:
    puStack_58 = (undefined *)0x1bf;
    iStack_5c = unaff_EBP + -0x3c;
    uStack_60 = 0x5c0725;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_5c = 0x5c0732;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    break;
  case 0x14:
    puStack_58 = (undefined *)0x1e5;
    iStack_5c = unaff_EBP + -0x4c;
    uStack_60 = 0x5c07d5;
    puStack_58 = (undefined *)FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_5c = 0x5c07e2;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  puStack_58 = (undefined *)0x5c0869;
  FUN_00414ebb();
  if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
    puStack_58 = (undefined *)0x0;
    iStack_5c = 0;
    uStack_60 = 0;
    uStack_64 = 0;
    *(undefined1 **)(unaff_EBP + -0x58) = auStack_68;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
  }
switchD_005c0527_caseD_8:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_58 = (undefined *)0x5c089b;
  FUN_00414ebb();
LAB_005c08d8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


