/* FUN_0070ab65 - 0x0070ab65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0070ab65(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int *piVar3;
  
  DVar1 = timeGetTime();
  piVar3 = (int *)(*(int *)(param_1 + 0x5a0) + 8);
  *piVar3 = *piVar3 + (*(int *)(param_1 + 0x594) - DVar1);
  *(DWORD *)(param_1 + 0x594) = DVar1;
  if (*piVar3 < 0) {
    *piVar3 = 0;
  }
  iVar2 = *piVar3 / (*(int *)(*(int *)(param_1 + 0x5a0) + 4) / 0x30) + 1;
  if (*(int *)(param_1 + 0x590) != iVar2) {
    *(int *)(param_1 + 0x590) = iVar2;
    FUN_008161f1(0);
  }
  if (*(int *)(param_1 + 0x598) + 500 < (int)DVar1) {
    if (*(int *)(param_1 + 0x580) == 0) {
      if (*(int *)(param_1 + 0x78) != 0) {
        (**(code **)(*(int *)(param_1 + 4) + 0x34))();
      }
    }
    else {
      FUN_0070b05e();
    }
    *(DWORD *)(param_1 + 0x598) = DVar1;
  }
  return;
}


