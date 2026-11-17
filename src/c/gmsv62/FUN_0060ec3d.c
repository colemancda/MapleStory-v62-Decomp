/* FUN_0060ec3d - 0x0060ec3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0060ec3d(void)

{
  undefined1 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  
  FUN_00879bb8();
  uStack_30 = 0x60ec56;
  uVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  switch(uVar1) {
  case 0:
    goto switchD_0060ec6a_caseD_0;
  case 1:
    uStack_30 = 0x344;
    iStack_34 = unaff_EBP + -0x1c;
    iStack_38 = 0x60ed05;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_34 = 0x60ed12;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 2:
    uStack_30 = 0x116;
    iStack_34 = unaff_EBP + -0x10;
    iStack_38 = 0x60ec84;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_34 = 0x60ec91;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 3:
    uStack_30 = 0xb28;
    iStack_34 = unaff_EBP + -0x18;
    iStack_38 = 0x60ecda;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_34 = 0x60ece7;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 4:
    uStack_30 = 0xb27;
    iStack_34 = unaff_EBP + -0x14;
    iStack_38 = 0x60ecaf;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_34 = 0x60ecbc;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 5:
    uStack_30 = 0x345;
    iStack_34 = unaff_EBP + -0x20;
    iStack_38 = 0x60ed30;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_34 = 0x60ed3d;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 6:
    uStack_30 = 0x346;
    iStack_34 = unaff_EBP + -0x24;
    iStack_38 = 0x60ed58;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_34 = 0x60ed65;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  default:
    uStack_30 = 0x347;
    iStack_34 = unaff_EBP + -0x2c;
    iStack_38 = 0x60eda8;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_34 = 0x60edb5;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    break;
  case 8:
    uStack_30 = 0xf43;
    iStack_34 = unaff_EBP + -0x28;
    iStack_38 = 0x60ed80;
    uStack_30 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_34 = 0x60ed8d;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  uStack_30 = 0x60edc0;
  FUN_00414ebb();
  uStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = extraout_ECX + 0x6c;
  uStack_3c = 0;
  *(undefined1 **)(unaff_EBP + -0x30) = auStack_40;
  FUN_00450368(unaff_EBP + 8);
  FUN_007db3ad();
switchD_0060ec6a_caseD_0:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_30 = 0x60edea;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


