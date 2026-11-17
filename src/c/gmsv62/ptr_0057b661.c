/* ptr_0057b661 - 0x0057b661 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0057b661(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1000) {
    if (extraout_ECX[0x35] == 0x3ea) {
      puVar1 = (undefined4 *)FUN_0045b90e(unaff_EBP + 8);
      uVar3 = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar2 = *extraout_ECX;
      uVar3 = FUN_0087b6ab(uVar3);
      (**(code **)(iVar2 + 0x34))(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_0057b6ca;
    }
    iVar2 = *extraout_ECX;
    uVar3 = 1;
  }
  else {
    if (*(int *)(unaff_EBP + 8) != 0x3e9) goto LAB_0057b6ca;
    iVar2 = *extraout_ECX;
    uVar3 = 0;
  }
  (**(code **)(iVar2 + 0x34))(uVar3);
LAB_0057b6ca:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


