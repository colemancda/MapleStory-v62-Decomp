/* FUN_00866c6b - 0x00866c6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_00866c6b(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  switch(*(undefined4 *)(unaff_EBP + 8)) {
  case 0x3f3:
  case 0x3f4:
  case 0x3f5:
  case 0x3f7:
    FUN_0079d760(1);
    break;
  case 0x3f6:
    FUN_004f16e2(*(undefined4 *)(unaff_EBP + 0xc));
    break;
  case 0x3f8:
    FUN_0060142b(0x1a,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(2);
    FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
    goto LAB_00866d70;
  case 0x3f9:
    FUN_00879c20(extraout_ECX + 0x28,*(undefined4 *)(unaff_EBP + 0xc),0x10);
    FUN_0060142b(0x1a,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00457cda(3);
    FUN_00457fa0(extraout_ECX + 0x28,0x10);
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
    uVar1 = 1;
    goto LAB_00866d48;
  case 0x3fa:
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    FUN_0086a9b0(unaff_EBP + 0xc);
LAB_00866d70:
    uVar1 = 1;
    goto LAB_00866d48;
  }
  uVar1 = 0;
LAB_00866d48:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


