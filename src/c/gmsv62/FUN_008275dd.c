/* FUN_008275dd - 0x008275dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_008275dd(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(undefined4 **)(unaff_EBP + 0xc) == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined4 **)(unaff_EBP + 0xc);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  iVar3 = (**(code **)(*extraout_ECX + 0x28))
                    (extraout_ECX,uVar2,uVar4,*(undefined4 *)(unaff_EBP + 0x10));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,extraout_ECX,&DAT_0096c6a0);
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004030b1();
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


