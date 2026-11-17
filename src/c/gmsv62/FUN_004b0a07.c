/* FUN_004b0a07 - 0x004b0a07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b0a07(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  if ((1 < *(int *)(extraout_ECX + 0x38)) && (*(int *)(extraout_ECX + 0x44) == 0)) {
    uVar3 = 0;
    uVar1 = FUN_004b0b80(*(undefined4 *)(unaff_EBP + 8));
    FUN_004b0c15(uVar1,uVar3);
    *(undefined4 *)(extraout_ECX + 0x44) = 1;
    FUN_008180db(-(uint)(extraout_ECX != 0) & extraout_ECX + 4U);
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a7);
    uVar1 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    FUN_004b3daf();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


