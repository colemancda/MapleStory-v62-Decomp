/* FUN_007ba32b - 0x007ba32b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ba32b(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_007b04b6();
  if (iVar1 == 0) {
    iVar1 = FUN_0044dddc(*(undefined4 *)(extraout_ECX + 0x4a4));
    if ((iVar1 == 0) ||
       ((iVar1 != *(int *)(unaff_EBP + 0x10) && (iVar1 != *(int *)(unaff_EBP + 0x14))))) {
      uVar2 = FUN_00679d22(unaff_EBP + 0xc,0xad4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar2,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
    else {
      iVar1 = FUN_007bd07c(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),0,
                           0xffffffff,0,0,0);
      if (iVar1 != 0) {
        FUN_00790b31(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),6,0,0x7fffffff)
        ;
        uVar2 = 1;
        goto LAB_007ba3bd;
      }
    }
  }
  uVar2 = 0;
LAB_007ba3bd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


