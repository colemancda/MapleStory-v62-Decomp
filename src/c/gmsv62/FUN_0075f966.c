/* FUN_0075f966 - 0x0075f966 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075f966(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_004029b9(0x590);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  uVar1 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    uVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
    uVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(uVar1);
    uVar1 = FUN_0075ebd6(uVar2,uVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00766a45(uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


