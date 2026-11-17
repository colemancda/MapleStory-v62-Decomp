/* ptr_00449384 - 0x00449384 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00449384(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00402bc3();
  if (iVar1 < unaff_EDI) {
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x18) = unaff_EDI;
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0x11;
  FUN_00434e21(unaff_EBP + -0x18,s__s____s_s_s_s_00964168,*(undefined4 *)(iVar1 + 0x230),
               *(undefined4 *)(iVar1 + 0x234),*(undefined4 *)(iVar1 + 0x238));
  uVar2 = FUN_00415015(0x400,1);
  FUN_00471777(uVar2);
  FUN_004150c0();
  if (DAT_00978360 != unaff_EDI) {
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffffc;
    uVar2 = *(undefined4 *)(iVar1 + 0x220);
    uVar5 = *(undefined4 *)(iVar1 + 0x224);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uVar4 = 0x11;
    uVar3 = FUN_00449713(0x11,uVar5,uVar2);
    FUN_00449784(uVar3);
    FUN_00743a59(uVar3,uVar4,uVar5,uVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


