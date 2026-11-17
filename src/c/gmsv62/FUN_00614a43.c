/* FUN_00614a43 - 0x00614a43 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00614a43(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_18 [16];
  int local_8;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    FUN_00878dfb(0x80004003);
  }
  psVar4 = (short *)FUN_00614b05(local_18);
  sVar1 = *psVar4;
  iVar5 = FUN_00402bc3(local_18);
  if (iVar5 < 0) {
    FUN_00878dfb(iVar5);
  }
  if (sVar1 == 0) {
    uVar6 = -(uint)(*(int *)(param_1 + 0x80) != 0) & *(int *)(param_1 + 0x80) - 0xcU;
    local_8 = *(int *)(uVar6 + 300);
    iVar5 = *(int *)(uVar6 + 0x128);
    iVar2 = *(int *)(uVar6 + 0x18);
    if (*(int *)(param_1 + 0x114) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(param_1 + 0x114);
    iVar5 = (**(code **)(*piVar3 + 0xb4))
                      (piVar3,(-(uint)(iVar2 != 0) & 5) + 0xc0007529 + (iVar5 * 3000 - local_8) * 10
                      );
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,piVar3,&DAT_00963df8);
    }
  }
  return;
}


