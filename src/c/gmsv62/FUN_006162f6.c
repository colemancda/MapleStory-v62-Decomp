/* FUN_006162f6 - 0x006162f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006162f6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_0061411c(extraout_ECX,extraout_ECX);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b8d24(iVar1 + 0x51,*(undefined4 *)(iVar1 + 0x55));
  }
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004c26f7(0);
    uVar3 = extraout_var;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return CONCAT22(uVar3,(short)uVar2);
}


