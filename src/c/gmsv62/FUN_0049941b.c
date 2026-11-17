/* FUN_0049941b - 0x0049941b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049941b(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x20))();
  if ((iVar2 != 0) && (*(int *)(extraout_ECX + 0x54) != 0)) {
    *(undefined4 *)(extraout_ECX + 0x54) = 0;
    *(undefined4 *)(extraout_ECX + 0x58) = 0;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x5a7);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    FUN_00498f74(3);
    (**(code **)(**(int **)(extraout_ECX + 0x24) + 0x1c))
              (*(undefined4 *)(extraout_ECX + 0x14),100,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


