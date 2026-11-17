/* FUN_0048f705 - 0x0048f705 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048f705(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00486745();
  if (*(int *)(unaff_EBP + 8) == 0x201) {
    iVar2 = FUN_0048fc8c(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4d3);
      uVar1 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d3cdd(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      *(int *)(extraout_ECX + 0x98) = iVar2;
      FUN_00458692(iVar2);
      FUN_008161f1(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


