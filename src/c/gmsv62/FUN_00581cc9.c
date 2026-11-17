/* FUN_00581cc9 - 0x00581cc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00581cc9(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_005828c5();
  if ((((iVar2 != 0) &&
       (((*(int *)(unaff_EBP + 8) == 0x201 || (*(int *)(unaff_EBP + 8) == 0x203)) &&
        (0x6a < *(int *)(unaff_EBP + 0x10))))) &&
      (((*(int *)(unaff_EBP + 0x10) < 0x8f && (0x6f < *(int *)(unaff_EBP + 0x14))) &&
       (*(int *)(unaff_EBP + 0x14) < 0xa7)))) && (*(int *)(extraout_ECX + 0x88) == 0)) {
    *(undefined4 *)(extraout_ECX + 0x88) = 1;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a7);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


