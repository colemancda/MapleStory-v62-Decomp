/* FUN_006f2894 - 0x006f2894 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f2894(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x5bc) == 0) || (*(int *)(unaff_EBP + 8) == 0)) {
    iVar3 = *(int *)(extraout_ECX + 0x5a8);
  }
  else {
    iVar3 = (*(int *)(extraout_ECX + 0x5a8) + 1) % 3;
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4d3);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007d3cdd(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  FUN_004b2699(iVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


