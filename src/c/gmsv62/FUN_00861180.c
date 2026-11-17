/* FUN_00861180 - 0x00861180 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00861180(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc);
  dVar1 = (double)iVar3;
  iVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10);
  dVar2 = (double)iVar4;
  fVar5 = (float10)FUN_0087af44(dVar1 * dVar1 + dVar2 * dVar2);
  *(double *)(param_1 + 0x40) = (double)fVar5;
  *(double *)(param_1 + 0x30) = (double)((float10)iVar3 / fVar5);
  *(double *)(param_1 + 0x38) = (double)((float10)iVar4 / fVar5);
  return;
}


