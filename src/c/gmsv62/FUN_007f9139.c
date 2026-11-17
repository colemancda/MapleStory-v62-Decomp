/* FUN_007f9139 - 0x007f9139 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f9139(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x20);
  puVar3 = (undefined4 *)(param_1 + 0x3f0);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x474);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x478);
  fVar4 = (float10)FUN_004f1993((undefined4 *)(param_1 + 0x3f0),*(undefined4 *)(param_1 + 0x400));
  fVar5 = (float10)FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
  if ((float10)(double)fVar4 == fVar5) {
    fVar4 = (float10)FUN_004f1993(param_1 + 0x408,*(undefined4 *)(param_1 + 0x418));
    fVar5 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    if (fVar5 == (float10)(double)fVar4) {
      *(undefined4 *)(param_1 + 0x458) = 0;
      goto LAB_007f91ce;
    }
  }
  *(undefined4 *)(param_1 + 0x458) = 1;
LAB_007f91ce:
  *(undefined4 *)(param_1 + 0x468) = 1;
  return;
}


