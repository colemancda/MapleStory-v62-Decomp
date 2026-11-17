/* FUN_0070e3de - 0x0070e3de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e3de(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  FUN_0070ee28(unaff_EBP + 8,unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    uVar2 = (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x10) + 4) + 0x2c))();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    uVar2 = (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x10) + 4) + 0x30))();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    FUN_004cda9b(unaff_EBP + 8,unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + 8) = uVar1;
    FUN_0070ef91(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0070edc2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


