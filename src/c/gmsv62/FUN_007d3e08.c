/* FUN_007d3e08 - 0x007d3e08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_007d3e08(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  switch(iVar1) {
  case 0x1e:
    uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x1f:
    uVar3 = FUN_00679d86(unaff_EBP + -0x18,0x875);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x20:
    uVar3 = FUN_00679d86(unaff_EBP + -0x1c,0xecb);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x21:
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0xecc);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x22:
    uVar3 = FUN_00679d86(unaff_EBP + -0x24,0xecd);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x23:
    uVar3 = FUN_00679d86(unaff_EBP + -0x28,0xe36);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x24:
    uVar3 = FUN_00679d86(unaff_EBP + -0x2c,0xac0);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x25:
    uVar3 = FUN_00679d86(unaff_EBP + -0x30,0xac1);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 0x26:
    uVar3 = FUN_00679d86(unaff_EBP + -0x34,0xac7);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  default:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar3 = 0;
    goto LAB_007d402f;
  }
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x38,0x877);
  uVar3 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0041354c(unaff_EBP + 0xc,uVar3,*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  uVar3 = FUN_00433c19(*(undefined4 *)(unaff_EBP + 0xc),100,iVar1 == 0x23);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
LAB_007d402f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


