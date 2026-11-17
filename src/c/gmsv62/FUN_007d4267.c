/* FUN_007d4267 - 0x007d4267 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_007d4267(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  switch(*(undefined4 *)(unaff_EBP + 0xc)) {
  case 0:
    uVar1 = FUN_00679d86(unaff_EBP + -0x14,0x9ad);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 1:
    uVar1 = FUN_00679d86(unaff_EBP + -0x18,0x9ae);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 2:
    uVar1 = FUN_00679d86(unaff_EBP + -0x1c,0x9af);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 3:
    uVar1 = FUN_00679d86(unaff_EBP + -0x20,0x9b0);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 4:
    uVar1 = FUN_00679d86(unaff_EBP + -0x24,0x9b1);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 5:
    uVar1 = FUN_00679d86(unaff_EBP + -0x28,0x9b2);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 6:
    uVar1 = FUN_00679d86(unaff_EBP + -0x2c,0x9b3);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 7:
    uVar1 = FUN_00679d86(unaff_EBP + -0x30,0x9b4);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 8:
    uVar1 = FUN_00679d86(unaff_EBP + -0x34,0x9b5);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 9:
    uVar1 = FUN_00679d86(unaff_EBP + -0x38,0x9b6);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 10:
    uVar1 = FUN_00679d86(unaff_EBP + -0x3c,0x9b7);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xb:
    uVar1 = FUN_00679d86(unaff_EBP + -0x40,0x9bd);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0xc:
    uVar1 = FUN_00679d86(unaff_EBP + -0x44,0x9be);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  default:
    goto switchD_007d4289_caseD_d;
  case 0x13:
    uVar1 = FUN_00679d86(unaff_EBP + -0x48,0x9bf);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x14:
    uVar1 = FUN_00679d86(unaff_EBP + -0x4c,0x9b8);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x15:
    uVar1 = FUN_00679d86(unaff_EBP + -0x50,0x9b9);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x16:
    uVar1 = FUN_00679d86(unaff_EBP + -0x54,0x9ba);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x17:
    uVar1 = FUN_00679d86(unaff_EBP + -0x58,0x9bb);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x18:
    uVar1 = FUN_00679d86(unaff_EBP + -0x5c,0x9bc);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x19:
    uVar1 = FUN_00679d86(unaff_EBP + -0x60,0x9c1);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1a:
    uVar1 = FUN_00679d86(unaff_EBP + -100,0x9c2);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x68,0x878);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0041354c(unaff_EBP + 0xc,uVar1,*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00402676();
  FUN_00433c19(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
switchD_007d4289_caseD_d:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


