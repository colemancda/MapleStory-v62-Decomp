/* FUN_00827589 - 0x00827589 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00827589(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  uVar2 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  iVar3 = (**(code **)(*extraout_ECX + 0x34))(extraout_ECX,uVar2);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,extraout_ECX,&DAT_0096c690);
  }
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


